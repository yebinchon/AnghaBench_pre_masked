
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adxl372_state {int odr; int regmap; } ;
typedef enum adxl372_odr { ____Placeholder_adxl372_odr } adxl372_odr ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct adxl372_state *VAR_2,
      enum adxl372_odr VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->regmap, VAR_0,
     VAR_1,
     FUNC_0(VAR_3));
 if (VAR_4 < 0)
  return VAR_4;

 VAR_2->odr = VAR_3;

 return VAR_4;
}
