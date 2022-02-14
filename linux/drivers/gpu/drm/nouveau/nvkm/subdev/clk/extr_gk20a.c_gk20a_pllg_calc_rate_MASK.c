
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gk20a_pll {int n; int m; int pl; } ;
struct gk20a_clk {int parent_rate; int (* pl_to_div ) (int ) ;} ;


 int FUNC_0 (int ) ;

u32
FUNC_1(struct gk20a_clk *VAR_0, struct gk20a_pll *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3;

 VAR_2 = VAR_0->parent_rate * VAR_1->n;
 VAR_3 = VAR_1->m * VAR_0->pl_to_div(VAR_1->pl);

 return VAR_2 / VAR_3 / 2;
}
