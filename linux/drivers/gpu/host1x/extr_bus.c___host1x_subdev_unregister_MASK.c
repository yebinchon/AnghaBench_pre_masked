
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_subdev {int list; struct host1x_client* client; } ;
struct host1x_device {int registered; int clients_lock; int subdevs; int dev; } ;
struct host1x_client {int list; int * parent; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct host1x_device *VAR_0,
           struct host1x_subdev *VAR_1)
{
 struct host1x_client *VAR_2 = VAR_1->client;





 if (FUNC_2(&VAR_0->subdevs)) {
  if (VAR_0->registered) {
   VAR_0->registered = 0;
   FUNC_0(&VAR_0->dev);
  }
 }





 FUNC_4(&VAR_0->clients_lock);
 VAR_1->client = ((void*)0);
 VAR_2->parent = ((void*)0);
 FUNC_3(&VAR_1->list, &VAR_0->subdevs);
 FUNC_1(&VAR_2->list);
 FUNC_5(&VAR_0->clients_lock);
}
