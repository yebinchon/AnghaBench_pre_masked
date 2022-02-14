
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct palmas_gpadc {TYPE_1__* adc_info; int dev; } ;
struct TYPE_2__ {int offset; int gain_error; int gain; int is_uncalibrated; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct palmas_gpadc *VAR_0,
      int VAR_1, int VAR_2)
{
 if (!VAR_0->adc_info[VAR_1].is_uncalibrated)
  VAR_2 = (VAR_2*1000 - VAR_0->adc_info[VAR_1].offset) /
     VAR_0->adc_info[VAR_1].gain_error;

 if (VAR_2 < 0) {
  FUNC_0(VAR_0->dev, "Mismatch with calibration\n");
  return 0;
 }

 VAR_2 = (VAR_2 * VAR_0->adc_info[VAR_1].gain) / 1000;

 return VAR_2;
}
