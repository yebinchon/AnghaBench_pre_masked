
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gk20a_pll {int m; } ;
struct gk20a_clk {int parent_rate; TYPE_1__* params; } ;
struct TYPE_2__ {int min_vco; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;

__attribute__((used)) static inline u32
FUNC_1(struct gk20a_clk *VAR_1, struct gk20a_pll *VAR_2)
{
 return FUNC_0(VAR_2->m * VAR_1->params->min_vco,
       VAR_1->parent_rate / VAR_0);
}
