
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct clk {int clk_rst; int enable_val; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct clk *VAR_0)
{
 uint32_t VAR_1;

 VAR_1 = FUNC_0(VAR_0->clk_rst);
 VAR_1 |= VAR_0->enable_val;
 FUNC_1(VAR_1, VAR_0->clk_rst);
}
