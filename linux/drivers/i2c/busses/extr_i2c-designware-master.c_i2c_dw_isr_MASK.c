
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_i2c_dev {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct dw_i2c_dev*,int ) ;
 int FUNC_2 (struct dw_i2c_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct dw_i2c_dev *VAR_7 = VAR_6;
 u32 VAR_8, VAR_9;

 VAR_9 = FUNC_1(VAR_7, VAR_0);
 VAR_8 = FUNC_1(VAR_7, VAR_2);
 FUNC_0(VAR_7->dev, "enabled=%#x stat=%#x\n", VAR_9, VAR_8);
 if (!VAR_9 || !(VAR_8 & ~VAR_1))
  return VAR_4;

 FUNC_2(VAR_7);

 return VAR_3;
}
