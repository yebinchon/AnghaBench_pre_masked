
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {scalar_t__ fb; } ;
struct drm_plane {int dummy; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct drm_plane *VAR_0,
      struct drm_plane_state *VAR_1)
{
 if (VAR_1->fb)
  FUNC_0(VAR_1->fb);
}
