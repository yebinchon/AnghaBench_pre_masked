
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpr0521_data {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static inline bool FUNC_1(struct rpr0521_data *VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_3->regmap, VAR_2, &VAR_5);
 if (VAR_4 < 0)
  return 0;
 if (VAR_5 &
     (VAR_0 |
     VAR_1))
  return 1;
 else
  return 0;
}
