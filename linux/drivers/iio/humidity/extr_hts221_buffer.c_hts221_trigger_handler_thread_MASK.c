
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hts221_hw {int trig; int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 struct hts221_hw *VAR_6 = VAR_5;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_1(VAR_6->regmap, VAR_0, &VAR_8);
 if (VAR_7 < 0)
  return VAR_2;







 if (!(VAR_8 & VAR_1))
  return VAR_3;

 FUNC_0(VAR_6->trig);

 return VAR_2;
}
