
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct analogix_dp_device {TYPE_1__* plat_data; int dev; } ;
struct TYPE_2__ {scalar_t__ panel; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct analogix_dp_device*) ;
 scalar_t__ FUNC_2 (struct analogix_dp_device*) ;
 int FUNC_3 (struct analogix_dp_device*,int) ;
 int FUNC_4 (struct analogix_dp_device*) ;
 int FUNC_5 (struct analogix_dp_device*) ;
 int FUNC_6 (struct analogix_dp_device*) ;
 int FUNC_7 (struct analogix_dp_device*) ;
 int FUNC_8 (int ,char*,...) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct analogix_dp_device *VAR_0)
{
 int VAR_1;


 if (VAR_0->plat_data->panel) {
  if (FUNC_9(VAR_0->plat_data->panel))
   FUNC_0("failed to disable the panel\n");
 }

 VAR_1 = FUNC_7(VAR_0);
 if (VAR_1) {
  FUNC_8(VAR_0->dev, "unable to do link train, ret=%d\n", VAR_1);
  return VAR_1;
 }

 VAR_1 = FUNC_3(VAR_0, 1);
 if (VAR_1 < 0) {
  FUNC_8(VAR_0->dev, "can not enable scramble\n");
  return VAR_1;
 }

 FUNC_6(VAR_0);
 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  FUNC_8(VAR_0->dev, "unable to config video\n");
  return VAR_1;
 }


 if (VAR_0->plat_data->panel) {
  VAR_1 = FUNC_10(VAR_0->plat_data->panel);
  if (VAR_1) {
   FUNC_0("failed to enable the panel\n");
   return VAR_1;
  }
 }


 VAR_1 = FUNC_5(VAR_0);
 if (VAR_1)
  return VAR_1;

 if (FUNC_2(VAR_0)) {
  VAR_1 = FUNC_4(VAR_0);
  if (VAR_1)
   return VAR_1;
 }

 return VAR_1;
}
