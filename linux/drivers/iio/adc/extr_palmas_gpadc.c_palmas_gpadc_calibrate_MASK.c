
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct palmas_gpadc {TYPE_1__* adc_info; int dev; int palmas; } ;
struct TYPE_2__ {int x1; int x2; int v1; int v2; int gain_error; int gain; int offset; int trim2_reg; int trim1_reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct palmas_gpadc *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8 = VAR_1->adc_info[VAR_2].x1;
 int VAR_9 = VAR_1->adc_info[VAR_2].x2;
 int VAR_10 = VAR_1->adc_info[VAR_2].v1;
 int VAR_11 = VAR_1->adc_info[VAR_2].v2;

 VAR_6 = FUNC_1(VAR_1->palmas, VAR_0,
    VAR_1->adc_info[VAR_2].trim1_reg, &VAR_4);
 if (VAR_6 < 0) {
  FUNC_0(VAR_1->dev, "TRIM read failed: %d\n", VAR_6);
  goto scrub;
 }

 VAR_6 = FUNC_1(VAR_1->palmas, VAR_0,
    VAR_1->adc_info[VAR_2].trim2_reg, &VAR_5);
 if (VAR_6 < 0) {
  FUNC_0(VAR_1->dev, "TRIM read failed: %d\n", VAR_6);
  goto scrub;
 }


 VAR_3 = (1000 + (1000 * (VAR_5 - VAR_4)) / (VAR_9 - VAR_8));


 VAR_7 = ((VAR_11 - VAR_10) * 1000) / (VAR_9 - VAR_8);

 VAR_1->adc_info[VAR_2].gain_error = VAR_3;
 VAR_1->adc_info[VAR_2].gain = VAR_7;

 VAR_1->adc_info[VAR_2].offset = (VAR_4 * 1000) - ((VAR_3 - 1000) * VAR_8);

scrub:
 return VAR_6;
}
