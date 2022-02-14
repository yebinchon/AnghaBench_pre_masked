
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_subdev {struct host1x_client* client; int list; } ;
struct host1x_device {int registered; int dev; int subdevs; int subdevs_lock; int clients_lock; int active; int clients; } ;
struct host1x_client {int * parent; int list; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct host1x_device *VAR_0,
       struct host1x_subdev *VAR_1,
       struct host1x_client *VAR_2)
{
 int VAR_3;






 FUNC_4(&VAR_0->subdevs_lock);
 FUNC_4(&VAR_0->clients_lock);
 FUNC_3(&VAR_2->list, &VAR_0->clients);
 FUNC_3(&VAR_1->list, &VAR_0->active);
 VAR_2->parent = &VAR_0->dev;
 VAR_1->client = VAR_2;
 FUNC_5(&VAR_0->clients_lock);
 FUNC_5(&VAR_0->subdevs_lock);

 if (FUNC_2(&VAR_0->subdevs)) {
  VAR_3 = FUNC_1(&VAR_0->dev);
  if (VAR_3 < 0)
   FUNC_0(&VAR_0->dev, "failed to add: %d\n", VAR_3);
  else
   VAR_0->registered = 1;
 }
}
