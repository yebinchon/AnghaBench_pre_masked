
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct coresight_device {int dev; TYPE_1__* pdata; } ;
struct coresight_connection {int child_port; struct coresight_device* child_dev; } ;
struct TYPE_2__ {int nr_outport; struct coresight_connection* conns; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct coresight_device *VAR_1,
          struct coresight_device *VAR_2)
{
 int VAR_3;
 struct coresight_connection *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2->pdata->nr_outport; VAR_3++) {
  VAR_4 = &VAR_2->pdata->conns[VAR_3];
  if (VAR_4->child_dev == VAR_1)
   return VAR_4->child_port;
 }

 FUNC_0(&VAR_1->dev, "couldn't find inport, parent: %s, child: %s\n",
  FUNC_1(&VAR_2->dev), FUNC_1(&VAR_1->dev));

 return -VAR_0;
}
