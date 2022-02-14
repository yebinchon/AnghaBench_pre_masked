
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct analogix_dp_device {int dev; scalar_t__ reg_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,scalar_t__) ;

int FUNC_4(struct analogix_dp_device *VAR_10)
{
 int VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;


 VAR_11 = FUNC_1(VAR_10->reg_base + VAR_0);
 VAR_11 |= VAR_3;
 FUNC_3(VAR_11, VAR_10->reg_base + VAR_0);


 VAR_11 = FUNC_1(VAR_10->reg_base + VAR_2);
 while (!(VAR_11 & VAR_9)) {
  VAR_13++;
  if (VAR_6 < VAR_13) {
   FUNC_0(VAR_10->dev, "AUX CH command reply failed!\n");
   return -VAR_8;
  }
  VAR_11 = FUNC_1(VAR_10->reg_base + VAR_2);
  FUNC_2(10, 11);
 }


 FUNC_3(VAR_9, VAR_10->reg_base + VAR_2);


 VAR_11 = FUNC_1(VAR_10->reg_base + VAR_2);
 if (VAR_11 & VAR_4) {
  FUNC_3(VAR_4, VAR_10->reg_base + VAR_2);
  return -VAR_7;
 }


 VAR_11 = FUNC_1(VAR_10->reg_base + VAR_1);
 if ((VAR_11 & VAR_5) != 0) {
  FUNC_0(VAR_10->dev, "AUX CH error happens: %d\n\n",
   VAR_11 & VAR_5);
  return -VAR_7;
 }

 return VAR_12;
}
