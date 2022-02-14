
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct vm_area_struct {size_t vm_end; size_t vm_start; int vm_page_prot; int vm_pgoff; } ;
struct mlx5_ib_ucontext {int dm_pages; } ;
struct mlx5_ib_dev {TYPE_1__* mdev; } ;
struct ib_ucontext {int device; } ;
typedef scalar_t__ phys_addr_t ;
struct TYPE_2__ {size_t bar_addr; } ;


 int VAR_0 ;
 size_t FUNC_0 (TYPE_1__*,int ) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ib_ucontext*,struct vm_area_struct*,scalar_t__,size_t,int ) ;
 struct mlx5_ib_dev* FUNC_5 (int ) ;
 struct mlx5_ib_ucontext* FUNC_6 (struct ib_ucontext*) ;

__attribute__((used)) static int FUNC_7(struct ib_ucontext *VAR_3, struct vm_area_struct *VAR_4)
{
 struct mlx5_ib_ucontext *VAR_5 = FUNC_6(VAR_3);
 struct mlx5_ib_dev *VAR_6 = FUNC_5(VAR_3->device);
 u16 VAR_7 = FUNC_2(VAR_4->vm_pgoff);
 size_t VAR_8 = VAR_4->vm_end - VAR_4->vm_start;
 u32 VAR_9 = VAR_8 >> VAR_1;
 phys_addr_t VAR_10;

 if (FUNC_1(VAR_5->dm_pages, VAR_7 + VAR_9, VAR_7) !=
     VAR_7 + VAR_9)
  return -VAR_0;

 VAR_10 = ((VAR_6->mdev->bar_addr +
       FUNC_0(VAR_6->mdev, VAR_2)) >>
       VAR_1) +
       VAR_7;
 return FUNC_4(VAR_3, VAR_4, VAR_10, VAR_8,
     FUNC_3(VAR_4->vm_page_prot));
}
