
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gpu_i2c_dev {scalar_t__ regs; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int ,char*,int) ;
 unsigned long VAR_6 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct gpu_i2c_dev *VAR_7)
{
 unsigned long VAR_8 = VAR_6 + FUNC_1(1000);
 u32 VAR_9;

 do {
  VAR_9 = FUNC_2(VAR_7->regs + VAR_2);
  if (!(VAR_9 & VAR_3))
   break;
  if ((VAR_9 & VAR_4) !=
    VAR_5)
   break;
  FUNC_5(500, 600);
 } while (FUNC_3(VAR_8));

 if (FUNC_4(VAR_8)) {
  FUNC_0(VAR_7->dev, "i2c timeout error %x\n", VAR_9);
  return -VAR_1;
 }

 VAR_9 = FUNC_2(VAR_7->regs + VAR_2);
 switch (VAR_9 & VAR_4) {
 case 129:
  return 0;
 case 130:
  return -VAR_0;
 case 128:
  return -VAR_1;
 default:
  return 0;
 }
}
