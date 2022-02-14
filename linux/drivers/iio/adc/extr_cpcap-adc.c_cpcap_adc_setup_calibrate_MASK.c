
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpcap_adc {int reg; int dev; } ;
typedef enum cpcap_adc_channel { ____Placeholder_cpcap_adc_channel } cpcap_adc_channel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_21 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct cpcap_adc *VAR_22,
          enum cpcap_adc_channel VAR_23)
{
 unsigned int VAR_24 = 0;
 unsigned long VAR_25 = VAR_21 + FUNC_1(3000);
 int VAR_26;

 if ((VAR_23 != VAR_1) &&
     (VAR_23 != VAR_0))
  return;

 VAR_24 |= VAR_16 | VAR_17;
 VAR_24 |= ((VAR_23 << 4) &
    (VAR_4 | VAR_3 | VAR_2));

 VAR_26 = FUNC_3(VAR_22->reg, VAR_19,
       VAR_16 | VAR_14 |
       VAR_13 | VAR_12 |
       VAR_11 | VAR_10 |
       VAR_4 | VAR_3 |
       VAR_2 | VAR_8 |
       VAR_18 | VAR_17,
       VAR_24);
 if (VAR_26)
  return;

 VAR_26 = FUNC_3(VAR_22->reg, VAR_20,
       VAR_15 |
       VAR_6 |
       VAR_5,
       0);
 if (VAR_26)
  return;

 VAR_26 = FUNC_3(VAR_22->reg, VAR_20,
       VAR_7,
       VAR_7);
 if (VAR_26)
  return;

 VAR_26 = FUNC_3(VAR_22->reg, VAR_20,
       VAR_9,
       VAR_9);
 if (VAR_26)
  return;

 do {
  FUNC_4(1);
  VAR_26 = FUNC_2(VAR_22->reg, VAR_20, &VAR_24);
  if (VAR_26)
   return;
 } while ((VAR_24 & VAR_9) && FUNC_5(VAR_21, VAR_25));

 if (VAR_24 & VAR_9)
  FUNC_0(VAR_22->dev,
   "Timeout waiting for calibration to complete\n");

 VAR_26 = FUNC_3(VAR_22->reg, VAR_19,
       VAR_16, 0);
 if (VAR_26)
  return;
}
