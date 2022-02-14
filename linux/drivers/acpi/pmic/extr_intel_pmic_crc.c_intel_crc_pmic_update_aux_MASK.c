
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct regmap*,int,int,int) ;
 scalar_t__ FUNC_1 (struct regmap*,int,int) ;

__attribute__((used)) static int FUNC_2(struct regmap *VAR_1, int VAR_2, int VAR_3)
{
 return FUNC_1(VAR_1, VAR_2, VAR_3) ||
  FUNC_0(VAR_1, VAR_2 - 1, 0x3, VAR_3 >> 8) ? -VAR_0 : 0;
}
