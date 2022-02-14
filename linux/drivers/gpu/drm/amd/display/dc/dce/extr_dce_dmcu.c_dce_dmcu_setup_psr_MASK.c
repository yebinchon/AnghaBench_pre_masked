
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int psr_level; } ;
union dce_dmcu_psr_config_data_reg3 {scalar_t__ u32All; TYPE_4__ bits; } ;
struct TYPE_10__ {int num_of_controllers; int smu_phy_id; int frame_delay; int skip_wait_for_pll_lock; int dig_be; int dig_fe; } ;
union dce_dmcu_psr_config_data_reg2 {scalar_t__ u32All; TYPE_3__ bits; } ;
struct TYPE_9__ {int dcp_sel; int aux_repeat; int aux_chan; int frame_cap_ind; int phy_type; int dp_port_num; int rfb_update_auto_en; int hyst_lines; int timehyst_frames; } ;
union dce_dmcu_psr_config_data_reg1 {scalar_t__ u32All; TYPE_2__ bits; } ;
struct TYPE_12__ {int u32all; } ;
struct psr_context {int controllerId; TYPE_5__ psr_level; int numberOfControllers; int smuPhyId; int frame_delay; int skipPsrWaitForPllLock; int transmitterId; int engineId; int aux_repeats; int channel; int psrFrameCaptureIndicationReq; int phyType; int rfb_update_auto_en; int hyst_lines; int timehyst_frames; int sdpTransmitLineNumDeadline; int psrExitLinkTrainingRequired; } ;
struct dmcu {int ctx; } ;
struct dce_dmcu {int dummy; } ;
struct dc_link {TYPE_6__* link_enc; } ;
struct TYPE_13__ {TYPE_1__* funcs; } ;
struct TYPE_8__ {int (* psr_program_secondary_packet ) (TYPE_6__*,int ) ;int (* psr_program_dp_dphy_fast_training ) (TYPE_6__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,unsigned int,unsigned int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct dce_dmcu* FUNC_4 (struct dmcu*) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (TYPE_6__*,int ) ;
 int FUNC_7 (TYPE_6__*,int ) ;

__attribute__((used)) static bool FUNC_8(struct dmcu *VAR_13,
  struct dc_link *VAR_14,
  struct psr_context *VAR_15)
{
 struct dce_dmcu *VAR_16 = FUNC_4(VAR_13);

 unsigned int VAR_17 = 801;
 unsigned int VAR_18 = 100;

 union dce_dmcu_psr_config_data_reg1 VAR_19;
 union dce_dmcu_psr_config_data_reg2 VAR_20;
 union dce_dmcu_psr_config_data_reg3 VAR_21;

 VAR_14->link_enc->funcs->psr_program_dp_dphy_fast_training(VAR_14->link_enc,
   VAR_15->psrExitLinkTrainingRequired);



 FUNC_2(VAR_0,
   VAR_9, 0,
   VAR_10, 0,
   VAR_11, 0,
   VAR_12, 0);

 switch (VAR_15->controllerId) {

 case 1:
  FUNC_1(VAR_0,
    VAR_9, 1);
  break;
 case 2:
  FUNC_1(VAR_0,
    VAR_10, 1);
  break;
 case 3:
  FUNC_1(VAR_0,
    VAR_11, 1);
  break;
 case 4:
  FUNC_1(VAR_0,
    VAR_12, 1);
  break;
 case 5:




  break;
 case 6:





  break;
 default:
  FUNC_1(VAR_0,
    VAR_9, 1);
  break;
 }

 VAR_14->link_enc->funcs->psr_program_secondary_packet(VAR_14->link_enc,
   VAR_15->sdpTransmitLineNumDeadline);


 FUNC_3(VAR_3, VAR_7, 0,
     VAR_18,
     VAR_17);


 VAR_19 = 0;
 VAR_19 = VAR_15->timehyst_frames;
 VAR_19 = VAR_15->hyst_lines;
 VAR_19 =
   VAR_15->rfb_update_auto_en;
 VAR_19 = VAR_15->transmitterId;
 VAR_19 = VAR_15->controllerId;
 VAR_19 = VAR_15->phyType;
 VAR_19 =
   VAR_15->psrFrameCaptureIndicationReq;
 VAR_19 = VAR_15->channel;
 VAR_19 = VAR_15->aux_repeats;
 FUNC_5(VAR_13->ctx, FUNC_0(VAR_4),
     VAR_19);

 VAR_20 = 0;
 VAR_20 = VAR_15->engineId;
 VAR_20 = VAR_15->transmitterId;
 VAR_20 =
   VAR_15->skipPsrWaitForPllLock;
 VAR_20 = VAR_15->frame_delay;
 VAR_20 = VAR_15->smuPhyId;
 VAR_20 =
   VAR_15->numberOfControllers;
 FUNC_5(VAR_13->ctx, FUNC_0(VAR_5),
   VAR_20);

 VAR_21 = 0;
 VAR_21 = VAR_15->psr_level.u32all;
 FUNC_5(VAR_13->ctx, FUNC_0(VAR_6),
   VAR_21);


 FUNC_1(VAR_1,
   VAR_2, VAR_8);


 FUNC_1(VAR_3, VAR_7, 1);

 return 1;
}
