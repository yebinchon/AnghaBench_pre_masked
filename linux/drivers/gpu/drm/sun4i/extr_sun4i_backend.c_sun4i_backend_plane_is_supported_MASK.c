
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_plane_state*) ;
 scalar_t__ FUNC_1 (struct drm_plane_state*) ;

__attribute__((used)) static bool FUNC_2(struct drm_plane_state *VAR_0,
          bool *VAR_1)
{
 if (FUNC_0(VAR_0)) {
  *VAR_1 = 1;
  return 1;
 }

 *VAR_1 = 0;


 if (FUNC_1(VAR_0))
  return 0;

 return 1;
}
