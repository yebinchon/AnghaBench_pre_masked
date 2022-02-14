
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 struct clk_hw* FUNC_0 (int *,char const*,char*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static struct clk_hw *FUNC_1(const char *VAR_1, u32 VAR_2)
{
 unsigned int VAR_3, VAR_4;

 if (VAR_2 & VAR_0) {

  VAR_3 = VAR_4 = 1;
 } else {

  u32 VAR_5 = (VAR_2 >> 5) & 0x3f;
  u32 VAR_6 = (VAR_2 >> 4) & 0x1;
  u32 VAR_7 = VAR_2 & 0xf;

  VAR_3 = (2 - VAR_6) * (VAR_5 + 2);
  VAR_4 = VAR_7 + 1;
 }
 return FUNC_0(((void*)0), VAR_1, "clkin", 0,
   VAR_3, VAR_4);
}
