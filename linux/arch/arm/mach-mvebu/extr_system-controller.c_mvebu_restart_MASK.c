
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum reboot_mode { ____Placeholder_reboot_mode } reboot_mode ;
struct TYPE_2__ {scalar_t__ system_soft_reset_offset; int system_soft_reset; scalar_t__ rstoutn_mask_offset; int rstoutn_mask_reset_out_en; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(enum reboot_mode VAR_2, const char *VAR_3)
{
 if (!VAR_1) {
  FUNC_0("Cannot restart, system-controller not available: check the device tree\n");
 } else {



  FUNC_1(VAR_0->rstoutn_mask_reset_out_en,
   VAR_1 +
   VAR_0->rstoutn_mask_offset);



  FUNC_1(VAR_0->system_soft_reset,
   VAR_1 +
   VAR_0->system_soft_reset_offset);
 }

 while (1)
  ;
}
