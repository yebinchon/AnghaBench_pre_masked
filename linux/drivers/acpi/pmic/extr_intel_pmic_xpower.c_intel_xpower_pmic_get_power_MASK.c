
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct regmap {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct regmap*,int,int*) ;

__attribute__((used)) static int FUNC_2(struct regmap *VAR_4, int VAR_5,
           int VAR_6, u64 *VAR_7)
{
 int VAR_8;

 if (FUNC_1(VAR_4, VAR_5, &VAR_8))
  return -VAR_0;


 if (VAR_5 == VAR_3)
  *VAR_7 = ((VAR_8 & VAR_1) == VAR_2);
 else
  *VAR_7 = (VAR_8 & FUNC_0(VAR_6)) ? 1 : 0;

 return 0;
}
