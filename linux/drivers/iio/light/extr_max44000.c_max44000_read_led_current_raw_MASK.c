
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max44000_data {int regmap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct max44000_data *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->regmap, VAR_1, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_3 &= VAR_0;
 if (VAR_3 >= 8)
  VAR_3 -= 4;
 return VAR_3;
}
