
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int visible; } ;
struct drm_plane {struct drm_plane_state* state; } ;
struct dpu_plane {int is_error; } ;


 int FUNC_0 (struct dpu_plane*,char*) ;
 int FUNC_1 (struct drm_plane*) ;
 int FUNC_2 (struct drm_plane*) ;
 struct dpu_plane* FUNC_3 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_4(struct drm_plane *VAR_0,
    struct drm_plane_state *VAR_1)
{
 struct dpu_plane *VAR_2 = FUNC_3(VAR_0);
 struct drm_plane_state *VAR_3 = VAR_0->state;

 VAR_2->is_error = 0;

 FUNC_0(VAR_2, "\n");

 if (!VAR_3->visible) {
  FUNC_1(VAR_0);
 } else {
  FUNC_2(VAR_0);
 }
}
