
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_uvis25_hw {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct st_uvis25_hw *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4->regmap, VAR_3,
     VAR_1, 1);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_0(2000);

 return FUNC_1(VAR_4->regmap, VAR_2,
      VAR_0, 1);
}
