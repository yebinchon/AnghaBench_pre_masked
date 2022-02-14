
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_plane {int type; TYPE_1__* state; } ;
struct TYPE_2__ {int zpos; } ;


 int FUNC_0 (struct drm_plane*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct drm_plane *VAR_0)
{
 FUNC_0(VAR_0);
 VAR_0->state->zpos = FUNC_1(VAR_0->type);
}
