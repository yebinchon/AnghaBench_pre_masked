
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_plt {int lock; int reg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct clk_plt *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_0->lock, VAR_4);

 VAR_3 = FUNC_0(VAR_0->reg);
 VAR_3 = (VAR_3 & ~VAR_1) | (VAR_2 & VAR_1);
 FUNC_3(VAR_3, VAR_0->reg);

 FUNC_2(&VAR_0->lock, VAR_4);
}
