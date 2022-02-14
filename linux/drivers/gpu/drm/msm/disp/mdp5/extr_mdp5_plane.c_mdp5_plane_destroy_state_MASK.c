
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_plane_state {int dummy; } ;
struct drm_plane_state {scalar_t__ fb; } ;
struct drm_plane {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mdp5_plane_state*) ;
 struct mdp5_plane_state* FUNC_2 (struct drm_plane_state*) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_0,
  struct drm_plane_state *VAR_1)
{
 struct mdp5_plane_state *VAR_2 = FUNC_2(VAR_1);

 if (VAR_1->fb)
  FUNC_0(VAR_1->fb);

 FUNC_1(VAR_2);
}
