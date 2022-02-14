
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_private_state {int dummy; } ;
struct TYPE_2__ {struct drm_private_state obj; } ;
struct komeda_layer_state {TYPE_1__ base; } ;
struct drm_private_obj {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_private_obj*,struct drm_private_state*) ;
 struct komeda_layer_state* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static struct drm_private_state *
FUNC_3(struct drm_private_obj *VAR_1)
{
 struct komeda_layer_state *VAR_2;

 VAR_2 = FUNC_1(VAR_1->state, sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_2(&VAR_2->base);
 FUNC_0(VAR_1, &VAR_2->base.obj);

 return &VAR_2->base.obj;
}
