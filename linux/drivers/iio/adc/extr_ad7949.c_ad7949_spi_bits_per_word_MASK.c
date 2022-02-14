
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7949_adc_chip {int resolution; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ad7949_adc_chip*) ;

__attribute__((used)) static int FUNC_1(struct ad7949_adc_chip *VAR_1)
{
 int VAR_2 = VAR_1->resolution;

 if (FUNC_0(VAR_1))
  VAR_2 += VAR_0;

 return VAR_2;
}
