
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx6ul_tsc {scalar_t__ adc_regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct imx6ul_tsc *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_9 = VAR_0;
 FUNC_0(VAR_9, VAR_8->adc_regs + VAR_1);

 VAR_10 = VAR_0 | VAR_7;
 FUNC_0(VAR_10, VAR_8->adc_regs + VAR_2);

 VAR_11 = VAR_0;
 FUNC_0(VAR_11, VAR_8->adc_regs + VAR_3);

 VAR_12 = VAR_0 | VAR_6;
 FUNC_0(VAR_12, VAR_8->adc_regs + VAR_4);

 VAR_13 = VAR_0;
 FUNC_0(VAR_13, VAR_8->adc_regs + VAR_5);
}
