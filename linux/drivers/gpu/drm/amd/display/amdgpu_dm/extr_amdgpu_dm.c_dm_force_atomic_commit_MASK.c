
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_plane_state {int mode_changed; } ;
struct drm_plane {int dummy; } ;
struct TYPE_5__ {int acquire_ctx; } ;
struct drm_device {TYPE_2__ mode_config; } ;
struct drm_crtc_state {int mode_changed; } ;
struct drm_connector_state {int mode_changed; } ;
struct drm_connector {TYPE_1__* encoder; struct drm_device* dev; } ;
struct drm_atomic_state {int acquire_ctx; } ;
struct TYPE_6__ {struct drm_plane* primary; } ;
struct amdgpu_crtc {TYPE_3__ base; } ;
struct TYPE_4__ {int crtc; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_plane_state*) ;
 int FUNC_2 (struct drm_atomic_state*) ;
 struct drm_plane_state* FUNC_3 (struct drm_atomic_state*,struct drm_connector*) ;
 struct drm_plane_state* FUNC_4 (struct drm_atomic_state*,TYPE_3__*) ;
 struct drm_plane_state* FUNC_5 (struct drm_atomic_state*,struct drm_plane*) ;
 struct drm_atomic_state* FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_atomic_state*) ;
 struct amdgpu_crtc* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct drm_connector *VAR_1)
{
 int VAR_2 = 0;
 struct drm_device *VAR_3 = VAR_1->dev;
 struct drm_atomic_state *VAR_4 = FUNC_6(VAR_3);
 struct amdgpu_crtc *VAR_5 = FUNC_8(VAR_1->encoder->crtc);
 struct drm_plane *VAR_6 = VAR_5->base.primary;
 struct drm_connector_state *VAR_7;
 struct drm_crtc_state *VAR_8;
 struct drm_plane_state *VAR_9;

 if (!VAR_4)
  return -VAR_0;

 VAR_4->acquire_ctx = VAR_3->mode_config.acquire_ctx;






 VAR_7 = FUNC_3(VAR_4, VAR_1);

 VAR_2 = FUNC_1(VAR_7);
 if (VAR_2)
  goto err;


 VAR_8 = FUNC_4(VAR_4, &VAR_5->base);

 VAR_2 = FUNC_1(VAR_8);
 if (VAR_2)
  goto err;


 VAR_8->mode_changed = 1;


 VAR_9 = FUNC_5(VAR_4, VAR_6);

 VAR_2 = FUNC_1(VAR_9);
 if (VAR_2)
  goto err;



 VAR_2 = FUNC_2(VAR_4);
 if (!VAR_2)
  return 0;

err:
 FUNC_0("Restoring old state failed with %i\n", VAR_2);
 FUNC_7(VAR_4);

 return VAR_2;
}
