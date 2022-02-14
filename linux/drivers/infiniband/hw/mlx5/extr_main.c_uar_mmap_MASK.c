
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; int vm_page_prot; int vm_pgoff; } ;
struct mlx5_bfreg_info {int num_sys_pages; int num_static_sys_pages; size_t total_num_bfregs; size_t* sys_pages; int lock; scalar_t__* count; int lib_uar_4k; } ;
struct mlx5_ib_ucontext {int ibucontext; struct mlx5_bfreg_info bfregi; } ;
struct mlx5_ib_dev {int mdev; } ;
typedef int phys_addr_t ;
typedef int pgprot_t ;
typedef enum mlx5_ib_mmap_cmd { ____Placeholder_mlx5_ib_mmap_cmd } mlx5_ib_mmap_cmd ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (struct mlx5_ib_dev*,int ) ;
 int FUNC_3 (int ,size_t*) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (struct mlx5_ib_dev*,char*,unsigned long,int *) ;
 int FUNC_6 (struct mlx5_ib_dev*,char*,int,int ) ;
 int FUNC_7 (struct mlx5_ib_dev*,struct mlx5_bfreg_info*,size_t) ;
 int FUNC_8 (struct mlx5_ib_dev*,char*,...) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,struct vm_area_struct*,int ,scalar_t__,int ) ;
 int FUNC_16 (struct mlx5_ib_dev*,size_t) ;

__attribute__((used)) static int FUNC_17(struct mlx5_ib_dev *VAR_4, enum mlx5_ib_mmap_cmd VAR_5,
      struct vm_area_struct *VAR_6,
      struct mlx5_ib_ucontext *VAR_7)
{
 struct mlx5_bfreg_info *VAR_8 = &VAR_7->bfregi;
 int VAR_9;
 unsigned long VAR_10;
 phys_addr_t VAR_11;
 pgprot_t VAR_12;
 u32 VAR_13 = 0;
 u32 VAR_14;
 int VAR_15 = (VAR_5 == 131);
 int VAR_16 = VAR_15 ? VAR_8->num_sys_pages :
    VAR_8->num_static_sys_pages;

 if (VAR_6->vm_end - VAR_6->vm_start != VAR_3)
  return -VAR_0;

 if (VAR_15)
  VAR_10 = FUNC_0(VAR_6->vm_pgoff) + VAR_8->num_static_sys_pages;
 else
  VAR_10 = FUNC_1(VAR_6->vm_pgoff);

 if (VAR_10 >= VAR_16) {
  FUNC_8(VAR_4, "invalid uar index %lu, max=%d\n",
        VAR_10, VAR_16);
  return -VAR_0;
 }

 switch (VAR_5) {
 case 128:
 case 131:





   return -VAR_1;


 case 129:

  VAR_12 = FUNC_14(VAR_6->vm_page_prot);
  break;
 case 130:
  VAR_12 = FUNC_13(VAR_6->vm_page_prot);
  break;
 default:
  return -VAR_0;
 }

 if (VAR_15) {
  int VAR_17;

  VAR_17 = FUNC_2(VAR_4, VAR_8->lib_uar_4k);
  VAR_13 = VAR_10 * (VAR_17 * VAR_2);
  if (VAR_13 >= VAR_8->total_num_bfregs) {
   FUNC_8(VAR_4, "invalid bfreg_dyn_idx %u, max=%u\n",
         VAR_13, VAR_8->total_num_bfregs);
   return -VAR_0;
  }

  FUNC_10(&VAR_8->lock);



  if (VAR_8->count[VAR_13]) {
   FUNC_8(VAR_4, "wrong offset, idx %lu is busy, bfregn=%u\n", VAR_10, VAR_13);
   FUNC_11(&VAR_8->lock);
   return -VAR_0;
  }

  VAR_8->count[VAR_13]++;
  FUNC_11(&VAR_8->lock);

  VAR_9 = FUNC_3(VAR_4->mdev, &VAR_14);
  if (VAR_9) {
   FUNC_8(VAR_4, "UAR alloc failed\n");
   goto free_bfreg;
  }
 } else {
  VAR_14 = VAR_8->sys_pages[VAR_10];
 }

 VAR_11 = FUNC_16(VAR_4, VAR_14);
 FUNC_5(VAR_4, "uar idx 0x%lx, pfn %pa\n", VAR_10, &VAR_11);

 VAR_9 = FUNC_15(&VAR_7->ibucontext, VAR_6, VAR_11, VAR_3,
    VAR_12);
 if (VAR_9) {
  FUNC_6(VAR_4,
       "rdma_user_mmap_io failed with error=%d, mmap_cmd=%s\n",
       VAR_9, FUNC_9(VAR_5));
  goto err;
 }

 if (VAR_15)
  VAR_8->sys_pages[VAR_10] = VAR_14;
 return 0;

err:
 if (!VAR_15)
  return VAR_9;

 FUNC_4(VAR_4->mdev, VAR_10);

free_bfreg:
 FUNC_7(VAR_4, VAR_8, VAR_13);

 return VAR_9;
}
