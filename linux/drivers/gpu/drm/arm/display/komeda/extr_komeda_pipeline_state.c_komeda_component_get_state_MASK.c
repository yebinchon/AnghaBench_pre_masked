
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct komeda_component_state {int dummy; } ;
struct komeda_component {int obj; TYPE_2__* pipeline; } ;
struct drm_private_state {int dummy; } ;
struct drm_atomic_state {int dummy; } ;
struct TYPE_3__ {int lock; } ;
struct TYPE_4__ {TYPE_1__ obj; } ;


 struct komeda_component_state* FUNC_0 (struct drm_private_state*) ;
 scalar_t__ FUNC_1 (struct drm_private_state*) ;
 int FUNC_2 (int) ;
 struct drm_private_state* FUNC_3 (struct drm_atomic_state*,int *) ;
 int FUNC_4 (int *) ;
 struct komeda_component_state* FUNC_5 (struct drm_private_state*) ;

__attribute__((used)) static struct komeda_component_state *
FUNC_6(struct komeda_component *VAR_0,
      struct drm_atomic_state *VAR_1)
{
 struct drm_private_state *VAR_2;

 FUNC_2(!FUNC_4(&VAR_0->pipeline->obj.lock));

 VAR_2 = FUNC_3(VAR_1, &VAR_0->obj);
 if (FUNC_1(VAR_2))
  return FUNC_0(VAR_2);

 return FUNC_5(VAR_2);
}
