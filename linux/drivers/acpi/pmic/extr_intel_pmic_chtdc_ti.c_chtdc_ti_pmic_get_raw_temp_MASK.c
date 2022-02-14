
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct regmap*,int,int*,int) ;

__attribute__((used)) static int FUNC_1(struct regmap *VAR_1, int VAR_2)
{
 u8 VAR_3[2];

 if (FUNC_0(VAR_1, VAR_2, VAR_3, 2))
  return -VAR_0;


 return ((VAR_3[0] & 0x03) << 8) | VAR_3[1];
}
