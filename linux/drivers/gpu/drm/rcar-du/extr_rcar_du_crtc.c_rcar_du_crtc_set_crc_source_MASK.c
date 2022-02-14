
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int source; unsigned int index; } ;
struct rcar_du_crtc_state {TYPE_1__ crc; } ;
struct rcar_du_crtc {int dummy; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dev; } ;
struct drm_atomic_state {struct drm_modeset_acquire_ctx* acquire_ctx; } ;
typedef enum vsp1_du_crc_source { ____Placeholder_vsp1_du_crc_source } vsp1_du_crc_source ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_crtc_state*) ;
 int FUNC_1 (struct drm_crtc_state*) ;
 int FUNC_2 (struct drm_atomic_state*) ;
 struct drm_crtc_state* FUNC_3 (struct drm_atomic_state*,struct drm_crtc*) ;
 struct drm_atomic_state* FUNC_4 (int ) ;
 int FUNC_5 (struct drm_atomic_state*) ;
 int FUNC_6 (struct drm_atomic_state*) ;
 int FUNC_7 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_8 (struct drm_modeset_acquire_ctx*,int ) ;
 int FUNC_9 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_10 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_11 (struct rcar_du_crtc*,char const*,int*) ;
 struct rcar_du_crtc* FUNC_12 (struct drm_crtc*) ;
 struct rcar_du_crtc_state* FUNC_13 (struct drm_crtc_state*) ;

__attribute__((used)) static int FUNC_14(struct drm_crtc *VAR_2,
           const char *VAR_3)
{
 struct rcar_du_crtc *VAR_4 = FUNC_12(VAR_2);
 struct drm_modeset_acquire_ctx VAR_5;
 struct drm_crtc_state *VAR_6;
 struct drm_atomic_state *VAR_7;
 enum vsp1_du_crc_source VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_11(VAR_4, VAR_3, &VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9 = VAR_10;


 FUNC_8(&VAR_5, 0);

 VAR_7 = FUNC_4(VAR_2->dev);
 if (!VAR_7) {
  VAR_10 = -VAR_1;
  goto unlock;
 }

 VAR_7->acquire_ctx = &VAR_5;

retry:
 VAR_6 = FUNC_3(VAR_7, VAR_2);
 if (!FUNC_0(VAR_6)) {
  struct rcar_du_crtc_state *VAR_11;

  VAR_11 = FUNC_13(VAR_6);
  VAR_11->crc.source = VAR_8;
  VAR_11->crc.index = VAR_9;

  VAR_10 = FUNC_2(VAR_7);
 } else {
  VAR_10 = FUNC_1(VAR_6);
 }

 if (VAR_10 == -VAR_0) {
  FUNC_5(VAR_7);
  FUNC_9(&VAR_5);
  goto retry;
 }

 FUNC_6(VAR_7);

unlock:
 FUNC_10(&VAR_5);
 FUNC_7(&VAR_5);

 return VAR_10;
}
