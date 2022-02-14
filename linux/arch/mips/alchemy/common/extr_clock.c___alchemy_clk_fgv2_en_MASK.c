
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alchemy_fgcs_clk {int shift; int parent; int isen; int reg; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_2(struct alchemy_fgcs_clk *VAR_0)
{
 unsigned long VAR_1 = FUNC_0(VAR_0->reg);

 VAR_1 &= ~(3 << VAR_0->shift);
 VAR_1 |= (VAR_0->parent & 3) << VAR_0->shift;
 FUNC_1(VAR_1, VAR_0->reg);
 VAR_0->isen = 1;
}
