
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32f4_i2c_dev {int dev; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct stm32f4_i2c_dev *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3->base + VAR_1,
      VAR_4,
      !(VAR_4 & VAR_2),
      10, 1000);
 if (VAR_5) {
  FUNC_0(VAR_3->dev, "bus not free\n");
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
