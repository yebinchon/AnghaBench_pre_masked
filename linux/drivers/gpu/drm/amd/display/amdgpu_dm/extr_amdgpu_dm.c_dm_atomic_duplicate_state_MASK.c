
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_private_state {int dummy; } ;
struct drm_private_obj {int state; } ;
struct dm_atomic_state {struct drm_private_state base; scalar_t__ context; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_private_obj*,struct drm_private_state*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct dm_atomic_state*) ;
 struct dm_atomic_state* FUNC_3 (int,int ) ;
 struct dm_atomic_state* FUNC_4 (int ) ;

__attribute__((used)) static struct drm_private_state *
FUNC_5(struct drm_private_obj *VAR_1)
{
 struct dm_atomic_state *VAR_2, *VAR_3;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(VAR_1, &VAR_3->base);

 VAR_2 = FUNC_4(VAR_1->state);

 if (VAR_2 && VAR_2->context)
  VAR_3->context = FUNC_1(VAR_2->context);

 if (!VAR_3->context) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }

 return &VAR_3->base;
}
