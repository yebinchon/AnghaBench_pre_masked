
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct spinlock {int dummy; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (struct vm_area_struct*) ;

int FUNC_2(struct spinlock *VAR_0,
      struct spinlock *VAR_1,
      struct vm_area_struct *VAR_2)
{
 if (FUNC_0())
  return (VAR_0 != VAR_1) && FUNC_1(VAR_2);

 return 1;
}
