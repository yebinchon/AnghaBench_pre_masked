
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int) ;
 struct clk_hw* FUNC_1 (int *,char const*,char*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static struct clk_hw *FUNC_2(const char *VAR_0, u32 VAR_1)
{
 unsigned int VAR_2, VAR_3;

 if (VAR_1 & FUNC_0(20)) {

  VAR_2 = VAR_3 = 1;
 } else {

  u32 VAR_4 = (VAR_1 >> 5) & 0x3f;
  u32 VAR_5 = (VAR_1 >> 4) & 0x1;
  u32 VAR_6 = VAR_1 & 0xf;

  VAR_2 = (2 - VAR_5) * (VAR_4 + 2);
  VAR_3 = VAR_6 + 1;
 }
 return FUNC_1(((void*)0), VAR_0, "clkin", 0,
   VAR_2, VAR_3);
}
