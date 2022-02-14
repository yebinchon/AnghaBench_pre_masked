
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct coresight_platform_data {int nr_outport; TYPE_1__* conns; } ;
struct TYPE_2__ {int * child_fwnode; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct coresight_platform_data *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_outport; VAR_1++) {
  if (VAR_0->conns[VAR_1].child_fwnode) {
   FUNC_0(VAR_0->conns[VAR_1].child_fwnode);
   VAR_0->conns[VAR_1].child_fwnode = ((void*)0);
  }
 }
}
