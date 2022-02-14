
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_atomic_state {int dummy; } ;
struct intel_atomic_state {struct drm_atomic_state base; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_1 (struct intel_atomic_state*) ;
 struct intel_atomic_state* FUNC_2 (int,int ) ;

struct drm_atomic_state *
FUNC_3(struct drm_device *VAR_1)
{
 struct intel_atomic_state *VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);

 if (!VAR_2 || FUNC_0(VAR_1, &VAR_2->base) < 0) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }

 return &VAR_2->base;
}
