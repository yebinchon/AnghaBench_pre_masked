
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct regmap*,int,int,int) ;
 int FUNC_3 (struct regmap*,int,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct regmap *VAR_3, int VAR_4, int VAR_5)
{
 u32 VAR_6;
 u16 VAR_7, VAR_8 = 0, VAR_9 = 0;
 u8 VAR_10, VAR_11, VAR_12 = 0;

 VAR_6 = VAR_5;
 VAR_6 /= (1 << 5);

 VAR_8 = FUNC_1(VAR_6) - 1;

 VAR_12 = FUNC_0(VAR_2, (VAR_8 - 7), 0, 7);
 VAR_9 = VAR_5 / (1 << (4 + VAR_12));

 VAR_7 = (VAR_12 << 9) | VAR_9;
 VAR_10 = (VAR_7 >> 8) & VAR_1;
 if (FUNC_2(VAR_3,
    VAR_4 - 1,
    VAR_1,
    VAR_10))
  return -VAR_0;

 VAR_11 = (u8)VAR_7;
 return FUNC_3(VAR_3, VAR_4, VAR_11);
}
