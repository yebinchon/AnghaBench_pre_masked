
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_total_plane; int num_crtc; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_atomic_state {int allow_modeset; struct drm_device* dev; void* planes; void* crtcs; int ref; } ;


 int FUNC_0 (char*,struct drm_atomic_state*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_atomic_state*) ;
 void* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct drm_device *VAR_2, struct drm_atomic_state *VAR_3)
{
 FUNC_3(&VAR_3->ref);




 VAR_3->allow_modeset = 1;

 VAR_3->crtcs = FUNC_2(VAR_2->mode_config.num_crtc,
          sizeof(*VAR_3->crtcs), VAR_1);
 if (!VAR_3->crtcs)
  goto fail;
 VAR_3->planes = FUNC_2(VAR_2->mode_config.num_total_plane,
    sizeof(*VAR_3->planes), VAR_1);
 if (!VAR_3->planes)
  goto fail;

 VAR_3->dev = VAR_2;

 FUNC_0("Allocated atomic state %p\n", VAR_3);

 return 0;
fail:
 FUNC_1(VAR_3);
 return -VAR_0;
}
