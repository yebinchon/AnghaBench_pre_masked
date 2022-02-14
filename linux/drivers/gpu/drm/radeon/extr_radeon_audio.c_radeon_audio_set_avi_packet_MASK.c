
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct radeon_encoder_atom_dig {TYPE_3__* afmt; } ;
struct radeon_encoder {scalar_t__ output_csc; TYPE_2__* audio; struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_device {int dummy; } ;
struct hdmi_avi_infoframe {int dummy; } ;
struct drm_encoder {TYPE_1__* dev; } ;
struct drm_display_mode {int dummy; } ;
struct drm_connector {int dummy; } ;
typedef int buffer ;
struct TYPE_6__ {int offset; } ;
struct TYPE_5__ {int (* set_avi_packet ) (struct radeon_device*,int ,int *,int) ;} ;
struct TYPE_4__ {struct radeon_device* dev_private; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct hdmi_avi_infoframe*,struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_2 (struct hdmi_avi_infoframe*,struct drm_connector*,struct drm_display_mode*,int ) ;
 int FUNC_3 (struct hdmi_avi_infoframe*,int *,int) ;
 struct drm_connector* FUNC_4 (struct drm_encoder*) ;
 int FUNC_5 (struct radeon_device*,int ,int *,int) ;
 struct radeon_encoder* FUNC_6 (struct drm_encoder*) ;

__attribute__((used)) static int FUNC_7(struct drm_encoder *VAR_7,
           struct drm_display_mode *VAR_8)
{
 struct radeon_device *VAR_9 = VAR_7->dev->dev_private;
 struct radeon_encoder *VAR_10 = FUNC_6(VAR_7);
 struct radeon_encoder_atom_dig *VAR_11 = VAR_10->enc_priv;
 struct drm_connector *VAR_12 = FUNC_4(VAR_7);
 u8 VAR_13[VAR_2 + VAR_1];
 struct hdmi_avi_infoframe VAR_14;
 int VAR_15;

 if (!VAR_12)
  return -VAR_0;

 VAR_15 = FUNC_1(&VAR_14, VAR_12, VAR_8);
 if (VAR_15 < 0) {
  FUNC_0("failed to setup AVI infoframe: %d\n", VAR_15);
  return VAR_15;
 }

 if (VAR_10->output_csc != VAR_5) {
  FUNC_2(&VAR_14, VAR_12, VAR_8,
         VAR_10->output_csc == VAR_6 ?
         VAR_4 :
         VAR_3);
 }

 VAR_15 = FUNC_3(&VAR_14, VAR_13, sizeof(VAR_13));
 if (VAR_15 < 0) {
  FUNC_0("failed to pack AVI infoframe: %d\n", VAR_15);
  return VAR_15;
 }

 if (VAR_11 && VAR_11->afmt && VAR_10->audio &&
     VAR_10->audio->set_avi_packet)
  VAR_10->audio->set_avi_packet(VAR_9, VAR_11->afmt->offset,
   VAR_13, sizeof(VAR_13));

 return 0;
}
