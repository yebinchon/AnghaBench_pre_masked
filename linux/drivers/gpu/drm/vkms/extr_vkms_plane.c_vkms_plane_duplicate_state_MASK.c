
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int dummy; } ;
struct vkms_plane_state {struct drm_plane_state base; struct vkms_composer* composer; } ;
struct vkms_composer {int dummy; } ;
struct drm_plane {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_plane*,struct drm_plane_state*) ;
 int FUNC_2 (struct vkms_plane_state*) ;
 void* FUNC_3 (int,int ) ;

__attribute__((used)) static struct drm_plane_state *
FUNC_4(struct drm_plane *VAR_1)
{
 struct vkms_plane_state *VAR_2;
 struct vkms_composer *VAR_3;

 VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (!VAR_3) {
  FUNC_0("Couldn't allocate composer\n");
  FUNC_2(VAR_2);
  return ((void*)0);
 }

 VAR_2->composer = VAR_3;

 FUNC_1(VAR_1,
        &VAR_2->base);

 return &VAR_2->base;
}
