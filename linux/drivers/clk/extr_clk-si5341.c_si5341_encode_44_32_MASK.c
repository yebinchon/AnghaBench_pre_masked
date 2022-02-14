
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct regmap {int dummy; } ;
typedef int r ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (struct regmap*,unsigned int,int*,int) ;

__attribute__((used)) static int FUNC_4(struct regmap *VAR_0, unsigned int VAR_1,
 u64 VAR_2, u32 VAR_3)
{
 u8 VAR_4[10];


 while (!(VAR_2 & FUNC_1(43)) && !(VAR_3 & FUNC_0(31))) {
  VAR_2 <<= 1;
  VAR_3 <<= 1;
 }


 FUNC_2(VAR_2, VAR_4);
 VAR_4[4] = (VAR_2 >> 32) & 0xff;
 VAR_4[5] = (VAR_2 >> 40) & 0x0f;

 FUNC_2(VAR_3, &VAR_4[6]);


 return FUNC_3(VAR_0, VAR_1, VAR_4, sizeof(VAR_4));
}
