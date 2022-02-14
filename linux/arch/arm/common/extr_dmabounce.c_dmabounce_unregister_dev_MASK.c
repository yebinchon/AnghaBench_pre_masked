
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pool; } ;
struct TYPE_4__ {scalar_t__ pool; } ;
struct dmabounce_device_info {scalar_t__ attr_res; TYPE_2__ large; TYPE_1__ small; int safe_buffers; } ;
struct TYPE_6__ {struct dmabounce_device_info* dmabounce; } ;
struct device {TYPE_3__ archdata; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct dmabounce_device_info*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct device*,int *) ;

void FUNC_9(struct device *VAR_1)
{
 struct dmabounce_device_info *VAR_2 = VAR_1->archdata.dmabounce;

 VAR_1->archdata.dmabounce = ((void*)0);
 FUNC_8(VAR_1, ((void*)0));

 if (!VAR_2) {
  FUNC_3(VAR_1,
    "Never registered with dmabounce but attempting"
    "to unregister!\n");
  return;
 }

 if (!FUNC_7(&VAR_2->safe_buffers)) {
  FUNC_1(VAR_1,
   "Removing from dmabounce with pending buffers!\n");
  FUNC_0();
 }

 if (VAR_2->small.pool)
  FUNC_5(VAR_2->small.pool);
 if (VAR_2->large.pool)
  FUNC_5(VAR_2->large.pool);






 FUNC_6(VAR_2);

 FUNC_2(VAR_1, "dmabounce: device unregistered\n");
}
