
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx9500_data {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_2(struct sx9500_data *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;

 VAR_5 = FUNC_1(VAR_4->regmap, VAR_0, &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_6 = (VAR_6 & VAR_1) >> VAR_2;

 FUNC_0(VAR_3[VAR_6]);

 return 0;
}
