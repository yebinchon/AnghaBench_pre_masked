
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int tv_res ;
struct psb_intel_sdvo_sdtv_resolution_request {int dummy; } ;
struct psb_intel_sdvo {int tv_format_index; int attached_output; } ;
struct drm_display_mode {int dummy; } ;
struct drm_connector {int dev; } ;
typedef int format_map ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 struct drm_display_mode* FUNC_2 (int ,int *) ;
 int FUNC_3 (struct drm_connector*,struct drm_display_mode*) ;
 struct psb_intel_sdvo* FUNC_4 (struct drm_connector*) ;
 int FUNC_5 (struct psb_intel_sdvo_sdtv_resolution_request*,int*,int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct psb_intel_sdvo*,int*,int) ;
 int FUNC_8 (struct psb_intel_sdvo*,int ) ;
 int FUNC_9 (struct psb_intel_sdvo*,int ,struct psb_intel_sdvo_sdtv_resolution_request*,int) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_10(struct drm_connector *VAR_2)
{
 struct psb_intel_sdvo *VAR_3 = FUNC_4(VAR_2);
 struct psb_intel_sdvo_sdtv_resolution_request VAR_4;
 uint32_t VAR_5 = 0, VAR_6 = 0;
 int VAR_7;




 VAR_6 = 1 << VAR_3->tv_format_index;
 FUNC_5(&VAR_4, &VAR_6,
        FUNC_6(sizeof(VAR_6), sizeof(struct psb_intel_sdvo_sdtv_resolution_request)));

 if (!FUNC_8(VAR_3, VAR_3->attached_output))
  return;

 FUNC_1(sizeof(VAR_4) != 3);
 if (!FUNC_9(VAR_3,
      VAR_0,
      &VAR_4, sizeof(VAR_4)))
  return;
 if (!FUNC_7(VAR_3, &VAR_5, 3))
  return;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++)
  if (VAR_5 & (1 << VAR_7)) {
   struct drm_display_mode *VAR_8;
   VAR_8 = FUNC_2(VAR_2->dev,
         &VAR_1[VAR_7]);
   if (VAR_8)
    FUNC_3(VAR_2, VAR_8);
  }
}
