
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u8 ;
struct regmap {int dummy; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 long FUNC_0 (long,int,int) ;
 int FUNC_1 (struct regmap*,int ,long) ;

__attribute__((used)) static int FUNC_2(struct regmap *VAR_2, int VAR_3, long VAR_4)
{
 int VAR_5;
 u8 VAR_6;
 u8 VAR_7;

 VAR_4 = FUNC_0(VAR_4, -127825, 127825);

 VAR_4 /= 125;
 VAR_6 = VAR_4 >> 3;
 VAR_7 = (VAR_4 & 0x07) << 5;

 VAR_5 = FUNC_1(VAR_2, VAR_1[VAR_3], VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_1(VAR_2, VAR_0[VAR_3], VAR_7);
}
