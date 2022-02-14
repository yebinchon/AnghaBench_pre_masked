
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max30102_data {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static inline int FUNC_1(struct max30102_data *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->regmap, VAR_0, &VAR_3);
 if (VAR_4)
  return VAR_4;


 if (VAR_3 & VAR_1)
  return 1;

 return 0;
}
