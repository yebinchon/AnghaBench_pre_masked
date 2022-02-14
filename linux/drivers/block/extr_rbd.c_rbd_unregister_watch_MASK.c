
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rbd_device {scalar_t__ watch_state; TYPE_2__* rbd_client; int watch_dwork; int watch_mutex; } ;
struct TYPE_4__ {TYPE_1__* client; } ;
struct TYPE_3__ {int osdc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rbd_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rbd_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct rbd_device *VAR_2)
{
 FUNC_2(VAR_2);

 FUNC_4(&VAR_2->watch_mutex);
 if (VAR_2->watch_state == VAR_0)
  FUNC_0(VAR_2);
 VAR_2->watch_state = VAR_1;
 FUNC_5(&VAR_2->watch_mutex);

 FUNC_1(&VAR_2->watch_dwork);
 FUNC_3(&VAR_2->rbd_client->client->osdc);
}
