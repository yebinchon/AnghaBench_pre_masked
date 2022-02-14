
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapdss_comp_node {int node; int compat; scalar_t__ dss_core_component; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static bool FUNC_2(struct omapdss_comp_node *VAR_0)
{
 if (VAR_0->dss_core_component)
  return 1;
 if (!FUNC_1(VAR_0->compat, "omapdss,"))
  return 1;
 if (FUNC_0(VAR_0->node))
  return 1;

 return 0;
}
