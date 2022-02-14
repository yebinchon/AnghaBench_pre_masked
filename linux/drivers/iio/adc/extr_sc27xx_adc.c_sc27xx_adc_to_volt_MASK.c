
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc27xx_adc_linear_graph {int volt0; int volt1; int adc1; int adc0; } ;



__attribute__((used)) static int FUNC_0(struct sc27xx_adc_linear_graph *VAR_0,
         int VAR_1)
{
 int VAR_2;

 VAR_2 = (VAR_0->volt0 - VAR_0->volt1) * (VAR_1 - VAR_0->adc1);
 VAR_2 /= (VAR_0->adc0 - VAR_0->adc1);
 VAR_2 += VAR_0->volt1;

 return VAR_2 < 0 ? 0 : VAR_2;
}
