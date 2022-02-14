
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_4__ {scalar_t__ fwnode; } ;
struct coresight_device {int orphan; TYPE_2__ dev; TYPE_1__* pdata; } ;
struct coresight_connection {scalar_t__ child_fwnode; struct coresight_device* child_dev; } ;
struct TYPE_3__ {int nr_outport; struct coresight_connection* conns; } ;


 struct coresight_device* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, void *VAR_1)
{
 int VAR_2;
 bool VAR_3 = 0;
 struct coresight_device *VAR_4, *VAR_5;
 struct coresight_connection *VAR_6;

 VAR_4 = VAR_1;
 VAR_5 = FUNC_0(VAR_0);


 if (VAR_4 == VAR_5)
  return 0;


 if (!VAR_5->orphan)
  return 0;




 for (VAR_2 = 0; VAR_2 < VAR_5->pdata->nr_outport; VAR_2++) {
  VAR_6 = &VAR_5->pdata->conns[VAR_2];


  if (VAR_6->child_dev == ((void*)0)) {

   if (VAR_6->child_fwnode == VAR_4->dev.fwnode)
    VAR_6->child_dev = VAR_4;
   else

    VAR_3 = 1;
  }
 }

 VAR_5->orphan = VAR_3;





 return 0;
}
