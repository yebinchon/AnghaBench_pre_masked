
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct analogix_dp_device {scalar_t__ reg_base; int dev; } ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct analogix_dp_device*) ;
 int FUNC_1 (struct analogix_dp_device*,int ,int ) ;
 int FUNC_2 (struct analogix_dp_device*,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,scalar_t__) ;

int FUNC_7(struct analogix_dp_device *VAR_13)
{
 u32 VAR_14;
 int VAR_15 = 0;

 FUNC_1(VAR_13, VAR_11, 0);

 VAR_14 = VAR_8;
 FUNC_6(VAR_14, VAR_13->reg_base + VAR_0);

 VAR_14 = FUNC_4(VAR_13->reg_base + VAR_1);
 VAR_14 &= ~(VAR_6 | VAR_9);
 FUNC_6(VAR_14, VAR_13->reg_base + VAR_1);


 if (FUNC_0(VAR_13) == VAR_10) {
  FUNC_2(VAR_13, 0);

  while (FUNC_0(VAR_13) == VAR_10) {
   VAR_15++;
   if (VAR_4 < VAR_15) {
    FUNC_3(VAR_13->dev, "failed to get pll lock status\n");
    return -VAR_5;
   }
   FUNC_5(10, 20);
  }
 }


 VAR_14 = FUNC_4(VAR_13->reg_base + VAR_2);
 VAR_14 &= ~(VAR_12 | VAR_7
  | VAR_3);
 FUNC_6(VAR_14, VAR_13->reg_base + VAR_2);
 return 0;
}
