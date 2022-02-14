
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axp288_adc_info {int regmap; int ts_enabled; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ,int ,int ,unsigned int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct axp288_adc_info *VAR_4,
        unsigned int VAR_5, unsigned long VAR_6)
{
 int VAR_7;


 if (!VAR_4->ts_enabled)
  return 0;


 if (VAR_6 != VAR_3)
  return 0;

 VAR_7 = FUNC_0(VAR_4->regmap, VAR_2,
     VAR_0, VAR_5);
 if (VAR_7)
  return VAR_7;


 if (VAR_5 == VAR_1)
  FUNC_1(6000, 10000);

 return 0;
}
