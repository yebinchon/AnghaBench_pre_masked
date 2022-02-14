
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cm_port {int port_obj; TYPE_3__* counter_group; int port_num; TYPE_2__* cm_dev; } ;
struct TYPE_6__ {int obj; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_4__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (struct cm_port*) ;
 int FUNC_1 (int *,int *,int *,char*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct cm_port *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_1(&VAR_4->port_obj, &VAR_2,
       &VAR_4->cm_dev->device->kobj,
       "%d", VAR_4->port_num);
 if (VAR_6) {
  FUNC_0(VAR_4);
  return VAR_6;
 }

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_6 = FUNC_1(&VAR_4->counter_group[VAR_5].obj,
        &VAR_1,
        &VAR_4->port_obj,
        "%s", VAR_3[VAR_5]);
  if (VAR_6)
   goto error;
 }

 return 0;

error:
 while (VAR_5--)
  FUNC_2(&VAR_4->counter_group[VAR_5].obj);
 FUNC_2(&VAR_4->port_obj);
 return VAR_6;

}
