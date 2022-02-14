
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct regmap {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ FUNC_0 (struct regmap*,scalar_t__,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct regmap *VAR_0, u16 VAR_1,
         s32 *VAR_2)
{
 s32 VAR_3;
 unsigned int VAR_4;
 u32 VAR_5;

 VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_4);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_5 = VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_1 + 1, &VAR_4);
 if (VAR_3 < 0)
  return VAR_3;

 *VAR_2 = (VAR_4 << 16) | (VAR_5 & 0xffff);

 return 0;
}
