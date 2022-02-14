
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_device {TYPE_1__* ll_driver; } ;
struct TYPE_2__ {int (* start ) (struct hid_device*) ;int (* stop ) (struct hid_device*) ;} ;


 int FUNC_0 (struct hid_device*,unsigned int) ;
 int FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*) ;

int FUNC_3(struct hid_device *VAR_0, unsigned int VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_0->ll_driver->start(VAR_0);
 if (VAR_2)
  return VAR_2;

 if (VAR_1) {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (VAR_2) {
   VAR_0->ll_driver->stop(VAR_0);
   return VAR_2;
  }
 }

 return 0;
}
