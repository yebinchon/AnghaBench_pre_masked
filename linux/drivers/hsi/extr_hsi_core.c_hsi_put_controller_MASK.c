
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hsi_controller {unsigned int num_ports; int device; TYPE_1__** port; } ;
struct TYPE_2__ {int device; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct hsi_controller *VAR_0)
{
 unsigned int VAR_1;

 if (!VAR_0)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_ports; VAR_1++)
  if (VAR_0->port && VAR_0->port[VAR_1])
   FUNC_0(&VAR_0->port[VAR_1]->device);
 FUNC_0(&VAR_0->device);
}
