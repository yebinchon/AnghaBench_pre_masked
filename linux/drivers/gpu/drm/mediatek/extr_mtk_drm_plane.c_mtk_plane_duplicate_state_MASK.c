
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {struct drm_plane* plane; } ;
struct mtk_plane_state {struct drm_plane_state base; int pending; } ;
struct drm_plane {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_plane*,struct drm_plane_state*) ;
 struct mtk_plane_state* FUNC_2 (int,int ) ;
 struct mtk_plane_state* FUNC_3 (int ) ;

__attribute__((used)) static struct drm_plane_state *FUNC_4(struct drm_plane *VAR_1)
{
 struct mtk_plane_state *VAR_2 = FUNC_3(VAR_1->state);
 struct mtk_plane_state *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(VAR_1, &VAR_3->base);

 FUNC_0(VAR_3->base.plane != VAR_1);

 VAR_3->pending = VAR_2->pending;

 return &VAR_3->base;
}
