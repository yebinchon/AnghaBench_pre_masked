
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_plane {scalar_t__ state; TYPE_1__* funcs; } ;
struct dm_plane_state {int base; } ;
struct TYPE_2__ {int (* atomic_destroy_state ) (struct drm_plane*,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_plane*,int *) ;
 struct dm_plane_state* FUNC_2 (int,int ) ;
 int FUNC_3 (struct drm_plane*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct drm_plane *VAR_1)
{
 struct dm_plane_state *VAR_2 = ((void*)0);

 if (VAR_1->state)
  VAR_1->funcs->atomic_destroy_state(VAR_1, VAR_1->state);

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 FUNC_0(VAR_2 == ((void*)0));

 if (VAR_2)
  FUNC_1(VAR_1, &VAR_2->base);
}
