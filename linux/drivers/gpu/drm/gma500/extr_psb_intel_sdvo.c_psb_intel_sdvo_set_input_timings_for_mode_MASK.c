
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psb_intel_sdvo {int input_dtd; } ;
struct drm_display_mode {int clock; int vdisplay; int hdisplay; } ;


 int FUNC_0 (struct drm_display_mode*,int ) ;
 int FUNC_1 (struct psb_intel_sdvo*,int,int ,int ) ;
 int FUNC_2 (struct drm_display_mode*,int *) ;
 int FUNC_3 (struct psb_intel_sdvo*,int *) ;
 int FUNC_4 (struct psb_intel_sdvo*) ;

__attribute__((used)) static bool
FUNC_5(struct psb_intel_sdvo *VAR_0,
     const struct drm_display_mode *VAR_1,
     struct drm_display_mode *VAR_2)
{

 if (!FUNC_4(VAR_0))
  return 0;

 if (!FUNC_1(VAR_0,
            VAR_1->clock / 10,
            VAR_1->hdisplay,
            VAR_1->vdisplay))
  return 0;

 if (!FUNC_3(VAR_0,
         &VAR_0->input_dtd))
  return 0;

 FUNC_2(VAR_2, &VAR_0->input_dtd);

 FUNC_0(VAR_2, 0);
 return 1;
}
