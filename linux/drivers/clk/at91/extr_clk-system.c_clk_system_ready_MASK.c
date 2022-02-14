
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static inline bool FUNC_1(struct regmap *VAR_1, int VAR_2)
{
 unsigned int VAR_3;

 FUNC_0(VAR_1, VAR_0, &VAR_3);

 return VAR_3 & (1 << VAR_2) ? 1 : 0;
}
