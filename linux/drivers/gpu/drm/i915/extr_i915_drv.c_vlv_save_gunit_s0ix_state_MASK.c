
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlv_s0ix_state {void* clock_gate_dis2; void* pcbr; void* gu_ctl1; void* gu_ctl0; void* pmwgicz; void* gtlc_survive; void* gtlc_wake_ctrl; void* gt_fifoctl; void* tilectl; void** gt_scratch; void* pm_ier; void* pm_imr; void* gt_ier; void* gt_imr; void* spare2gh; void* rcedata; void* rcubmabdtmr; void* rp_deucsw; void* rp_down_timeout; void* pwrdwnupctl; void* ecobus; void* rpdeuc; void* rpdeuhwtc; void* gfxpause; void* misccpctl; void* rstctl; void* rcgctl2; void* rcgctl1; void* ucgctl3; void* ucgctl1; void* mbctl; void* gsckgctl; void* g3dctl; void* tlb_rd_addr; void* blt_hwsp; void* bsd_hwsp; void* ecochk; void* render_hwsp; void* gfx_max_req_count; void* media_max_req_count; void** lra_limits; void* gfx_pend_tlb1; void* gfx_pend_tlb0; void* arb_mode; void* gfx_prio_ctrl; void* wr_watermark; } ;
struct drm_i915_private {struct vlv_s0ix_state* vlv_s0ix_state; } ;


 int VAR_0 ;
 int FUNC_0 (void**) ;
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
 void* FUNC_3 (int ) ;
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

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_44)
{
 struct vlv_s0ix_state *VAR_45 = VAR_44->vlv_s0ix_state;
 int VAR_46;

 if (!VAR_45)
  return;


 VAR_45->wr_watermark = FUNC_3(VAR_26);
 VAR_45->gfx_prio_ctrl = FUNC_3(VAR_22);
 VAR_45->arb_mode = FUNC_3(VAR_0);
 VAR_45->gfx_pend_tlb0 = FUNC_3(VAR_20);
 VAR_45->gfx_pend_tlb1 = FUNC_3(VAR_21);

 for (VAR_46 = 0; VAR_46 < FUNC_0(VAR_45->lra_limits); VAR_46++)
  VAR_45->lra_limits[VAR_46] = FUNC_3(FUNC_2(VAR_46));

 VAR_45->media_max_req_count = FUNC_3(VAR_23);
 VAR_45->gfx_max_req_count = FUNC_3(VAR_19);

 VAR_45->render_hwsp = FUNC_3(VAR_30);
 VAR_45->ecochk = FUNC_3(VAR_4);
 VAR_45->bsd_hwsp = FUNC_3(VAR_2);
 VAR_45->blt_hwsp = FUNC_3(VAR_1);

 VAR_45->tlb_rd_addr = FUNC_3(VAR_25);


 VAR_45->g3dctl = FUNC_3(VAR_32);
 VAR_45->gsckgctl = FUNC_3(VAR_33);
 VAR_45->mbctl = FUNC_3(VAR_6);


 VAR_45->ucgctl1 = FUNC_3(VAR_17);
 VAR_45->ucgctl3 = FUNC_3(VAR_18);
 VAR_45->rcgctl1 = FUNC_3(VAR_9);
 VAR_45->rcgctl2 = FUNC_3(VAR_10);
 VAR_45->rstctl = FUNC_3(VAR_16);
 VAR_45->misccpctl = FUNC_3(VAR_24);


 VAR_45->gfxpause = FUNC_3(VAR_5);
 VAR_45->rpdeuhwtc = FUNC_3(VAR_14);
 VAR_45->rpdeuc = FUNC_3(VAR_12);
 VAR_45->ecobus = FUNC_3(VAR_3);
 VAR_45->pwrdwnupctl = FUNC_3(VAR_41);
 VAR_45->rp_down_timeout = FUNC_3(VAR_15);
 VAR_45->rp_deucsw = FUNC_3(VAR_13);
 VAR_45->rcubmabdtmr = FUNC_3(VAR_11);
 VAR_45->rcedata = FUNC_3(VAR_42);
 VAR_45->spare2gh = FUNC_3(VAR_43);


 VAR_45->gt_imr = FUNC_3(VAR_29);
 VAR_45->gt_ier = FUNC_3(VAR_28);
 VAR_45->pm_imr = FUNC_3(VAR_8);
 VAR_45->pm_ier = FUNC_3(VAR_7);

 for (VAR_46 = 0; VAR_46 < FUNC_0(VAR_45->gt_scratch); VAR_46++)
  VAR_45->gt_scratch[VAR_46] = FUNC_3(FUNC_1(VAR_46));


 VAR_45->tilectl = FUNC_3(VAR_31);
 VAR_45->gt_fifoctl = FUNC_3(VAR_27);
 VAR_45->gtlc_wake_ctrl = FUNC_3(VAR_35);
 VAR_45->gtlc_survive = FUNC_3(VAR_34);
 VAR_45->pmwgicz = FUNC_3(VAR_40);


 VAR_45->gu_ctl0 = FUNC_3(VAR_37);
 VAR_45->gu_ctl1 = FUNC_3(VAR_38);
 VAR_45->pcbr = FUNC_3(VAR_39);
 VAR_45->clock_gate_dis2 = FUNC_3(VAR_36);
}
