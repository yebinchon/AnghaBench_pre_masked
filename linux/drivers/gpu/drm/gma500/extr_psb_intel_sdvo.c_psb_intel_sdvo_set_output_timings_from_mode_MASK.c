
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psb_intel_sdvo_dtd {int dummy; } ;
struct psb_intel_sdvo {int attached_output; } ;
struct drm_display_mode {int dummy; } ;


 int FUNC_0 (struct psb_intel_sdvo_dtd*,struct drm_display_mode const*) ;
 int FUNC_1 (struct psb_intel_sdvo*,struct psb_intel_sdvo_dtd*) ;
 int FUNC_2 (struct psb_intel_sdvo*,int ) ;

__attribute__((used)) static bool
FUNC_3(struct psb_intel_sdvo *VAR_0,
     const struct drm_display_mode *VAR_1)
{
 struct psb_intel_sdvo_dtd VAR_2;

 if (!FUNC_2(VAR_0,
       VAR_0->attached_output))
  return 0;

 FUNC_0(&VAR_2, VAR_1);
 if (!FUNC_1(VAR_0, &VAR_2))
  return 0;

 return 1;
}
