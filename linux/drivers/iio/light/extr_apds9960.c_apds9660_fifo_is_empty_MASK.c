
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apds9960_data {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static inline int FUNC_1(struct apds9960_data *VAR_1)
{
 int VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1->regmap, VAR_0, &VAR_2);
 if (VAR_3)
  return VAR_3;

 return VAR_2;
}
