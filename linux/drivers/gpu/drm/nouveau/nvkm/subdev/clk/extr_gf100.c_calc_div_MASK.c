
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gf100_clk {int dummy; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static u32
FUNC_1(struct gf100_clk *VAR_0, int VAR_1, u32 VAR_2, u32 VAR_3, u32 *VAR_4)
{
 u32 VAR_5 = FUNC_0((VAR_2 * 2) / VAR_3, (u32)65);
 if (VAR_5 < 2)
  VAR_5 = 2;

 *VAR_4 = VAR_5 - 2;
 return (VAR_2 * 2) / VAR_5;
}
