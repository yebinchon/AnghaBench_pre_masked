
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nv50_wndw_atom {int state; } ;
struct drm_plane {TYPE_2__* state; TYPE_1__* funcs; } ;
struct TYPE_4__ {void* normalized_zpos; void* zpos; } ;
struct TYPE_3__ {int (* atomic_destroy_state ) (struct drm_plane*,TYPE_2__*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_plane*,int *) ;
 struct nv50_wndw_atom* FUNC_2 (int,int ) ;
 void* FUNC_3 (struct drm_plane*) ;
 int FUNC_4 (struct drm_plane*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(struct drm_plane *VAR_1)
{
 struct nv50_wndw_atom *VAR_2;

 if (FUNC_0(!(VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0))))
  return;

 if (VAR_1->state)
  VAR_1->funcs->atomic_destroy_state(VAR_1, VAR_1->state);

 FUNC_1(VAR_1, &VAR_2->state);
 VAR_1->state->zpos = FUNC_3(VAR_1);
 VAR_1->state->normalized_zpos = FUNC_3(VAR_1);
}
