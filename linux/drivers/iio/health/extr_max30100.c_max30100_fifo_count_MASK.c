
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max30100_data {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static inline int FUNC_1(struct max30100_data *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->regmap, VAR_1, &VAR_4);
 if (VAR_5)
  return VAR_5;


 if (VAR_4 & VAR_2)
  return VAR_0 - 1;

 return 0;
}
