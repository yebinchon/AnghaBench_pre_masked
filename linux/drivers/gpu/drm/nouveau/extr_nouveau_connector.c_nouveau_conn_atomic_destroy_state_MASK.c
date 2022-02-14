
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_conn_atom {int state; } ;
struct drm_connector_state {int dummy; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nouveau_conn_atom*) ;
 struct nouveau_conn_atom* FUNC_2 (struct drm_connector_state*) ;

void
FUNC_3(struct drm_connector *VAR_0,
      struct drm_connector_state *VAR_1)
{
 struct nouveau_conn_atom *VAR_2 = FUNC_2(VAR_1);
 FUNC_0(&VAR_2->state);
 FUNC_1(VAR_2);
}
