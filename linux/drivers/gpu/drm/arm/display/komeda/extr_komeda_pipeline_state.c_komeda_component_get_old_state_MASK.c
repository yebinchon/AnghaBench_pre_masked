
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_component_state {int dummy; } ;
struct komeda_component {int obj; } ;
struct drm_private_state {int dummy; } ;
struct drm_atomic_state {int dummy; } ;


 struct drm_private_state* FUNC_0 (struct drm_atomic_state*,int *) ;
 struct komeda_component_state* FUNC_1 (struct drm_private_state*) ;

__attribute__((used)) static struct komeda_component_state *
FUNC_2(struct komeda_component *VAR_0,
          struct drm_atomic_state *VAR_1)
{
 struct drm_private_state *VAR_2;

 VAR_2 = FUNC_0(VAR_1, &VAR_0->obj);
 if (VAR_2)
  return FUNC_1(VAR_2);
 return ((void*)0);
}
