
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static inline bool FUNC_2(struct regmap *VAR_1, int VAR_2)
{
 unsigned int VAR_3;

 FUNC_1(VAR_1, VAR_0, &VAR_3);

 return VAR_3 & FUNC_0(VAR_2) ? 1 : 0;
}
