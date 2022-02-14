
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpcap_power_button {int idev; int dev; int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct cpcap_power_button *VAR_4 = VAR_3;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->regmap, VAR_2);
 if (VAR_5 < 0) {
  FUNC_1(VAR_4->dev, "irq read failed: %d", VAR_5);
  return VAR_0;
 }

 FUNC_4(VAR_4->dev, 0);
 FUNC_2(VAR_4->idev, VAR_1, VAR_5);
 FUNC_3(VAR_4->idev);

 return VAR_0;
}
