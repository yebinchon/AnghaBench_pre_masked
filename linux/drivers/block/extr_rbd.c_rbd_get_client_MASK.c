
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rbd_client {TYPE_2__* client; } ;
struct ceph_options {int dummy; } ;
struct TYPE_4__ {TYPE_1__* options; } ;
struct TYPE_3__ {int mount_timeout; } ;


 struct rbd_client* FUNC_0 (int) ;
 int FUNC_1 (struct ceph_options*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct rbd_client* FUNC_5 (struct ceph_options*) ;
 struct rbd_client* FUNC_6 (struct ceph_options*) ;
 int FUNC_7 (struct rbd_client*) ;
 int FUNC_8 (int *,char*,int) ;

__attribute__((used)) static struct rbd_client *FUNC_9(struct ceph_options *VAR_1)
{
 struct rbd_client *VAR_2;
 int VAR_3;

 FUNC_3(&VAR_0);
 VAR_2 = FUNC_6(VAR_1);
 if (VAR_2) {
  FUNC_1(VAR_1);





  VAR_3 = FUNC_2(VAR_2->client,
     VAR_2->client->options->mount_timeout);
  if (VAR_3) {
   FUNC_8(((void*)0), "failed to get latest osdmap: %d", VAR_3);
   FUNC_7(VAR_2);
   VAR_2 = FUNC_0(VAR_3);
  }
 } else {
  VAR_2 = FUNC_5(VAR_1);
 }
 FUNC_4(&VAR_0);

 return VAR_2;
}
