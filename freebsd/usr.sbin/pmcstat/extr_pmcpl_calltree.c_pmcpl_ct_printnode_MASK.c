
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmcpl_ct_node {int dummy; } ;
struct TYPE_2__ {int pa_graphfile; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct pmcpl_ct_node*,int ,int ) ;
 int FUNC_2 (struct pmcpl_ct_node*) ;
 struct pmcpl_ct_node* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct pmcpl_ct_node *VAR_3)
{
 int VAR_4;

 if (VAR_3 == VAR_1) {
  FUNC_0(VAR_0.pa_graphfile, "fn=root\n");
  FUNC_0(VAR_0.pa_graphfile, "0x0 1");
  for (VAR_4 = 0; VAR_4<VAR_2 ; VAR_4++)
   FUNC_0(VAR_0.pa_graphfile, " 0");
  FUNC_0(VAR_0.pa_graphfile, "\n");
  FUNC_1(VAR_3, 0, 0);
 } else
  FUNC_2(VAR_3);
}
