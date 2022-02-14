
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_pipe_crc {int source; scalar_t__ skipped; } ;
struct drm_i915_private {struct intel_pipe_crc* pipe_crc; } ;
struct drm_crtc {size_t index; int dev; } ;
typedef int intel_wakeref_t ;
typedef enum intel_pipe_crc_source { ____Placeholder_intel_pipe_crc_source } intel_pipe_crc_source ;
typedef enum intel_display_power_domain { ____Placeholder_intel_display_power_domain } intel_display_power_domain ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (size_t) ;
 scalar_t__ FUNC_8 (char const*,int*) ;
 int FUNC_9 (struct drm_i915_private*,size_t,int*,int *) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (struct drm_i915_private*,int) ;
 int FUNC_12 (struct drm_i915_private*,int,int ) ;
 struct drm_i915_private* FUNC_13 (int ) ;
 int FUNC_14 (struct drm_crtc*) ;
 int FUNC_15 (struct drm_i915_private*,size_t) ;

int FUNC_16(struct drm_crtc *VAR_3, const char *VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_13(VAR_3->dev);
 struct intel_pipe_crc *VAR_6 = &VAR_5->pipe_crc[VAR_3->index];
 enum intel_display_power_domain VAR_7;
 enum intel_pipe_crc_source VAR_8;
 intel_wakeref_t VAR_9;
 u32 VAR_10 = 0;
 int VAR_11 = 0;
 bool VAR_12;

 if (FUNC_8(VAR_4, &VAR_8) < 0) {
  FUNC_0("unknown source %s\n", VAR_4);
  return -VAR_0;
 }

 VAR_7 = FUNC_7(VAR_3->index);
 VAR_9 = FUNC_11(VAR_5, VAR_7);
 if (!VAR_9) {
  FUNC_1("Trying to capture CRC while pipe is off\n");
  return -VAR_1;
 }

 VAR_12 = VAR_8 != VAR_2;
 if (VAR_12)
  FUNC_10(FUNC_14(VAR_3), 1);

 VAR_11 = FUNC_9(VAR_5, VAR_3->index, &VAR_8, &VAR_10);
 if (VAR_11 != 0)
  goto out;

 VAR_6->source = VAR_8;
 FUNC_2(FUNC_5(VAR_3->index), VAR_10);
 FUNC_6(FUNC_5(VAR_3->index));

 if (!VAR_8) {
  if (FUNC_4(VAR_5) || FUNC_3(VAR_5))
   FUNC_15(VAR_5, VAR_3->index);
 }

 VAR_6->skipped = 0;

out:
 if (!VAR_12)
  FUNC_10(FUNC_14(VAR_3), 0);

 FUNC_12(VAR_5, VAR_7, VAR_9);

 return VAR_11;
}
