
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
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_i915_private*,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct i915_perf_stream*,struct i915_oa_config const*) ;

__attribute__((used)) static int FUNC_6(struct i915_perf_stream *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3->dev_priv;
 const struct i915_oa_config *VAR_5 = VAR_3->oa_config;
 int VAR_6;
 if (FUNC_1(VAR_4, 9, 11)) {
  FUNC_0(VAR_0,
      FUNC_2(VAR_1 |
           VAR_2));
 }






 VAR_6 = FUNC_5(VAR_3, VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_3(VAR_4, VAR_5->mux_regs, VAR_5->mux_regs_len);
 FUNC_4();

 FUNC_3(VAR_4, VAR_5->b_counter_regs,
         VAR_5->b_counter_regs_len);

 return 0;
}
