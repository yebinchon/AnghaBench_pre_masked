
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int parent_rate; TYPE_1__* params; } ;
struct gm20b_clk {int safe_fmax_vmin; TYPE_2__ base; } ;
struct gk20a_pll {int m; int n; void* pl; } ;
struct TYPE_3__ {int min_vco; } ;


 void* FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,struct gk20a_pll*) ;

__attribute__((used)) static void
FUNC_2(struct gm20b_clk *VAR_1, struct gk20a_pll *VAR_2)
{
 u32 VAR_3 = FUNC_1(&VAR_1->base, VAR_2) / VAR_0;
 u32 VAR_4 = VAR_1->base.parent_rate / VAR_0;
 u32 VAR_5, VAR_6;


 if (VAR_3 > VAR_1->safe_fmax_vmin)
  VAR_3 = VAR_3 * (100 - 10) / 100;


 VAR_3 *= 2;

 VAR_5 = FUNC_0(VAR_2->m * VAR_1->base.params->min_vco, VAR_4);
 VAR_6 = VAR_2->m * VAR_3 / (VAR_1->base.parent_rate);

 if (VAR_6 < VAR_5) {
  VAR_2->pl = FUNC_0(VAR_5 * VAR_4, VAR_2->m * VAR_3);
  VAR_6 = VAR_5;
 }

 VAR_2->n = VAR_6;
}
