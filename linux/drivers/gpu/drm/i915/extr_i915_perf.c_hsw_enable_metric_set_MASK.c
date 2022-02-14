
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_perf_stream {struct i915_oa_config* oa_config; struct drm_i915_private* dev_priv; } ;
struct i915_oa_config {int b_counter_regs_len; int b_counter_regs; int mux_regs_len; int mux_regs; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct drm_i915_private*,int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct i915_perf_stream *VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_4->dev_priv;
 const struct i915_oa_config *VAR_6 = VAR_4->oa_config;
 FUNC_1(VAR_3, (FUNC_0(VAR_3) &
        ~VAR_2));
 FUNC_1(VAR_1, (FUNC_0(VAR_1) |
      VAR_0));

 FUNC_2(VAR_5, VAR_6->mux_regs, VAR_6->mux_regs_len);
 FUNC_3();

 FUNC_2(VAR_5, VAR_6->b_counter_regs,
         VAR_6->b_counter_regs_len);

 return 0;
}
