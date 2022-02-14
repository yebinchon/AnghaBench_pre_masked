
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pic32_periph_clk {int ctrl_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct pic32_periph_clk *VAR_2)
{
 return ((FUNC_0(VAR_2->ctrl_reg) >> VAR_1) & VAR_0) + 1;
}
