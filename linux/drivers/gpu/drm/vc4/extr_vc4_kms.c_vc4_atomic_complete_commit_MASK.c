
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc4_dev {int async_modeset; } ;
struct vc4_crtc {int channel; } ;
struct TYPE_3__ {int num_crtc; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_atomic_state {TYPE_2__* crtcs; struct drm_device* dev; } ;
struct TYPE_4__ {int ptr; int commit; } ;


 int FUNC_0 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_1 (struct drm_atomic_state*) ;
 int FUNC_2 (struct drm_atomic_state*) ;
 int FUNC_3 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_4 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_5 (struct drm_device*,struct drm_atomic_state*,int ) ;
 int FUNC_6 (struct drm_atomic_state*) ;
 int FUNC_7 (struct drm_atomic_state*) ;
 int FUNC_8 (struct drm_device*,struct drm_atomic_state*,int) ;
 int FUNC_9 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_10 (struct drm_atomic_state*) ;
 struct vc4_crtc* FUNC_11 (int ) ;
 struct vc4_dev* FUNC_12 (struct drm_device*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct vc4_dev*,struct drm_atomic_state*) ;
 int FUNC_15 (struct drm_device*,int ) ;

__attribute__((used)) static void
FUNC_16(struct drm_atomic_state *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct vc4_dev *VAR_2 = FUNC_12(VAR_1);
 struct vc4_crtc *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->mode_config.num_crtc; VAR_4++) {
  if (!VAR_0->crtcs[VAR_4].ptr || !VAR_0->crtcs[VAR_4].commit)
   continue;

  VAR_3 = FUNC_11(VAR_0->crtcs[VAR_4].ptr);
  FUNC_15(VAR_1, VAR_3->channel);
 }

 FUNC_8(VAR_1, VAR_0, 0);

 FUNC_7(VAR_0);

 FUNC_3(VAR_1, VAR_0);

 FUNC_14(VAR_2, VAR_0);

 FUNC_5(VAR_1, VAR_0, 0);

 FUNC_4(VAR_1, VAR_0);

 FUNC_6(VAR_0);

 FUNC_2(VAR_0);

 FUNC_9(VAR_1, VAR_0);

 FUNC_0(VAR_1, VAR_0);

 FUNC_1(VAR_0);

 FUNC_10(VAR_0);

 FUNC_13(&VAR_2->async_modeset);
}
