
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * class; int * parent; } ;
struct ib_device {int port_list; int client_data_list; int client_data_lock; int event_handler_lock; int event_handler_list; TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,struct ib_device*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 struct ib_device* FUNC_4 (size_t,int ) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;

struct ib_device *FUNC_6(size_t VAR_3)
{
 struct ib_device *VAR_4;

 if (FUNC_1(VAR_3 < sizeof(struct ib_device)))
  return ((void*)0);

 VAR_4 = FUNC_4(VAR_3, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->dev.parent = &VAR_2;
 VAR_4->dev.class = &VAR_1;
 FUNC_3(&VAR_4->dev);

 FUNC_2(&VAR_4->dev, VAR_4);

 FUNC_0(&VAR_4->event_handler_list);
 FUNC_5(&VAR_4->event_handler_lock);
 FUNC_5(&VAR_4->client_data_lock);
 FUNC_0(&VAR_4->client_data_list);
 FUNC_0(&VAR_4->port_list);

 return VAR_4;
}
