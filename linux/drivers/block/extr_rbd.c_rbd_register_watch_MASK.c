
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rbd_device {scalar_t__ watch_state; int watch_mutex; TYPE_1__* watch_handle; int watch_cookie; } ;
struct TYPE_2__ {int linger_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rbd_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct rbd_device *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_2->watch_mutex);
 FUNC_3(VAR_2->watch_state == VAR_1);
 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  goto out;

 VAR_2->watch_state = VAR_0;
 VAR_2->watch_cookie = VAR_2->watch_handle->linger_id;

out:
 FUNC_2(&VAR_2->watch_mutex);
 return VAR_3;
}
