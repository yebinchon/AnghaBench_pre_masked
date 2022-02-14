
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_driver {int name; } ;
struct device {TYPE_1__* p; int driver; } ;
struct TYPE_2__ {struct device_driver* async_driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct device*) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device_driver*,struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 scalar_t__ FUNC_5 (struct device_driver*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device_driver*,struct device*) ;
 int FUNC_8 (struct device*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_2, void *VAR_3)
{
 struct device_driver *VAR_4 = VAR_3;
 int VAR_5;
 VAR_5 = FUNC_7(VAR_4, VAR_2);
 if (VAR_5 == 0) {

  return 0;
 } else if (VAR_5 == -VAR_0) {
  FUNC_1(VAR_2, "Device match requests probe deferral\n");
  FUNC_6(VAR_2);
 } else if (VAR_5 < 0) {
  FUNC_1(VAR_2, "Bus failed to match device: %d", VAR_5);
  return VAR_5;
 }

 if (FUNC_5(VAR_4)) {







  FUNC_1(VAR_2, "probing driver %s asynchronously\n", VAR_4->name);
  FUNC_3(VAR_2);
  if (!VAR_2->driver) {
   FUNC_8(VAR_2);
   VAR_2->p->async_driver = VAR_4;
   FUNC_0(VAR_1, VAR_2);
  }
  FUNC_4(VAR_2);
  return 0;
 }

 FUNC_2(VAR_4, VAR_2);

 return 0;
}
