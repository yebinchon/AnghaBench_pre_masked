
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_mobile_i2c_data {int clks_per_count; scalar_t__ bus_speed; int icch; int iccl; int dev; int clk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct sh_mobile_i2c_data*) ;
 int FUNC_3 (unsigned long,int,int) ;
 int FUNC_4 (unsigned long,int,int) ;

__attribute__((used)) static int FUNC_5(struct sh_mobile_i2c_data *VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5, VAR_6, VAR_7;

 VAR_4 = FUNC_0(VAR_3->clk) / 1000 / VAR_3->clks_per_count;

 if (VAR_3->bus_speed == VAR_2) {
  VAR_6 = 47;
  VAR_5 = 40;
  VAR_7 = 3;
 } else if (VAR_3->bus_speed == VAR_1) {
  VAR_6 = 13;
  VAR_5 = 6;
  VAR_7 = 3;
 } else {
  FUNC_1(VAR_3->dev, "unrecognized bus speed %lu Hz\n",
   VAR_3->bus_speed);
  return -VAR_0;
 }

 VAR_3->iccl = FUNC_4(VAR_4, VAR_6, VAR_7);
 VAR_3->icch = FUNC_3(VAR_4, VAR_5, VAR_7);

 return FUNC_2(VAR_3);
}
