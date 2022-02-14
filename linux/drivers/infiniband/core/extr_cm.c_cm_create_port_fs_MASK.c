
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cm_port {TYPE_2__* counter_group; int port_num; TYPE_1__* cm_dev; } ;
struct TYPE_4__ {int obj; } ;
struct TYPE_3__ {int ib_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ,int ,int *,int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct cm_port *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = FUNC_0(VAR_3->cm_dev->ib_device,
         VAR_3->port_num,
         &VAR_3->counter_group[VAR_4].obj,
         &VAR_1,
         VAR_2[VAR_4]);
  if (VAR_5)
   goto error;
 }

 return 0;

error:
 while (VAR_4--)
  FUNC_1(&VAR_3->counter_group[VAR_4].obj);
 return VAR_5;

}
