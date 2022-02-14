
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct regmap {int dummy; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct regmap*,unsigned int,int*,int) ;

__attribute__((used)) static int FUNC_2(struct regmap *VAR_0, unsigned int VAR_1,
 u64 *VAR_2, u32 *VAR_3)
{
 int VAR_4;
 u8 VAR_5[10];

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_5, 10);
 if (VAR_4 < 0)
  return VAR_4;

 *VAR_2 = ((u64)((VAR_5[5] & 0x0f) << 8 | VAR_5[4]) << 32) |
   (FUNC_0(VAR_5));
 *VAR_3 = FUNC_0(&VAR_5[6]);

 return 0;
}
