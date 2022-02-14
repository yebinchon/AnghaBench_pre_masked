
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct analogix_dp_device {int dev; scalar_t__ reg_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

int FUNC_3(struct analogix_dp_device *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3->reg_base + VAR_0);
 FUNC_2(VAR_4, VAR_3->reg_base + VAR_0);

 VAR_4 = FUNC_1(VAR_3->reg_base + VAR_0);
 if (!(VAR_4 & VAR_2)) {
  FUNC_0(VAR_3->dev, "Input video stream is not detected.\n");
  return -VAR_1;
 }

 return 0;
}
