
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dce_abm_shift {int dummy; } ;
struct dce_abm_registers {int dummy; } ;
struct dce_abm_mask {int dummy; } ;
struct TYPE_2__ {scalar_t__ LVTMA_PWRSEQ_REF_DIV_BL_PWM_REF_DIV; scalar_t__ BL_PWM_PERIOD_CNTL; scalar_t__ BL_PWM_CNTL2; scalar_t__ BL_PWM_CNTL; } ;
struct abm {int dmcu_is_running; TYPE_1__ stored_backlight_registers; int * funcs; struct dc_context* ctx; } ;
struct dce_abm {struct dce_abm_mask const* abm_mask; struct dce_abm_shift const* abm_shift; struct dce_abm_registers const* regs; struct abm base; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(
 struct dce_abm *VAR_1,
 struct dc_context *VAR_2,
 const struct dce_abm_registers *VAR_3,
 const struct dce_abm_shift *VAR_4,
 const struct dce_abm_mask *VAR_5)
{
 struct abm *VAR_6 = &VAR_1->base;

 VAR_6->ctx = VAR_2;
 VAR_6->funcs = &VAR_0;
 VAR_6->stored_backlight_registers.BL_PWM_CNTL = 0;
 VAR_6->stored_backlight_registers.BL_PWM_CNTL2 = 0;
 VAR_6->stored_backlight_registers.BL_PWM_PERIOD_CNTL = 0;
 VAR_6->stored_backlight_registers.LVTMA_PWRSEQ_REF_DIV_BL_PWM_REF_DIV = 0;
 VAR_6->dmcu_is_running = 0;

 VAR_1->regs = VAR_3;
 VAR_1->abm_shift = VAR_4;
 VAR_1->abm_mask = VAR_5;
}
