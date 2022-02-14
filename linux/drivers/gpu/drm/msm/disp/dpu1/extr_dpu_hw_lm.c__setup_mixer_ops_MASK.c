
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_mdss_cfg {int hwversion; } ;
struct dpu_hw_lm_ops {int setup_border_color; int setup_alpha_out; int setup_blend_config; int setup_mixer_out; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct dpu_mdss_cfg *VAR_5,
  struct dpu_hw_lm_ops *VAR_6,
  unsigned long VAR_7)
{
 VAR_6->setup_mixer_out = VAR_4;
 if (FUNC_1(VAR_5->hwversion) || FUNC_0(VAR_5->hwversion))
  VAR_6->setup_blend_config = VAR_1;
 else
  VAR_6->setup_blend_config = VAR_0;
 VAR_6->setup_alpha_out = VAR_3;
 VAR_6->setup_border_color = VAR_2;
}
