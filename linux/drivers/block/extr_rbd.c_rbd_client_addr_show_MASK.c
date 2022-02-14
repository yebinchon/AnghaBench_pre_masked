
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rbd_device {TYPE_1__* rbd_client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ceph_entity_addr {int nonce; int in_addr; } ;
typedef int ssize_t ;
struct TYPE_2__ {int client; } ;


 struct ceph_entity_addr* FUNC_0 (int ) ;
 struct rbd_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int *,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2)
{
 struct rbd_device *VAR_3 = FUNC_1(VAR_0);
 struct ceph_entity_addr *VAR_4 =
     FUNC_0(VAR_3->rbd_client->client);

 return FUNC_3(VAR_2, "%pISpc/%u\n", &VAR_4->in_addr,
         FUNC_2(VAR_4->nonce));
}
