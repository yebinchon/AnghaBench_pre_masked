
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int (* update_pending_flush ) (struct dpu_hw_ctl*,int ) ;int (* get_bitmask_intf ) (struct dpu_hw_ctl*,int *,int ) ;} ;
struct dpu_hw_ctl {TYPE_1__ ops; } ;
struct dpu_encoder_phys {int intf_idx; struct dpu_hw_ctl* hw_ctl; int hw_pp; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct dpu_encoder_phys*) ;
 int FUNC_2 (struct dpu_encoder_phys*,int ) ;
 int FUNC_3 (struct dpu_encoder_phys*) ;
 int FUNC_4 (struct dpu_hw_ctl*,int *,int ) ;
 int FUNC_5 (struct dpu_hw_ctl*,int ) ;

__attribute__((used)) static void FUNC_6(
  struct dpu_encoder_phys *VAR_0)
{
 struct dpu_hw_ctl *VAR_1;
 u32 VAR_2 = 0;

 if (!VAR_0 || !VAR_0->hw_ctl || !VAR_0->hw_pp) {
  FUNC_0("invalid arg(s), encoder %d\n", VAR_0 != 0);
  return;
 }

 FUNC_2(VAR_0, VAR_0->intf_idx);

 FUNC_1(VAR_0);

 if (!FUNC_3(VAR_0))
  return;

 VAR_1 = VAR_0->hw_ctl;
 VAR_1->ops.get_bitmask_intf(VAR_1, &VAR_2, VAR_0->intf_idx);
 VAR_1->ops.update_pending_flush(VAR_1, VAR_2);
}
