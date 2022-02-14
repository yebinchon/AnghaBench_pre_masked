
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max44000_data {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct max44000_data *VAR_4, int VAR_5)
{

 if (VAR_5 < 0 || VAR_5 > VAR_2)
  return -VAR_0;
 if (VAR_5 >= 8)
  VAR_5 += 4;
 return FUNC_0(VAR_4->regmap, VAR_3,
     VAR_1, VAR_5);
}
