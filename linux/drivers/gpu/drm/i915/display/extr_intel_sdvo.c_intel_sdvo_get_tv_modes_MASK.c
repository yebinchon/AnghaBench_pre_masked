
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int tv_res ;
struct intel_sdvo_sdtv_resolution_request {int dummy; } ;
struct intel_sdvo {int attached_output; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_4__ {int mode; } ;
struct drm_connector_state {TYPE_2__ tv; } ;
struct TYPE_3__ {int id; } ;
struct drm_connector {int dev; int name; TYPE_1__ base; struct drm_connector_state* state; } ;
typedef int format_map ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int ) ;
 int VAR_0 ;
 struct drm_display_mode* FUNC_3 (int ,int *) ;
 int FUNC_4 (struct drm_connector*,struct drm_display_mode*) ;
 struct intel_sdvo* FUNC_5 (struct drm_connector*) ;
 int FUNC_6 (struct intel_sdvo*,int*,int) ;
 int FUNC_7 (struct intel_sdvo*,int ) ;
 int FUNC_8 (struct intel_sdvo*,int ,struct intel_sdvo_sdtv_resolution_request*,int) ;
 int FUNC_9 (struct intel_sdvo_sdtv_resolution_request*,int*,int ) ;
 int FUNC_10 (int,int) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_11(struct drm_connector *VAR_2)
{
 struct intel_sdvo *VAR_3 = FUNC_5(VAR_2);
 const struct drm_connector_state *VAR_4 = VAR_2->state;
 struct intel_sdvo_sdtv_resolution_request VAR_5;
 u32 VAR_6 = 0, VAR_7 = 0;
 int VAR_8;

 FUNC_2("[CONNECTOR:%d:%s]\n",
        VAR_2->base.id, VAR_2->name);





 VAR_7 = 1 << VAR_4->tv.mode;
 FUNC_9(&VAR_5, &VAR_7,
        FUNC_10(sizeof(VAR_7), sizeof(struct intel_sdvo_sdtv_resolution_request)));

 if (!FUNC_7(VAR_3, VAR_3->attached_output))
  return;

 FUNC_1(sizeof(VAR_5) != 3);
 if (!FUNC_8(VAR_3,
      VAR_0,
      &VAR_5, sizeof(VAR_5)))
  return;
 if (!FUNC_6(VAR_3, &VAR_6, 3))
  return;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++)
  if (VAR_6 & (1 << VAR_8)) {
   struct drm_display_mode *VAR_9;
   VAR_9 = FUNC_3(VAR_2->dev,
         &VAR_1[VAR_8]);
   if (VAR_9)
    FUNC_4(VAR_2, VAR_9);
  }
}
