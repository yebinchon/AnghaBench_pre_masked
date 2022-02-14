
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int LowGfxclkInterruptThreshold; } ;
struct TYPE_4__ {TYPE_1__ pp_table; } ;
struct vega10_hwmgr {scalar_t__ low_sclk_interrupt_threshold; TYPE_2__ smc_state_table; } ;
struct pp_hwmgr {struct vega10_hwmgr* backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct pp_hwmgr*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_2)
{
 struct vega10_hwmgr *VAR_3 = VAR_2->backend;
 uint32_t VAR_4 = 0;

 if (FUNC_0(VAR_0) &&
  (VAR_3->low_sclk_interrupt_threshold != 0)) {
  VAR_4 =
    VAR_3->low_sclk_interrupt_threshold;

  VAR_3->smc_state_table.pp_table.LowGfxclkInterruptThreshold =
    FUNC_1(VAR_4);


  FUNC_2(VAR_2,
    VAR_1,
    (uint32_t)VAR_4);
 }

 return 0;
}
