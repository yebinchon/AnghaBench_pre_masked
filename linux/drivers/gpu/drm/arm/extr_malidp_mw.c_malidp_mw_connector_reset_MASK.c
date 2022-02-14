
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malidp_mw_connector_state {int base; } ;
struct drm_connector {scalar_t__ state; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct drm_connector*,int *) ;
 int FUNC_2 (scalar_t__) ;
 struct malidp_mw_connector_state* FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct drm_connector *VAR_1)
{
 struct malidp_mw_connector_state *VAR_2 =
  FUNC_3(sizeof(*VAR_2), VAR_0);

 if (VAR_1->state)
  FUNC_0(VAR_1->state);

 FUNC_2(VAR_1->state);
 FUNC_1(VAR_1, &VAR_2->base);
}
