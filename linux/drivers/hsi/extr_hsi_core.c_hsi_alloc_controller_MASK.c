
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int release; } ;
struct hsi_port {unsigned int num; TYPE_1__ device; int n_head; int lock; void* release; void* stop_tx; void* start_tx; void* flush; void* setup; int async; } ;
struct hsi_controller {unsigned int num_ports; struct hsi_port** port; TYPE_1__ device; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*,unsigned int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct hsi_controller*) ;
 struct hsi_port** FUNC_4 (unsigned int,int,int ) ;
 int FUNC_5 (struct hsi_controller*) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;

struct hsi_controller *FUNC_8(unsigned int VAR_4, gfp_t VAR_5)
{
 struct hsi_controller *VAR_6;
 struct hsi_port **VAR_7;
 unsigned int VAR_8;

 if (!VAR_4)
  return ((void*)0);

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_5);
 if (!VAR_6)
  return ((void*)0);
 VAR_7 = FUNC_4(VAR_4, sizeof(*VAR_7), VAR_5);
 if (!VAR_7) {
  FUNC_5(VAR_6);
  return ((void*)0);
 }
 VAR_6->num_ports = VAR_4;
 VAR_6->port = VAR_7;
 VAR_6->device.release = VAR_0;
 FUNC_2(&VAR_6->device);

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_7[VAR_8] = FUNC_6(sizeof(**VAR_7), VAR_5);
  if (VAR_7[VAR_8] == ((void*)0))
   goto out;
  VAR_7[VAR_8]->num = VAR_8;
  VAR_7[VAR_8]->async = VAR_2;
  VAR_7[VAR_8]->setup = VAR_1;
  VAR_7[VAR_8]->flush = VAR_1;
  VAR_7[VAR_8]->start_tx = VAR_1;
  VAR_7[VAR_8]->stop_tx = VAR_1;
  VAR_7[VAR_8]->release = VAR_1;
  FUNC_7(&VAR_7[VAR_8]->lock);
  FUNC_0(&VAR_7[VAR_8]->n_head);
  FUNC_1(&VAR_7[VAR_8]->device, "port%d", VAR_8);
  VAR_6->port[VAR_8]->device.release = VAR_3;
  FUNC_2(&VAR_6->port[VAR_8]->device);
 }

 return VAR_6;
out:
 FUNC_3(VAR_6);

 return ((void*)0);
}
