
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_private_state {int dummy; } ;
struct vc4_load_tracker_state {struct drm_private_state base; } ;
struct drm_private_obj {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_private_obj*,struct drm_private_state*) ;
 struct vc4_load_tracker_state* FUNC_1 (int ,int,int ) ;

__attribute__((used)) static struct drm_private_state *
FUNC_2(struct drm_private_obj *VAR_1)
{
 struct vc4_load_tracker_state *VAR_2;

 VAR_2 = FUNC_1(VAR_1->state, sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(VAR_1, &VAR_2->base);

 return &VAR_2->base;
}
