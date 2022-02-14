
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_connector_state {int base; } ;
struct drm_connector {scalar_t__ state; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct drm_connector*,int *) ;
 int FUNC_3 (int ) ;
 struct vmw_connector_state* FUNC_4 (int,int ) ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6(struct drm_connector *VAR_1)
{
 struct vmw_connector_state *VAR_2;


 if (VAR_1->state) {
  FUNC_1(VAR_1->state);

  FUNC_3(FUNC_5(VAR_1->state));
 }

 VAR_2 = FUNC_4(sizeof(*VAR_2), VAR_0);

 if (!VAR_2) {
  FUNC_0("Cannot allocate vmw_connector_state\n");
  return;
 }

 FUNC_2(VAR_1, &VAR_2->base);
}
