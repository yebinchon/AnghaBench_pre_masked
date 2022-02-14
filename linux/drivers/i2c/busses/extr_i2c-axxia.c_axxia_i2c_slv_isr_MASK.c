
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct axxia_i2c_dev {scalar_t__ base; int slave; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct axxia_i2c_dev*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(struct axxia_i2c_dev *VAR_12)
{
 u32 VAR_13 = FUNC_3(VAR_12->base + VAR_7);
 u8 VAR_14;

 FUNC_1(VAR_12->dev, "slave irq status=0x%x\n", VAR_13);

 if (VAR_13 & VAR_8)
  FUNC_0(VAR_12);
 if (VAR_13 & VAR_11) {
  FUNC_2(VAR_12->slave, VAR_1, &VAR_14);
  FUNC_4(VAR_14, VAR_12->base + VAR_6);
 }
 if (VAR_13 & VAR_10) {
  FUNC_2(VAR_12->slave, VAR_0, &VAR_14);
  FUNC_4(VAR_14, VAR_12->base + VAR_6);
 }
 if (VAR_13 & VAR_9)
  FUNC_2(VAR_12->slave, VAR_2, &VAR_14);

 FUNC_4(VAR_4, VAR_12->base + VAR_3);
 return VAR_5;
}
