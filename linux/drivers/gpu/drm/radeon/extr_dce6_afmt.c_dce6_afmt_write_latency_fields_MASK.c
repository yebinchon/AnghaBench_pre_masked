
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct radeon_encoder_atom_dig {TYPE_2__* pin; int afmt; } ;
struct radeon_encoder {struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_device {int dummy; } ;
struct drm_encoder {TYPE_1__* dev; } ;
struct drm_display_mode {int flags; } ;
struct drm_connector {int * audio_latency; int * video_latency; scalar_t__* latency_present; } ;
struct TYPE_4__ {int offset; } ;
struct TYPE_3__ {struct radeon_device* dev_private; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 struct radeon_encoder* FUNC_3 (struct drm_encoder*) ;

void FUNC_4(struct drm_encoder *VAR_2,
        struct drm_connector *VAR_3,
        struct drm_display_mode *VAR_4)
{
 struct radeon_device *VAR_5 = VAR_2->dev->dev_private;
 struct radeon_encoder *VAR_6 = FUNC_3(VAR_2);
 struct radeon_encoder_atom_dig *VAR_7 = VAR_6->enc_priv;
 u32 VAR_8 = 0;

 if (!VAR_7 || !VAR_7->afmt || !VAR_7->pin)
  return;

 if (VAR_4->flags & VAR_1) {
  if (VAR_3->latency_present[1])
   VAR_8 = FUNC_1(VAR_3->video_latency[1]) |
    FUNC_0(VAR_3->audio_latency[1]);
  else
   VAR_8 = FUNC_1(0) | FUNC_0(0);
 } else {
  if (VAR_3->latency_present[0])
   VAR_8 = FUNC_1(VAR_3->video_latency[0]) |
    FUNC_0(VAR_3->audio_latency[0]);
  else
   VAR_8 = FUNC_1(0) | FUNC_0(0);
 }
 FUNC_2(VAR_7->pin->offset,
   VAR_0, VAR_8);
}
