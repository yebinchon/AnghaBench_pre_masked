
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regmap {int dummy; } ;


 int FUNC_0 (struct regmap*,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct regmap *VAR_0, int VAR_1,
  int VAR_2, bool VAR_3)
{
 u8 VAR_4, VAR_5 = VAR_2;

 if (VAR_3)
  VAR_4 = 0xFF;
 else
  VAR_4 = 0x0;

 return FUNC_0(VAR_0, VAR_1, VAR_5, VAR_4);
}
