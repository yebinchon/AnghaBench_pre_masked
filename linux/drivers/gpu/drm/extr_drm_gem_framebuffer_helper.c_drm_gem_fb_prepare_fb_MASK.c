
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int fb; } ;
struct drm_plane {int dummy; } ;
struct drm_gem_object {int resv; } ;
struct dma_fence {int dummy; } ;


 struct dma_fence* FUNC_0 (int ) ;
 int FUNC_1 (struct drm_plane_state*,struct dma_fence*) ;
 struct drm_gem_object* FUNC_2 (int ,int ) ;

int FUNC_3(struct drm_plane *VAR_0,
     struct drm_plane_state *VAR_1)
{
 struct drm_gem_object *VAR_2;
 struct dma_fence *VAR_3;

 if (!VAR_1->fb)
  return 0;

 VAR_2 = FUNC_2(VAR_1->fb, 0);
 VAR_3 = FUNC_0(VAR_2->resv);
 FUNC_1(VAR_1, VAR_3);

 return 0;
}
