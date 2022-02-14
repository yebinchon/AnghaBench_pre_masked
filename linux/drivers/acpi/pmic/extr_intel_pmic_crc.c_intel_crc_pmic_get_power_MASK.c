
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct regmap {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct regmap*,int,int*) ;

__attribute__((used)) static int FUNC_2(struct regmap *VAR_2, int VAR_3,
        int VAR_4, u64 *VAR_5)
{
 int VAR_6;

 if (FUNC_1(VAR_2, VAR_3, &VAR_6))
  return -VAR_0;

 *VAR_5 = (VAR_6 & VAR_1) && (VAR_6 & FUNC_0(VAR_4)) ? 1 : 0;
 return 0;
}
