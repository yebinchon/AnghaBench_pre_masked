
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adxl372_state {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned char) ;

__attribute__((used)) static int FUNC_1(struct adxl372_state *VAR_2,
      unsigned char VAR_3,
      unsigned char VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2->regmap, VAR_0, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_0(VAR_2->regmap, VAR_1, VAR_4);
}
