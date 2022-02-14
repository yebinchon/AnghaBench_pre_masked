
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx7d_adc {scalar_t__ regs; int dev; int completion; int value; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct imx7d_adc*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct imx7d_adc *VAR_6 = VAR_5;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_6->regs + VAR_0);
 if (VAR_7 & VAR_2) {
  VAR_6->value = FUNC_2(VAR_6);
  FUNC_0(&VAR_6->completion);







  VAR_7 &= ~VAR_2;
  FUNC_4(VAR_7, VAR_6->regs + VAR_0);
 }





 if (VAR_7 & VAR_1) {
  FUNC_1(VAR_6->dev,
   "ADC got conversion time out interrupt: 0x%08x\n",
   VAR_7);
  VAR_7 &= ~VAR_1;
  FUNC_4(VAR_7, VAR_6->regs + VAR_0);
 }

 return VAR_3;
}
