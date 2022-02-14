
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_dfsdm_channel {unsigned int id; int alt_si; int src; int type; } ;
struct stm32_dfsdm {struct regmap* regmap; } ;
struct regmap {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (struct regmap*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct stm32_dfsdm *VAR_3,
          struct stm32_dfsdm_channel *VAR_4)
{
 unsigned int VAR_5 = VAR_4->id;
 struct regmap *VAR_6 = VAR_3->regmap;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_6, FUNC_0(VAR_5),
     VAR_1,
     FUNC_2(VAR_4->type));
 if (VAR_7 < 0)
  return VAR_7;
 VAR_7 = FUNC_4(VAR_6, FUNC_0(VAR_5),
     VAR_2,
     FUNC_3(VAR_4->src));
 if (VAR_7 < 0)
  return VAR_7;
 return FUNC_4(VAR_6, FUNC_0(VAR_5),
      VAR_0,
      FUNC_1(VAR_4->alt_si));
}
