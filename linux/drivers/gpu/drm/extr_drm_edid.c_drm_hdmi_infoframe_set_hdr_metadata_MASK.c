
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int max_cll; int max_fall; int min_display_mastering_luminance; int max_display_mastering_luminance; int white_point; int display_primaries; int metadata_type; int eotf; } ;
struct hdr_output_metadata {TYPE_4__ hdmi_metadata_type1; } ;
struct hdmi_drm_infoframe {int max_cll; int max_fall; int min_display_mastering_luminance; int max_display_mastering_luminance; int white_point; int display_primaries; int metadata_type; int eotf; } ;
struct drm_connector_state {TYPE_1__* hdr_output_metadata; struct drm_connector* connector; } ;
struct TYPE_6__ {int eotf; } ;
struct TYPE_7__ {TYPE_2__ hdmi_type1; } ;
struct drm_connector {TYPE_3__ hdr_sink_metadata; } ;
struct TYPE_5__ {struct hdr_output_metadata* data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct hdmi_drm_infoframe*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *,int) ;

int
FUNC_5(struct hdmi_drm_infoframe *VAR_1,
        const struct drm_connector_state *VAR_2)
{
 struct drm_connector *VAR_3;
 struct hdr_output_metadata *VAR_4;
 int VAR_5;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_3 = VAR_2->connector;

 if (!VAR_2->hdr_output_metadata)
  return -VAR_0;

 VAR_4 = VAR_2->hdr_output_metadata->data;

 if (!VAR_4 || !VAR_3)
  return -VAR_0;


 if (!FUNC_3(VAR_4->hdmi_metadata_type1.eotf,
     VAR_3->hdr_sink_metadata.hdmi_type1.eotf)) {
  FUNC_1("EOTF Not Supported\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_1->eotf = VAR_4->hdmi_metadata_type1.eotf;
 VAR_1->metadata_type = VAR_4->hdmi_metadata_type1.metadata_type;

 FUNC_0(sizeof(VAR_1->display_primaries) !=
       sizeof(VAR_4->hdmi_metadata_type1.display_primaries));
 FUNC_0(sizeof(VAR_1->white_point) !=
       sizeof(VAR_4->hdmi_metadata_type1.white_point));

 FUNC_4(&VAR_1->display_primaries,
        &VAR_4->hdmi_metadata_type1.display_primaries,
        sizeof(VAR_1->display_primaries));

 FUNC_4(&VAR_1->white_point,
        &VAR_4->hdmi_metadata_type1.white_point,
        sizeof(VAR_1->white_point));

 VAR_1->max_display_mastering_luminance =
  VAR_4->hdmi_metadata_type1.max_display_mastering_luminance;
 VAR_1->min_display_mastering_luminance =
  VAR_4->hdmi_metadata_type1.min_display_mastering_luminance;
 VAR_1->max_fall = VAR_4->hdmi_metadata_type1.max_fall;
 VAR_1->max_cll = VAR_4->hdmi_metadata_type1.max_cll;

 return 0;
}
