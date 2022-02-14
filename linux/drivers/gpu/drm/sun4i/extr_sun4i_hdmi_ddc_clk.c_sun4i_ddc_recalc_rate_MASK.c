
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct sun4i_ddc {unsigned long pre_div; unsigned long m_offset; int reg; } ;
struct clk_hw {int dummy; } ;


 struct sun4i_ddc* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ,unsigned int*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
         unsigned long VAR_1)
{
 struct sun4i_ddc *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3;
 u8 VAR_4, VAR_5;

 FUNC_1(VAR_2->reg, &VAR_3);
 VAR_4 = (VAR_3 >> 3) & 0xf;
 VAR_5 = VAR_3 & 0x7;

 return (((VAR_1 / VAR_2->pre_div) / 10) >> VAR_5) /
        (VAR_4 + VAR_2->m_offset);
}
