
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx6ul_tsc {int average_select; scalar_t__ adc_regs; int dev; int completion; scalar_t__ average_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 (int *,int ) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct imx6ul_tsc *VAR_23)
{
 u32 VAR_24 = 0;
 u32 VAR_25;
 u32 VAR_26;
 u32 VAR_27;
 unsigned long VAR_28;

 FUNC_2(&VAR_23->completion);

 VAR_27 = FUNC_1(VAR_23->adc_regs + VAR_19);
 VAR_27 &= ~(VAR_10 | VAR_12);
 VAR_27 |= VAR_0 | VAR_13;
 VAR_27 &= ~(VAR_8 | VAR_14);
 VAR_27 |= VAR_7 | VAR_15;
 if (VAR_23->average_enable) {
  VAR_27 &= ~VAR_3;
  VAR_27 |= (VAR_23->average_select) << VAR_4;
 }
 VAR_27 &= ~VAR_11;
 FUNC_4(VAR_27, VAR_23->adc_regs + VAR_19);


 VAR_24 |= VAR_1;
 VAR_24 |= VAR_9;
 FUNC_4(VAR_24, VAR_23->adc_regs + VAR_22);


 VAR_25 = FUNC_1(VAR_23->adc_regs + VAR_20);
 VAR_25 |= VAR_5;
 if (VAR_23->average_enable)
  VAR_25 |= VAR_2;
 FUNC_4(VAR_25, VAR_23->adc_regs + VAR_20);

 VAR_28 = FUNC_3
   (&VAR_23->completion, VAR_16);
 if (VAR_28 == 0) {
  FUNC_0(VAR_23->dev, "Timeout for adc calibration\n");
  return -VAR_18;
 }

 VAR_26 = FUNC_1(VAR_23->adc_regs + VAR_21);
 if (VAR_26 & VAR_6) {
  FUNC_0(VAR_23->dev, "ADC calibration failed\n");
  return -VAR_17;
 }


 VAR_27 = FUNC_1(VAR_23->adc_regs + VAR_19);
 VAR_27 |= VAR_11;
 FUNC_4(VAR_27, VAR_23->adc_regs + VAR_19);

 return 0;
}
