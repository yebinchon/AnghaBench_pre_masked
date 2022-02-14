
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_du_wb_conn_state {int state; } ;
struct drm_connector {int * state; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_connector*,int *) ;
 struct rcar_du_wb_conn_state* FUNC_1 (int,int ) ;
 int FUNC_2 (struct drm_connector*,int *) ;

__attribute__((used)) static void FUNC_3(struct drm_connector *VAR_1)
{
 struct rcar_du_wb_conn_state *VAR_2;

 if (VAR_1->state) {
  FUNC_2(VAR_1, VAR_1->state);
  VAR_1->state = ((void*)0);
 }

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (VAR_2 == ((void*)0))
  return;

 FUNC_0(VAR_1, &VAR_2->state);
}
