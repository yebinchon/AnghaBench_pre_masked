
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct coresight_device {int orphan; TYPE_1__* pdata; } ;
struct coresight_connection {int * child_dev; int child_fwnode; } ;
struct TYPE_2__ {int nr_outport; struct coresight_connection* conns; } ;


 struct device* FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct device*) ;
 int * FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct coresight_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->pdata->nr_outport; VAR_2++) {
  struct coresight_connection *VAR_3 = &VAR_1->pdata->conns[VAR_2];
  struct device *VAR_4 = ((void*)0);

  VAR_4 = FUNC_0(&VAR_0, VAR_3->child_fwnode);
  if (VAR_4) {
   VAR_3->child_dev = FUNC_2(VAR_4);

   FUNC_1(VAR_4);
  } else {
   VAR_1->orphan = 1;
   VAR_3->child_dev = ((void*)0);
  }
 }
}
