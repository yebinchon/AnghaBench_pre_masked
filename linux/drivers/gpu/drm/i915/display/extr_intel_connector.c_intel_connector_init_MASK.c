
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_digital_connector_state {int base; } ;
struct intel_connector {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 struct intel_digital_connector_state* FUNC_1 (int,int ) ;

int FUNC_2(struct intel_connector *VAR_2)
{
 struct intel_digital_connector_state *VAR_3;







 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_0(&VAR_2->base,
         &VAR_3->base);

 return 0;
}
