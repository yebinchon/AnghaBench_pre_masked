
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_data {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct tc_data *VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->regmap, VAR_3, VAR_1 | VAR_0);
 if (VAR_4)
  return VAR_4;


 FUNC_1(3000, 6000);

 return 0;
}
