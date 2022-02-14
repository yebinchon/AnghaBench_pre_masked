
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_plane {int id; } ;
struct drm_plane {scalar_t__ type; TYPE_1__* state; } ;
struct TYPE_2__ {int zpos; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct drm_plane*) ;
 struct omap_plane* FUNC_1 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_2(struct drm_plane *VAR_1)
{
 struct omap_plane *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_1);
 if (!VAR_1->state)
  return;





 VAR_1->state->zpos = VAR_1->type == VAR_0
      ? 0 : VAR_2->id;
}
