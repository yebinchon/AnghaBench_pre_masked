
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_device {TYPE_1__* ll_driver; } ;
struct TYPE_2__ {int (* stop ) (struct hid_device*) ;} ;


 int FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*) ;

void FUNC_2(struct hid_device *VAR_0)
{
 FUNC_0(VAR_0);
 VAR_0->ll_driver->stop(VAR_0);
}
