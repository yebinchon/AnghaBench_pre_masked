
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobj_uevent_env {int dummy; } ;
struct dvb_device {size_t type; int id; TYPE_1__* adapter; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int num; } ;


 int FUNC_0 (struct kobj_uevent_env*,char*,int ) ;
 struct dvb_device* FUNC_1 (struct device*) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 struct dvb_device *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_2, "DVB_ADAPTER_NUM=%d", VAR_3->adapter->num);
 FUNC_0(VAR_2, "DVB_DEVICE_TYPE=%s", VAR_0[VAR_3->type]);
 FUNC_0(VAR_2, "DVB_DEVICE_NUM=%d", VAR_3->id);
 return 0;
}
