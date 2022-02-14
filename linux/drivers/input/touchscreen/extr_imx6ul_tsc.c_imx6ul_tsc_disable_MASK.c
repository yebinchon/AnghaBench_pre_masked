
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx6ul_tsc {scalar_t__ adc_regs; scalar_t__ tsc_regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct imx6ul_tsc *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;


 VAR_5 = FUNC_0(VAR_4->tsc_regs + VAR_2);
 VAR_5 |= VAR_3;
 FUNC_1(VAR_5, VAR_4->tsc_regs + VAR_2);


 VAR_6 = FUNC_0(VAR_4->adc_regs + VAR_1);
 VAR_6 |= VAR_0;
 FUNC_1(VAR_6, VAR_4->adc_regs + VAR_1);
}
