
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct coresight_node {int link; struct coresight_device* csdev; } ;
struct coresight_device {TYPE_2__* pdata; } ;
struct TYPE_4__ {int nr_outport; TYPE_1__* conns; } ;
struct TYPE_3__ {struct coresight_device* child_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct coresight_device*) ;
 struct coresight_node* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct list_head*) ;

__attribute__((used)) static int FUNC_3(struct coresight_device *VAR_3,
     struct coresight_device *VAR_4,
     struct list_head *VAR_5)
{
 int VAR_6;
 bool VAR_7 = 0;
 struct coresight_node *VAR_8;


 if (VAR_3 == VAR_4)
  goto out;


 for (VAR_6 = 0; VAR_6 < VAR_3->pdata->nr_outport; VAR_6++) {
  struct coresight_device *VAR_9;

  VAR_9 = VAR_3->pdata->conns[VAR_6].child_dev;
  if (VAR_9 &&
      FUNC_3(VAR_9, VAR_4, VAR_5) == 0) {
   VAR_7 = 1;
   break;
  }
 }

 if (!VAR_7)
  return -VAR_0;

out:






 VAR_8 = FUNC_1(sizeof(struct coresight_node), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_0(VAR_3);
 VAR_8->csdev = VAR_3;
 FUNC_2(&VAR_8->link, VAR_5);

 return 0;
}
