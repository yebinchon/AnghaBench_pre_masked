
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpu_hw_intf_cfg {int mode_3d; int stream_sel; int intf_mode_sel; int intf; int member_0; } ;
struct TYPE_2__ {int (* setup_intf_cfg ) (struct dpu_hw_ctl*,struct dpu_hw_intf_cfg*) ;} ;
struct dpu_hw_ctl {TYPE_1__ ops; } ;
struct dpu_encoder_phys_cmd {int stream_sel; } ;
struct dpu_encoder_phys {int intf_idx; struct dpu_hw_ctl* hw_ctl; } ;


 int VAR_0 ;
 int FUNC_0 (struct dpu_encoder_phys*) ;
 int FUNC_1 (struct dpu_hw_ctl*,struct dpu_hw_intf_cfg*) ;
 struct dpu_encoder_phys_cmd* FUNC_2 (struct dpu_encoder_phys*) ;

__attribute__((used)) static void FUNC_3(
  struct dpu_encoder_phys *VAR_1)
{
 struct dpu_encoder_phys_cmd *VAR_2 =
   FUNC_2(VAR_1);
 struct dpu_hw_ctl *VAR_3;
 struct dpu_hw_intf_cfg VAR_4 = { 0 };

 if (!VAR_1)
  return;

 VAR_3 = VAR_1->hw_ctl;
 if (!VAR_3 || !VAR_3->ops.setup_intf_cfg)
  return;

 VAR_4.intf = VAR_1->intf_idx;
 VAR_4.intf_mode_sel = VAR_0;
 VAR_4.stream_sel = VAR_2->stream_sel;
 VAR_4.mode_3d = FUNC_0(VAR_1);
 VAR_3->ops.setup_intf_cfg(VAR_3, &VAR_4);
}
