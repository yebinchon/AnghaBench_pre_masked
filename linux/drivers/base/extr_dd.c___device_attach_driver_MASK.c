
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
struct device_attach_data {int have_async; int want_async; scalar_t__ check_async; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device_driver*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device_driver*,struct device*) ;
 int FUNC_4 (struct device_driver*,struct device*) ;

__attribute__((used)) static int FUNC_5(struct device_driver *VAR_1, void *VAR_2)
{
 struct device_attach_data *VAR_3 = VAR_2;
 struct device *VAR_4 = VAR_3->dev;
 bool VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_1, VAR_4);
 if (VAR_6 == 0) {

  return 0;
 } else if (VAR_6 == -VAR_0) {
  FUNC_0(VAR_4, "Device match requests probe deferral\n");
  FUNC_2(VAR_4);
 } else if (VAR_6 < 0) {
  FUNC_0(VAR_4, "Bus failed to match device: %d", VAR_6);
  return VAR_6;
 }

 VAR_5 = FUNC_1(VAR_1);

 if (VAR_5)
  VAR_3->have_async = 1;

 if (VAR_3->check_async && VAR_5 != VAR_3->want_async)
  return 0;

 return FUNC_4(VAR_1, VAR_4);
}
