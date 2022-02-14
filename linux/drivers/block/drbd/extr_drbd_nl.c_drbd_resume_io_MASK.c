
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_device {int misc_wait; int suspend_cnt; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct drbd_device *VAR_0)
{
 if (FUNC_0(&VAR_0->suspend_cnt))
  FUNC_1(&VAR_0->misc_wait);
}
