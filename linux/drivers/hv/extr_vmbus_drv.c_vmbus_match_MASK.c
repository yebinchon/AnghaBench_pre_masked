
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_driver {int hvsock; } ;
struct hv_device {int channel; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 struct hv_device* FUNC_0 (struct device*) ;
 struct hv_driver* FUNC_1 (struct device_driver*) ;
 scalar_t__ FUNC_2 (struct hv_driver*,struct hv_device*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct hv_driver *VAR_2 = FUNC_1(VAR_1);
 struct hv_device *VAR_3 = FUNC_0(VAR_0);


 if (FUNC_3(VAR_3->channel))
  return VAR_2->hvsock;

 if (FUNC_2(VAR_2, VAR_3))
  return 1;

 return 0;
}
