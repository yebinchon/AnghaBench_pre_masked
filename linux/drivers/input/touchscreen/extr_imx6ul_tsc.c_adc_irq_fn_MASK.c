
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx6ul_tsc {int completion; scalar_t__ adc_regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct imx6ul_tsc *VAR_5 = VAR_4;
 u32 VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_1(VAR_5->adc_regs + VAR_1);
 if (VAR_6 & 0x01) {
  VAR_7 = FUNC_1(VAR_5->adc_regs + VAR_2);
  FUNC_0(&VAR_5->completion);
 }

 return VAR_0;
}
