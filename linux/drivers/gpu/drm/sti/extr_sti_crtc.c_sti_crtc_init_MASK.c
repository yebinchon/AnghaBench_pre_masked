
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct drm_crtc {TYPE_1__ base; } ;
struct sti_mixer {struct drm_crtc drm_crtc; } ;
struct drm_plane {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_crtc*,int *) ;
 int FUNC_3 (struct drm_device*,struct drm_crtc*,struct drm_plane*,struct drm_plane*,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct sti_mixer*) ;

int FUNC_5(struct drm_device *VAR_3, struct sti_mixer *VAR_4,
    struct drm_plane *VAR_5, struct drm_plane *VAR_6)
{
 struct drm_crtc *VAR_7 = &VAR_4->drm_crtc;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_3, VAR_7, VAR_5, VAR_6,
     &VAR_1, ((void*)0));
 if (VAR_8) {
  FUNC_1("Can't initialize CRTC\n");
  return -VAR_0;
 }

 FUNC_2(VAR_7, &VAR_2);

 FUNC_0("drm CRTC:%d mapped to %s\n",
    VAR_7->base.id, FUNC_4(VAR_4));

 return 0;
}
