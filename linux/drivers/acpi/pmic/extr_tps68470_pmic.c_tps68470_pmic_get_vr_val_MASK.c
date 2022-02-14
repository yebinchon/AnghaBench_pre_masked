
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct regmap*,int,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct regmap *VAR_1, int VAR_2,
           int VAR_3, u64 *VAR_4)
{
 unsigned int VAR_5;

 if (FUNC_0(VAR_1, VAR_2, &VAR_5))
  return -VAR_0;

 *VAR_4 = VAR_5 & VAR_3;
 return 0;
}
