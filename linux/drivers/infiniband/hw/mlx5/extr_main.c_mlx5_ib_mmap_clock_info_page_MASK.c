
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; int vm_flags; int vm_pgoff; } ;
struct mlx5_ib_ucontext {int dummy; } ;
struct mlx5_ib_dev {TYPE_1__* mdev; } ;
struct TYPE_2__ {int clock_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vm_area_struct*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct mlx5_ib_dev *VAR_9,
     struct vm_area_struct *VAR_10,
     struct mlx5_ib_ucontext *VAR_11)
{
 if ((VAR_10->vm_end - VAR_10->vm_start != VAR_4) ||
     !(VAR_10->vm_flags & VAR_7))
  return -VAR_0;

 if (FUNC_0(VAR_10->vm_pgoff) != VAR_3)
  return -VAR_1;

 if (VAR_10->vm_flags & (VAR_8 | VAR_5))
  return -VAR_2;
 VAR_10->vm_flags &= ~VAR_6;

 if (!VAR_9->mdev->clock_info)
  return -VAR_1;

 return FUNC_2(VAR_10, VAR_10->vm_start,
         FUNC_1(VAR_9->mdev->clock_info));
}
