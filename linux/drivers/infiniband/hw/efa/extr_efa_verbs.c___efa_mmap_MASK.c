
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; int vm_page_prot; } ;
struct efa_ucontext {int ibucontext; } ;
struct efa_mmap_entry {int address; int mmap_flag; } ;
struct efa_dev {int ibdev; } ;





 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int *,char*,int,...) ;
 struct efa_mmap_entry* FUNC_1 (struct efa_dev*,struct efa_ucontext*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,struct vm_area_struct*,int,int,int ) ;
 int FUNC_6 (struct vm_area_struct*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_7(struct efa_dev *VAR_3, struct efa_ucontext *VAR_4,
        struct vm_area_struct *VAR_5, u64 VAR_6, u64 VAR_7)
{
 struct efa_mmap_entry *VAR_8;
 unsigned long VAR_9;
 u64 VAR_10;
 int VAR_11;

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_6, VAR_7);
 if (!VAR_8) {
  FUNC_0(&VAR_3->ibdev, "key[%#llx] does not have valid entry\n",
     VAR_6);
  return -VAR_0;
 }

 FUNC_0(&VAR_3->ibdev,
    "Mapping address[%#llx], length[%#llx], mmap_flag[%d]\n",
    VAR_8->address, VAR_7, VAR_8->mmap_flag);

 VAR_10 = VAR_8->address >> VAR_1;
 switch (VAR_8->mmap_flag) {
 case 129:
  VAR_11 = FUNC_5(&VAR_4->ibucontext, VAR_5, VAR_10, VAR_7,
     FUNC_3(VAR_5->vm_page_prot));
  break;
 case 128:
  VAR_11 = FUNC_5(&VAR_4->ibucontext, VAR_5, VAR_10, VAR_7,
     FUNC_4(VAR_5->vm_page_prot));
  break;
 case 130:
  for (VAR_9 = VAR_5->vm_start; VAR_9 < VAR_5->vm_end;
       VAR_9 += VAR_2, VAR_10++) {
   VAR_11 = FUNC_6(VAR_5, VAR_9, FUNC_2(VAR_10));
   if (VAR_11)
    break;
  }
  break;
 default:
  VAR_11 = -VAR_0;
 }

 if (VAR_11) {
  FUNC_0(
   &VAR_3->ibdev,
   "Couldn't mmap address[%#llx] length[%#llx] mmap_flag[%d] err[%d]\n",
   VAR_8->address, VAR_7, VAR_8->mmap_flag, VAR_11);
  return VAR_11;
 }

 return 0;
}
