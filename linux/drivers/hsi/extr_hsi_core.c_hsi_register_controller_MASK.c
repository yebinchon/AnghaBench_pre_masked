
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* parent; } ;
struct hsi_controller {unsigned int num_ports; TYPE_2__ device; TYPE_1__** port; } ;
struct TYPE_4__ {TYPE_2__ device; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct hsi_controller*) ;

int FUNC_3(struct hsi_controller *VAR_0)
{
 unsigned int VAR_1;
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_0->device);
 if (VAR_2 < 0)
  return VAR_2;
 for (VAR_1 = 0; VAR_1 < VAR_0->num_ports; VAR_1++) {
  VAR_0->port[VAR_1]->device.parent = &VAR_0->device;
  VAR_2 = FUNC_0(&VAR_0->port[VAR_1]->device);
  if (VAR_2 < 0)
   goto out;
 }

 FUNC_2(VAR_0);

 return 0;
out:
 while (VAR_1-- > 0)
  FUNC_1(&VAR_0->port[VAR_1]->device);
 FUNC_1(&VAR_0->device);

 return VAR_2;
}
