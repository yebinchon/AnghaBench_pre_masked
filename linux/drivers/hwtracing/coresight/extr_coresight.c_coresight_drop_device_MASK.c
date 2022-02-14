
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct coresight_device {scalar_t__ type; TYPE_1__ dev; TYPE_3__* pdata; } ;
struct TYPE_6__ {int nr_outport; TYPE_2__* conns; } ;
struct TYPE_5__ {struct coresight_device* child_dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct coresight_device *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1->dev.parent);
 for (VAR_2 = 0; VAR_2 < VAR_1->pdata->nr_outport; VAR_2++) {
  struct coresight_device *VAR_3;

  VAR_3 = VAR_1->pdata->conns[VAR_2].child_dev;
  if (VAR_3 && VAR_3->type == VAR_0)
   FUNC_0(VAR_3->dev.parent);
 }
}
