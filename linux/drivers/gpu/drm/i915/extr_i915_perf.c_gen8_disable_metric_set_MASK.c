
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_perf_stream {struct drm_i915_private* dev_priv; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct i915_perf_stream*,int *) ;

__attribute__((used)) static void FUNC_3(struct i915_perf_stream *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->dev_priv;


 FUNC_2(VAR_2, ((void*)0));

 FUNC_1(VAR_0, (FUNC_0(VAR_0) &
          ~VAR_1));
}
