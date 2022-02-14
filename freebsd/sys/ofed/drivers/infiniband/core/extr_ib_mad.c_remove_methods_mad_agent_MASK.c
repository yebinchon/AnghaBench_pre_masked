
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_mgmt_method_table {struct ib_mad_agent_private** agent; } ;
struct ib_mad_agent_private {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ib_mad_mgmt_method_table *VAR_1,
         struct ib_mad_agent_private *VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->agent[VAR_3] == VAR_2) {
   VAR_1->agent[VAR_3] = ((void*)0);
  }
 }
}
