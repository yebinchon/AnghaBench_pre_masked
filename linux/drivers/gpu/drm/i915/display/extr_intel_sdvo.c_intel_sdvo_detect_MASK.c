
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct intel_sdvo_connector {int output_flag; } ;
struct intel_sdvo {int attached_output; int has_hdmi_monitor; int has_hdmi_audio; } ;
struct edid {int dummy; } ;
struct TYPE_2__ {int id; } ;
struct drm_connector {int name; TYPE_1__ base; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int FUNC_0 (char*,int,int,...) ;
 scalar_t__ FUNC_1 (struct intel_sdvo_connector*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct intel_sdvo* FUNC_2 (struct drm_connector*) ;
 scalar_t__ FUNC_3 (struct intel_sdvo_connector*,struct edid*) ;
 struct edid* FUNC_4 (struct drm_connector*) ;
 struct edid* FUNC_5 (struct drm_connector*) ;
 int FUNC_6 (struct intel_sdvo*,int ,int*,int) ;
 int FUNC_7 (struct drm_connector*) ;
 int FUNC_8 (struct edid*) ;
 struct intel_sdvo_connector* FUNC_9 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_10(struct drm_connector *VAR_4, bool VAR_5)
{
 u16 VAR_6;
 struct intel_sdvo *VAR_7 = FUNC_2(VAR_4);
 struct intel_sdvo_connector *VAR_8 = FUNC_9(VAR_4);
 enum drm_connector_status VAR_9;

 FUNC_0("[CONNECTOR:%d:%s]\n",
        VAR_4->base.id, VAR_4->name);

 if (!FUNC_6(VAR_7,
      VAR_0,
      &VAR_6, 2))
  return VAR_3;

 FUNC_0("SDVO response %d %d [%x]\n",
        VAR_6 & 0xff, VAR_6 >> 8,
        VAR_8->output_flag);

 if (VAR_6 == 0)
  return VAR_2;

 VAR_7->attached_output = VAR_6;

 VAR_7->has_hdmi_monitor = 0;
 VAR_7->has_hdmi_audio = 0;

 if ((VAR_8->output_flag & VAR_6) == 0)
  VAR_9 = VAR_2;
 else if (FUNC_1(VAR_8))
  VAR_9 = FUNC_7(VAR_4);
 else {
  struct edid *VAR_10;


  VAR_10 = FUNC_5(VAR_4);
  if (VAR_10 == ((void*)0))
   VAR_10 = FUNC_4(VAR_4);
  if (VAR_10 != ((void*)0)) {
   if (FUNC_3(VAR_8,
             VAR_10))
    VAR_9 = VAR_1;
   else
    VAR_9 = VAR_2;

   FUNC_8(VAR_10);
  } else
   VAR_9 = VAR_1;
 }

 return VAR_9;
}
