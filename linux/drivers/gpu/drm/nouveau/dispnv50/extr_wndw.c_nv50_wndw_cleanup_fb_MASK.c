
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_framebuffer {int nvbo; } ;
struct nouveau_drm {int dummy; } ;
struct drm_plane_state {int fb; } ;
struct drm_plane {int name; int dev; } ;


 int FUNC_0 (struct nouveau_drm*,char*,int ,int ) ;
 int FUNC_1 (int ) ;
 struct nouveau_drm* FUNC_2 (int ) ;
 struct nouveau_framebuffer* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct drm_plane *VAR_0, struct drm_plane_state *VAR_1)
{
 struct nouveau_framebuffer *VAR_2 = FUNC_3(VAR_1->fb);
 struct nouveau_drm *VAR_3 = FUNC_2(VAR_0->dev);

 FUNC_0(VAR_3, "%s cleanup: %p\n", VAR_0->name, VAR_1->fb);
 if (!VAR_1->fb)
  return;

 FUNC_1(VAR_2->nvbo);
}
