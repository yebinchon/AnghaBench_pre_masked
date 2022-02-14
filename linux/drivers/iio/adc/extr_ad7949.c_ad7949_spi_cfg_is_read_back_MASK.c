
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7949_adc_chip {int cfg; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct ad7949_adc_chip *VAR_1)
{
 if (!(VAR_1->cfg & VAR_0))
  return 1;

 return 0;
}
