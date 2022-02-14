
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rbd_device {int watch_mutex; int watch_cookie; TYPE_1__* rbd_client; } ;
struct rbd_client_id {int handle; int gid; } ;
struct TYPE_2__ {int client; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct rbd_client_id FUNC_3(struct rbd_device *VAR_0)
{
 struct rbd_client_id VAR_1;

 FUNC_1(&VAR_0->watch_mutex);
 VAR_1.gid = FUNC_0(VAR_0->rbd_client->client);
 VAR_1.handle = VAR_0->watch_cookie;
 FUNC_2(&VAR_0->watch_mutex);
 return VAR_1;
}
