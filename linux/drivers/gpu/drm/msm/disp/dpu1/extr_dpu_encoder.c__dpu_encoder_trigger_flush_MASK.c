
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct drm_encoder {int dummy; } ;
struct TYPE_2__ {int (* get_pending_flush ) (struct dpu_hw_ctl*) ;int (* trigger_flush ) (struct dpu_hw_ctl*) ;int (* update_pending_flush ) (struct dpu_hw_ctl*,int ) ;} ;
struct dpu_hw_ctl {int idx; TYPE_1__ ops; } ;
struct dpu_encoder_phys {int intf_idx; struct dpu_hw_ctl* hw_ctl; int hw_pp; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_encoder*) ;
 int VAR_0 ;
 int FUNC_2 (struct dpu_encoder_phys*) ;
 int FUNC_3 (struct dpu_hw_ctl*,int ) ;
 int FUNC_4 (struct dpu_hw_ctl*) ;
 int FUNC_5 (struct dpu_hw_ctl*) ;
 int FUNC_6 (int ,int ,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct drm_encoder *VAR_1,
  struct dpu_encoder_phys *VAR_2, uint32_t VAR_3)
{
 struct dpu_hw_ctl *VAR_4;
 int VAR_5;
 u32 VAR_6 = VAR_0;

 if (!VAR_2->hw_pp) {
  FUNC_0("invalid pingpong hw\n");
  return;
 }

 VAR_4 = VAR_2->hw_ctl;
 if (!VAR_4 || !VAR_4->ops.trigger_flush) {
  FUNC_0("missing trigger cb\n");
  return;
 }

 VAR_5 = FUNC_2(VAR_2);

 if (VAR_3 && VAR_4->ops.update_pending_flush)
  VAR_4->ops.update_pending_flush(VAR_4, VAR_3);

 VAR_4->ops.trigger_flush(VAR_4);

 if (VAR_4->ops.get_pending_flush)
  VAR_6 = VAR_4->ops.get_pending_flush(VAR_4);

 FUNC_6(FUNC_1(VAR_1), VAR_2->intf_idx,
        VAR_5, VAR_4->idx,
        VAR_3, VAR_6);
}
