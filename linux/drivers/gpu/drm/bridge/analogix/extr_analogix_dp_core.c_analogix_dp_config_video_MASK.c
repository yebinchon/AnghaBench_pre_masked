
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct analogix_dp_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct analogix_dp_device*) ;
 int FUNC_1 (struct analogix_dp_device*,int ) ;
 int FUNC_2 (struct analogix_dp_device*,int ) ;
 scalar_t__ FUNC_3 (struct analogix_dp_device*) ;
 scalar_t__ FUNC_4 (struct analogix_dp_device*) ;
 scalar_t__ FUNC_5 (struct analogix_dp_device*) ;
 int FUNC_6 (struct analogix_dp_device*) ;
 int FUNC_7 (struct analogix_dp_device*,int ,int ,int ) ;
 int FUNC_8 (struct analogix_dp_device*,int ) ;
 int FUNC_9 (struct analogix_dp_device*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int,int) ;

__attribute__((used)) static int FUNC_13(struct analogix_dp_device *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = 0;

 FUNC_0(VAR_6);

 FUNC_6(VAR_6);

 if (FUNC_3(VAR_6) == VAR_4) {
  FUNC_10(VAR_6->dev, "PLL is not locked yet.\n");
  return -VAR_2;
 }

 for (;;) {
  VAR_7++;
  if (FUNC_4(VAR_6) == 0)
   break;
  if (VAR_7 > VAR_1) {
   FUNC_10(VAR_6->dev, "Timeout of slave video streamclk ok\n");
   return -VAR_3;
  }
  FUNC_12(1000, 1001);
 }


 FUNC_7(VAR_6, VAR_0, 0, 0);


 FUNC_8(VAR_6, VAR_5);


 FUNC_2(VAR_6, 0);


 FUNC_1(VAR_6, 0);


 FUNC_9(VAR_6);

 VAR_7 = 0;

 for (;;) {
  VAR_7++;
  if (FUNC_5(VAR_6) == 0) {
   VAR_8++;
   if (VAR_8 > 10)
    break;
  } else if (VAR_8) {
   VAR_8 = 0;
  }
  if (VAR_7 > VAR_1) {
   FUNC_11(VAR_6->dev,
     "Ignoring timeout of video streamclk ok\n");
   break;
  }

  FUNC_12(1000, 1001);
 }

 return 0;
}
