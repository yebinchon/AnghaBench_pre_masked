
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adxl372_state {scalar_t__ odr; unsigned int inact_time_ms; int regmap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct adxl372_state *VAR_3,
       unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9;





 if (VAR_3->odr == VAR_0)
  VAR_8 = 13;
 else
  VAR_8 = 26;

 VAR_7 = FUNC_0(VAR_4, VAR_8);
 VAR_5 = (VAR_7 >> 8) & 0xFF;
 VAR_6 = VAR_7 & 0xFF;

 VAR_9 = FUNC_1(VAR_3->regmap, VAR_1, VAR_5);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_3->regmap, VAR_2, VAR_6);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_3->inact_time_ms = VAR_4;

 return VAR_9;
}
