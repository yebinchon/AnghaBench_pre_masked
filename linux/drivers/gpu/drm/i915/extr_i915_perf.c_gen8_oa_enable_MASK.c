
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int format; } ;
struct i915_perf_stream {TYPE_1__ oa_buffer; struct drm_i915_private* dev_priv; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct i915_perf_stream*) ;

__attribute__((used)) static void FUNC_2(struct i915_perf_stream *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3->dev_priv;
 u32 VAR_5 = VAR_3->oa_buffer.format;
 FUNC_1(VAR_3);






 FUNC_0(VAR_0, (VAR_5 <<
        VAR_2) |
       VAR_1);
}
