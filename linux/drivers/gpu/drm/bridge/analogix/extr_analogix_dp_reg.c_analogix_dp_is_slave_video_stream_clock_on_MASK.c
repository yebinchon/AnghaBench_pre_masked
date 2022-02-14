
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct analogix_dp_device {int dev; scalar_t__ reg_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

int FUNC_3(struct analogix_dp_device *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_5->reg_base + VAR_0);
 FUNC_2(VAR_6, VAR_5->reg_base + VAR_0);

 VAR_6 = FUNC_1(VAR_5->reg_base + VAR_0);

 if (!(VAR_6 & VAR_3)) {
  FUNC_0(VAR_5->dev, "Input stream clock not detected.\n");
  return -VAR_4;
 }

 VAR_6 = FUNC_1(VAR_5->reg_base + VAR_1);
 FUNC_2(VAR_6, VAR_5->reg_base + VAR_1);

 VAR_6 = FUNC_1(VAR_5->reg_base + VAR_1);
 FUNC_0(VAR_5->dev, "wait SYS_CTL_2.\n");

 if (VAR_6 & VAR_2) {
  FUNC_0(VAR_5->dev, "Input stream clk is changing\n");
  return -VAR_4;
 }

 return 0;
}
