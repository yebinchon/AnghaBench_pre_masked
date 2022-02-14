
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vga_switcheroo_client {int pwr_state; TYPE_1__* pdev; scalar_t__ driver_power_control; } ;
typedef enum vga_switcheroo_state { ____Placeholder_vga_switcheroo_state } vga_switcheroo_state ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static enum vga_switcheroo_state
FUNC_2(struct vga_switcheroo_client *VAR_2)
{
 if (VAR_2->driver_power_control)
  if (FUNC_1(&VAR_2->pdev->dev) &&
      FUNC_0(&VAR_2->pdev->dev))
   return VAR_1;
  else
   return VAR_0;
 else
  return VAR_2->pwr_state;
}
