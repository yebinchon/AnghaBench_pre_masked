
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rbd_device {TYPE_1__* rbd_client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int client; } ;


 int FUNC_0 (int ) ;
 struct rbd_device* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
      struct device_attribute *VAR_1, char *VAR_2)
{
 struct rbd_device *VAR_3 = FUNC_1(VAR_0);

 return FUNC_2(VAR_2, "client%lld\n",
         FUNC_0(VAR_3->rbd_client->client));
}
