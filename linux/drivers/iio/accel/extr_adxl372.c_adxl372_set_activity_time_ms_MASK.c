
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adxl372_state {scalar_t__ odr; unsigned int act_time_ms; int regmap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct adxl372_state *VAR_2,
     unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5;
 int VAR_6;





 if (VAR_2->odr == VAR_0)
  VAR_5 = 3300;
 else
  VAR_5 = 6600;

 VAR_4 = FUNC_0(VAR_3 * 1000, VAR_5);


 if (VAR_4 > 0xFF)
  VAR_4 = 0xFF;

 VAR_6 = FUNC_1(VAR_2->regmap, VAR_1, VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_2->act_time_ms = VAR_3;

 return VAR_6;
}
