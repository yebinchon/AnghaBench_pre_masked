
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vlv_s0ix_state {int wr_watermark; int gfx_prio_ctrl; int arb_mode; int gfx_pend_tlb0; int gfx_pend_tlb1; int* lra_limits; int media_max_req_count; int gfx_max_req_count; int render_hwsp; int ecochk; int bsd_hwsp; int blt_hwsp; int tlb_rd_addr; int g3dctl; int gsckgctl; int mbctl; int ucgctl1; int ucgctl3; int rcgctl1; int rcgctl2; int rstctl; int misccpctl; int gfxpause; int rpdeuhwtc; int rpdeuc; int ecobus; int pwrdwnupctl; int rp_down_timeout; int rp_deucsw; int rcubmabdtmr; int rcedata; int spare2gh; int gt_imr; int gt_ier; int pm_imr; int pm_ier; int* gt_scratch; int tilectl; int gt_fifoctl; int gtlc_wake_ctrl; int gtlc_survive; int pmwgicz; int gu_ctl0; int gu_ctl1; int pcbr; int clock_gate_dis2; } ;
struct drm_i915_private {struct vlv_s0ix_state* vlv_s0ix_state; } ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_46)
{
 struct vlv_s0ix_state *VAR_47 = VAR_46->vlv_s0ix_state;
 u32 VAR_48;
 int VAR_49;

 if (!VAR_47)
  return;


 FUNC_4(VAR_26, VAR_47->wr_watermark);
 FUNC_4(VAR_22, VAR_47->gfx_prio_ctrl);
 FUNC_4(VAR_0, VAR_47->arb_mode | (0xffff << 16));
 FUNC_4(VAR_20, VAR_47->gfx_pend_tlb0);
 FUNC_4(VAR_21, VAR_47->gfx_pend_tlb1);

 for (VAR_49 = 0; VAR_49 < FUNC_0(VAR_47->lra_limits); VAR_49++)
  FUNC_4(FUNC_2(VAR_49), VAR_47->lra_limits[VAR_49]);

 FUNC_4(VAR_23, VAR_47->media_max_req_count);
 FUNC_4(VAR_19, VAR_47->gfx_max_req_count);

 FUNC_4(VAR_30, VAR_47->render_hwsp);
 FUNC_4(VAR_4, VAR_47->ecochk);
 FUNC_4(VAR_2, VAR_47->bsd_hwsp);
 FUNC_4(VAR_1, VAR_47->blt_hwsp);

 FUNC_4(VAR_25, VAR_47->tlb_rd_addr);


 FUNC_4(VAR_32, VAR_47->g3dctl);
 FUNC_4(VAR_34, VAR_47->gsckgctl);
 FUNC_4(VAR_6, VAR_47->mbctl);


 FUNC_4(VAR_17, VAR_47->ucgctl1);
 FUNC_4(VAR_18, VAR_47->ucgctl3);
 FUNC_4(VAR_9, VAR_47->rcgctl1);
 FUNC_4(VAR_10, VAR_47->rcgctl2);
 FUNC_4(VAR_16, VAR_47->rstctl);
 FUNC_4(VAR_24, VAR_47->misccpctl);


 FUNC_4(VAR_5, VAR_47->gfxpause);
 FUNC_4(VAR_14, VAR_47->rpdeuhwtc);
 FUNC_4(VAR_12, VAR_47->rpdeuc);
 FUNC_4(VAR_3, VAR_47->ecobus);
 FUNC_4(VAR_43, VAR_47->pwrdwnupctl);
 FUNC_4(VAR_15,VAR_47->rp_down_timeout);
 FUNC_4(VAR_13, VAR_47->rp_deucsw);
 FUNC_4(VAR_11, VAR_47->rcubmabdtmr);
 FUNC_4(VAR_44, VAR_47->rcedata);
 FUNC_4(VAR_45, VAR_47->spare2gh);


 FUNC_4(VAR_29, VAR_47->gt_imr);
 FUNC_4(VAR_28, VAR_47->gt_ier);
 FUNC_4(VAR_8, VAR_47->pm_imr);
 FUNC_4(VAR_7, VAR_47->pm_ier);

 for (VAR_49 = 0; VAR_49 < FUNC_0(VAR_47->gt_scratch); VAR_49++)
  FUNC_4(FUNC_1(VAR_49), VAR_47->gt_scratch[VAR_49]);


 FUNC_4(VAR_31, VAR_47->tilectl);
 FUNC_4(VAR_27, VAR_47->gt_fifoctl);





 VAR_48 = FUNC_3(VAR_37);
 VAR_48 &= VAR_35;
 VAR_48 |= VAR_47->gtlc_wake_ctrl & ~VAR_35;
 FUNC_4(VAR_37, VAR_48);

 VAR_48 = FUNC_3(VAR_36);
 VAR_48 &= VAR_33;
 VAR_48 |= VAR_47->gtlc_survive & ~VAR_33;
 FUNC_4(VAR_36, VAR_48);

 FUNC_4(VAR_42, VAR_47->pmwgicz);


 FUNC_4(VAR_39, VAR_47->gu_ctl0);
 FUNC_4(VAR_40, VAR_47->gu_ctl1);
 FUNC_4(VAR_41, VAR_47->pcbr);
 FUNC_4(VAR_38, VAR_47->clock_gate_dis2);
}
