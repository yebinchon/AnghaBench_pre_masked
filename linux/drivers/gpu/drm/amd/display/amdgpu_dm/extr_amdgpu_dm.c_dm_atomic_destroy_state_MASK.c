
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_private_state {int dummy; } ;
struct drm_private_obj {int dummy; } ;
struct dm_atomic_state {scalar_t__ context; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct dm_atomic_state*) ;
 struct dm_atomic_state* FUNC_2 (struct drm_private_state*) ;

__attribute__((used)) static void FUNC_3(struct drm_private_obj *VAR_0,
        struct drm_private_state *VAR_1)
{
 struct dm_atomic_state *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2 && VAR_2->context)
  FUNC_0(VAR_2->context);

 FUNC_1(VAR_2);
}
