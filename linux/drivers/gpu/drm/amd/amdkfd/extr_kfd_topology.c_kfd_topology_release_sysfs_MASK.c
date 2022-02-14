
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * kobj_topology; int * kobj_nodes; int attr_props; int attr_genid; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(void)
{
 FUNC_0();
 if (VAR_0.kobj_topology) {
  FUNC_3(VAR_0.kobj_topology,
    &VAR_0.attr_genid);
  FUNC_3(VAR_0.kobj_topology,
    &VAR_0.attr_props);
  if (VAR_0.kobj_nodes) {
   FUNC_1(VAR_0.kobj_nodes);
   FUNC_2(VAR_0.kobj_nodes);
   VAR_0.kobj_nodes = ((void*)0);
  }
  FUNC_1(VAR_0.kobj_topology);
  FUNC_2(VAR_0.kobj_topology);
  VAR_0.kobj_topology = ((void*)0);
 }
}
