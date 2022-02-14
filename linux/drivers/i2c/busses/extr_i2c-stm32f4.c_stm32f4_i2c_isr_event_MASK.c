
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32f4_i2c_msg {int addr; } ;
struct stm32f4_i2c_dev {scalar_t__ base; int dev; struct stm32f4_i2c_msg msg; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct stm32f4_i2c_dev*) ;
 int FUNC_3 (struct stm32f4_i2c_dev*) ;
 int FUNC_4 (struct stm32f4_i2c_dev*) ;
 int FUNC_5 (struct stm32f4_i2c_dev*) ;
 int FUNC_6 (struct stm32f4_i2c_dev*,int) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_15, void *VAR_16)
{
 struct stm32f4_i2c_dev *VAR_17 = VAR_16;
 struct stm32f4_i2c_msg *VAR_18 = &VAR_17->msg;
 u32 VAR_19 = VAR_10;
 u32 VAR_20, VAR_21, VAR_22, VAR_23;

 VAR_23 = FUNC_1(VAR_17->base + VAR_3);
 VAR_21 = VAR_23 & VAR_4;


 if (VAR_21 & VAR_5)
  VAR_19 |= VAR_9;

 VAR_20 = FUNC_1(VAR_17->base + VAR_6);
 VAR_22 = VAR_20 & VAR_19;
 if (!VAR_22) {
  FUNC_0(VAR_17->dev,
   "spurious evt irq (status=0x%08x, ien=0x%08x)\n",
   VAR_20, VAR_21);
  return VAR_2;
 }


 if (VAR_22 & VAR_12)
  FUNC_6(VAR_17, VAR_18->addr);


 if (VAR_22 & VAR_7) {
  if (VAR_18->addr & VAR_0)
   FUNC_3(VAR_17);
  else
   FUNC_1(VAR_17->base + VAR_14);





  VAR_23 |= VAR_5;
  FUNC_7(VAR_23, VAR_17->base + VAR_3);
 }


 if ((VAR_22 & VAR_13) && !(VAR_18->addr & VAR_0))
  FUNC_5(VAR_17);


 if ((VAR_22 & VAR_11) && (VAR_18->addr & VAR_0))
  FUNC_2(VAR_17);
 if (VAR_22 & VAR_8) {
  if (VAR_18->addr & VAR_0)
   FUNC_4(VAR_17);
  else
   FUNC_5(VAR_17);
 }

 return VAR_1;
}
