
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int drc_index; } ;
struct pseries_hp_errorlog {TYPE_1__ _drc_u; int id_type; int action; int resource; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pseries_hp_errorlog*) ;
 struct device_node* FUNC_2 (int ) ;
 int FUNC_3 (struct device_node*) ;

__attribute__((used)) static void FUNC_4(__be32 VAR_3)
{
 struct pseries_hp_errorlog VAR_4;
 struct device_node *VAR_5;





 VAR_5 = FUNC_2(FUNC_0(VAR_3));
 if (VAR_5) {
  FUNC_3(VAR_5);
  return;
 }

 VAR_4.resource = VAR_2;
 VAR_4.action = VAR_0;
 VAR_4.id_type = VAR_1;
 VAR_4._drc_u.drc_index = VAR_3;

 FUNC_1(&VAR_4);
}
