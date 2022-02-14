
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct regmap*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct regmap *VAR_4,
  u16 VAR_5, u16 VAR_6, u8 VAR_7)
{
 int VAR_8;


 VAR_8 = FUNC_0(VAR_4, VAR_6,
   VAR_7, VAR_7);
 if (VAR_8)
  return VAR_8;


 return FUNC_0(VAR_4, VAR_5,
  VAR_1 | VAR_3,
  VAR_0 | VAR_2);
}
