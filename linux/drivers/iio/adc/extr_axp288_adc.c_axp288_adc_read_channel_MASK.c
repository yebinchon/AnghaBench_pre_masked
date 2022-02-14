
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regmap*,unsigned long,int*,int) ;

__attribute__((used)) static int FUNC_1(int *VAR_2, unsigned long VAR_3,
    struct regmap *VAR_4)
{
 u8 VAR_5[2];

 if (FUNC_0(VAR_4, VAR_3, VAR_5, 2))
  return -VAR_0;
 *VAR_2 = (VAR_5[0] << 4) + ((VAR_5[1] >> 4) & 0x0F);

 return VAR_1;
}
