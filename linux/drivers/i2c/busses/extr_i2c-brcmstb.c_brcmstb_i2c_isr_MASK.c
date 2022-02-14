
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmstb_i2c_dev {int device; int done; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct brcmstb_i2c_dev*,int ) ;
 int FUNC_1 (struct brcmstb_i2c_dev*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_5 ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct brcmstb_i2c_dev *VAR_8 = VAR_7;
 u32 VAR_9 = FUNC_1(VAR_8, VAR_4);
 u32 VAR_10 = FUNC_1(VAR_8, VAR_5);

 FUNC_3(VAR_8->device, "isr CTL_REG %x IIC_EN %x\n",
  VAR_9, VAR_10);

 if (!(VAR_9 & VAR_0))
  return VAR_3;

 FUNC_0(VAR_8, VAR_1);
 FUNC_2(&VAR_8->done);

 FUNC_3(VAR_8->device, "isr handled");
 return VAR_2;
}
