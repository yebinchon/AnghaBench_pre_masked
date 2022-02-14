
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector_state {int dummy; } ;
struct rcar_du_wb_conn_state {struct drm_connector_state state; } ;
struct drm_connector {int state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_connector*,struct drm_connector_state*) ;
 struct rcar_du_wb_conn_state* FUNC_2 (int,int ) ;

__attribute__((used)) static struct drm_connector_state *
FUNC_3(struct drm_connector *VAR_1)
{
 struct rcar_du_wb_conn_state *VAR_2;

 if (FUNC_0(!VAR_1->state))
  return ((void*)0);

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_1(VAR_1, &VAR_2->state);

 return &VAR_2->state;
}
