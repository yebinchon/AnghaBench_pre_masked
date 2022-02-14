
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wake_irq {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct wake_irq *VAR_3 = VAR_2;
 int VAR_4;


 if (FUNC_2(FUNC_1(VAR_1))) {
  FUNC_4(VAR_3->dev, 0);

  return VAR_0;
 }


 VAR_4 = FUNC_3(VAR_3->dev);
 if (VAR_4 < 0)
  FUNC_0(VAR_3->dev,
    "wake IRQ with no resume: %i\n", VAR_4);

 return VAR_0;
}
