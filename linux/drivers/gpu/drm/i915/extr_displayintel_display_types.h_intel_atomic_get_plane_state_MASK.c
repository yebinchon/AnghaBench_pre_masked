
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_plane_state {int dummy; } ;
struct intel_plane {int base; } ;
struct intel_atomic_state {int base; } ;
struct drm_plane_state {int dummy; } ;


 struct intel_plane_state* FUNC_0 (struct drm_plane_state*) ;
 scalar_t__ FUNC_1 (struct drm_plane_state*) ;
 struct drm_plane_state* FUNC_2 (int *,int *) ;
 struct intel_plane_state* FUNC_3 (struct drm_plane_state*) ;

__attribute__((used)) static inline struct intel_plane_state *
FUNC_4(struct intel_atomic_state *VAR_0,
     struct intel_plane *VAR_1)
{
 struct drm_plane_state *VAR_2 =
  FUNC_2(&VAR_0->base, &VAR_1->base);

 if (FUNC_1(VAR_2))
  return FUNC_0(VAR_2);

 return FUNC_3(VAR_2);
}
