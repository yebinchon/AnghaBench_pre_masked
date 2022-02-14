
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector_state {int dummy; } ;
struct TYPE_2__ {scalar_t__ mask; } ;
struct nouveau_conn_atom {struct drm_connector_state state; TYPE_1__ set; int procamp; int scaler; int dither; } ;
struct drm_connector {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_connector*,struct drm_connector_state*) ;
 struct nouveau_conn_atom* FUNC_1 (int,int ) ;
 struct nouveau_conn_atom* FUNC_2 (int ) ;

struct drm_connector_state *
FUNC_3(struct drm_connector *VAR_1)
{
 struct nouveau_conn_atom *VAR_2 = FUNC_2(VAR_1->state);
 struct nouveau_conn_atom *VAR_3;
 if (!(VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0)))
  return ((void*)0);
 FUNC_0(VAR_1, &VAR_3->state);
 VAR_3->dither = VAR_2->dither;
 VAR_3->scaler = VAR_2->scaler;
 VAR_3->procamp = VAR_2->procamp;
 VAR_3->set.mask = 0;
 return &VAR_3->state;
}
