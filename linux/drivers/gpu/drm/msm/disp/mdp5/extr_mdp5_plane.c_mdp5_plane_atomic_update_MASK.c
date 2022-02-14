
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int dst; int src; int fb; int crtc; } ;
struct drm_plane {int name; struct drm_plane_state* state; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct drm_plane*,int ,int ,int *,int *) ;
 scalar_t__ FUNC_3 (struct drm_plane_state*) ;

__attribute__((used)) static void FUNC_4(struct drm_plane *VAR_0,
         struct drm_plane_state *VAR_1)
{
 struct drm_plane_state *VAR_2 = VAR_0->state;

 FUNC_0("%s: update", VAR_0->name);

 if (FUNC_3(VAR_2)) {
  int VAR_3;

  VAR_3 = FUNC_2(VAR_0,
    VAR_2->crtc, VAR_2->fb,
    &VAR_2->src, &VAR_2->dst);

  FUNC_1(VAR_3 < 0);
 }
}
