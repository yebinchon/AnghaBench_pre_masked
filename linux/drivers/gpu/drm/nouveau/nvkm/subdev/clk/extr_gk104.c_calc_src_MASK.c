
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gk104_clk {int dummy; } ;


 int FUNC_0 (struct gk104_clk*,int,int,int,int*) ;
 int FUNC_1 (struct gk104_clk*,int) ;

__attribute__((used)) static u32
FUNC_2(struct gk104_clk *VAR_0, int VAR_1, u32 VAR_2, u32 *VAR_3, u32 *VAR_4)
{
 u32 VAR_5;


 *VAR_4 = 0x00000000;
 switch (VAR_2) {
 case 27000:
 case 108000:
  *VAR_3 = 0x00000000;
  if (VAR_2 == 108000)
   *VAR_3 |= 0x00030000;
  return VAR_2;
 case 100000:
  *VAR_3 = 0x00000002;
  return VAR_2;
 default:
  *VAR_3 = 0x00000003;
  break;
 }


 VAR_5 = FUNC_1(VAR_0, 0x137160 + (VAR_1 * 4));
 if (VAR_1 < 7)
  VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_5, VAR_2, VAR_4);
 return VAR_5;
}
