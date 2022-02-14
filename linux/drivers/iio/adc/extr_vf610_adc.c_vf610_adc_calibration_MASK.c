
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int calibration; } ;
struct vf610_adc {TYPE_1__ adc_feature; int dev; scalar_t__ regs; int completion; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct vf610_adc *VAR_8)
{
 int VAR_9, VAR_10;

 if (!VAR_8->adc_feature.calibration)
  return;


 VAR_10 = VAR_0 | VAR_3;
 FUNC_3(VAR_10, VAR_8->regs + VAR_7);

 VAR_9 = FUNC_1(VAR_8->regs + VAR_5);
 FUNC_3(VAR_9 | VAR_1, VAR_8->regs + VAR_5);

 if (!FUNC_2(&VAR_8->completion, VAR_4))
  FUNC_0(VAR_8->dev, "Timeout for adc calibration\n");

 VAR_9 = FUNC_1(VAR_8->regs + VAR_6);
 if (VAR_9 & VAR_2)
  FUNC_0(VAR_8->dev, "ADC calibration failed\n");

 VAR_8->adc_feature.calibration = 0;
}
