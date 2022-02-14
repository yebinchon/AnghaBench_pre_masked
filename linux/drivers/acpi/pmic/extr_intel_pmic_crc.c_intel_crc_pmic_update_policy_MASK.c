
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regmap*,int,int*) ;
 scalar_t__ FUNC_1 (struct regmap*,int,int,int) ;
 scalar_t__ FUNC_2 (struct regmap*,int,int) ;

__attribute__((used)) static int FUNC_3(struct regmap *VAR_2,
     int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;


 if (FUNC_0(VAR_2, VAR_1, &VAR_6))
  return -VAR_0;

 if (FUNC_1(VAR_2, VAR_1, 0x01, 0))
  return -VAR_0;

 if (FUNC_1(VAR_2, VAR_3, 0x80, VAR_5 << 7))
  return -VAR_0;


 if (FUNC_2(VAR_2, VAR_1, VAR_6))
  return -VAR_0;

 return 0;
}
