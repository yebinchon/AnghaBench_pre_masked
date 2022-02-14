
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int in_use; } ;
struct drbd_device {int misc_wait; TYPE_1__ md_io; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct drbd_device *VAR_0)
{
 if (FUNC_0(&VAR_0->md_io.in_use))
  FUNC_1(&VAR_0->misc_wait);
}
