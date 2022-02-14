
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_4__ {scalar_t__ fwnode; } ;
struct coresight_device {int orphan; TYPE_2__ dev; TYPE_1__* pdata; } ;
struct coresight_connection {scalar_t__ child_fwnode; int * child_dev; } ;
struct TYPE_3__ {int nr_outport; struct coresight_connection* conns; } ;


 int FUNC_0 (scalar_t__) ;
 struct coresight_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 int VAR_2;
 struct coresight_device *VAR_3, *VAR_4;
 struct coresight_connection *VAR_5;

 VAR_3 = VAR_1;
 VAR_4 = FUNC_1(VAR_0);


 if (VAR_3 == VAR_4)
  return 0;





 for (VAR_2 = 0; VAR_2 < VAR_4->pdata->nr_outport; VAR_2++) {
  VAR_5 = &VAR_4->pdata->conns[VAR_2];

  if (VAR_5->child_dev == ((void*)0))
   continue;

  if (VAR_3->dev.fwnode == VAR_5->child_fwnode) {
   VAR_4->orphan = 1;
   VAR_5->child_dev = ((void*)0);





   FUNC_0(VAR_5->child_fwnode);

   break;
  }
 }





 return 0;
}
