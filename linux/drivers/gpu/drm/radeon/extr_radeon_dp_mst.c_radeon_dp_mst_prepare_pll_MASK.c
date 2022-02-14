
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct radeon_encoder_mst {TYPE_1__* connector; } ;
struct radeon_encoder {int base; struct radeon_encoder_mst* enc_priv; } ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {int bpc; int ss; int ss_enabled; int encoder; } ;
struct radeon_connector_atom_dig {int dp_clock; } ;
struct TYPE_5__ {int bpc; } ;
struct TYPE_6__ {TYPE_2__ display_info; } ;
struct radeon_connector {TYPE_3__ base; int pixelclock_for_modeset; } ;
struct drm_display_mode {int clock; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_4__ {struct radeon_connector_atom_dig* con_priv; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct radeon_connector_atom_dig*,int) ;
 int FUNC_1 (struct radeon_device*,int *,int ,int) ;
 struct radeon_connector* FUNC_2 (int *) ;
 struct radeon_crtc* FUNC_3 (struct drm_crtc*) ;
 struct radeon_encoder* FUNC_4 (int ) ;

void FUNC_5(struct drm_crtc *VAR_1, struct drm_display_mode *VAR_2)
{
 struct radeon_crtc *VAR_3 = FUNC_3(VAR_1);
 struct drm_device *VAR_4 = VAR_1->dev;
 struct radeon_device *VAR_5 = VAR_4->dev_private;
 struct radeon_encoder *VAR_6 = FUNC_4(VAR_3->encoder);
 struct radeon_encoder_mst *VAR_7 = VAR_6->enc_priv;
 struct radeon_connector *VAR_8 = FUNC_2(&VAR_6->base);
 int VAR_9;
 struct radeon_connector_atom_dig *VAR_10 = VAR_7->connector->con_priv;

 if (VAR_8) {
  VAR_8->pixelclock_for_modeset = VAR_2->clock;
  if (VAR_8->base.display_info.bpc)
   VAR_3->bpc = VAR_8->base.display_info.bpc;
  else
   VAR_3->bpc = 8;
 }

 FUNC_0("dp_clock %p %d\n", VAR_10, VAR_10->dp_clock);
 VAR_9 = VAR_10->dp_clock;
 VAR_3->ss_enabled =
  FUNC_1(VAR_5, &VAR_3->ss,
       VAR_0,
       VAR_9);
}
