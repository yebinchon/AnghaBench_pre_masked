
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hts221_hw {int enabled; int regmap; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ) ;

int FUNC_2(struct hts221_hw *VAR_2, bool VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->regmap, VAR_1,
     VAR_0,
     FUNC_0(VAR_0, VAR_3));
 if (VAR_4 < 0)
  return VAR_4;

 VAR_2->enabled = VAR_3;

 return 0;
}
