
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {int dummy; } ;
struct gk20a_pll {int m; int n; int pl; } ;
struct TYPE_3__ {struct nvkm_subdev subdev; } ;
struct gk20a_clk {unsigned long parent_rate; int (* div_to_pl ) (int) ;int (* pl_to_div ) (int) ;TYPE_2__* params; TYPE_1__ base; } ;
struct TYPE_4__ {int max_vco; int min_vco; int max_m; int min_n; int min_pl; int min_m; int min_u; int max_u; int max_n; int max_pl; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct gk20a_clk*,struct gk20a_pll*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct nvkm_subdev*,char*,int,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;

int
FUNC_14(struct gk20a_clk *VAR_1, unsigned long VAR_2,
      struct gk20a_pll *VAR_3)
{
 struct nvkm_subdev *VAR_4 = &VAR_1->base.subdev;
 u32 VAR_5, VAR_6, VAR_7;
 u32 VAR_8, VAR_9;
 u32 VAR_10, VAR_11, VAR_12;
 u32 VAR_13;
 u32 VAR_14, VAR_15;
 u32 VAR_16 = ~0;
 u32 VAR_17;

 VAR_5 = VAR_2 * 2 / VAR_0;
 VAR_6 = VAR_1->parent_rate / VAR_0;

 VAR_13 = VAR_5 + VAR_5 / 50;
 VAR_9 = FUNC_3(VAR_1->params->max_vco, VAR_13);
 VAR_8 = VAR_1->params->min_vco;
 VAR_14 = VAR_1->params->max_m;
 VAR_15 = VAR_1->params->min_n;
 VAR_12 = VAR_1->params->min_pl;


 VAR_11 = (VAR_9 + VAR_13 - 1) / VAR_13;
 VAR_11 = FUNC_4(VAR_11, VAR_1->params->max_pl);
 VAR_11 = FUNC_3(VAR_11, VAR_1->params->min_pl);
 VAR_11 = VAR_1->div_to_pl(VAR_11);


 VAR_10 = VAR_8 / VAR_13;
 VAR_10 = FUNC_4(VAR_10, VAR_1->params->max_pl);
 VAR_10 = FUNC_3(VAR_10, VAR_1->params->min_pl);
 VAR_10 = VAR_1->div_to_pl(VAR_10);

 FUNC_5(VAR_4, "low_PL %d(div%d), high_PL %d(div%d)", VAR_10,
     VAR_1->pl_to_div(VAR_10), VAR_11, VAR_1->pl_to_div(VAR_11));


 for (VAR_17 = VAR_10; VAR_17 <= VAR_11; VAR_17++) {
  u32 VAR_18, VAR_19, VAR_20;

  VAR_13 = VAR_5 * VAR_1->pl_to_div(VAR_17);

  for (VAR_18 = VAR_1->params->min_m; VAR_18 <= VAR_1->params->max_m; VAR_18++) {
   u32 VAR_21 = VAR_6 / VAR_18;

   if (VAR_21 < VAR_1->params->min_u)
    break;
   if (VAR_21 > VAR_1->params->max_u)
    continue;

   VAR_19 = (VAR_13 * VAR_18) / VAR_6;
   VAR_20 = ((VAR_13 * VAR_18) + (VAR_6 - 1)) / VAR_6;

   if (VAR_19 > VAR_1->params->max_n)
    break;

   for (; VAR_19 <= VAR_20; VAR_19++) {
    u32 VAR_22;

    if (VAR_19 < VAR_1->params->min_n)
     continue;
    if (VAR_19 > VAR_1->params->max_n)
     break;

    VAR_22 = VAR_6 * VAR_19 / VAR_18;

    if (VAR_22 >= VAR_8 && VAR_22 <= VAR_9) {
     u32 VAR_23, VAR_24;

     VAR_24 = (VAR_22 + (VAR_1->pl_to_div(VAR_17) / 2))
      / VAR_1->pl_to_div(VAR_17);
     VAR_23 = FUNC_1(VAR_24 - VAR_5);

     if (VAR_23 < VAR_16) {
      VAR_16 = VAR_23;
      VAR_14 = VAR_18;
      VAR_15 = VAR_19;
      VAR_12 = VAR_17;

      if (VAR_16 == 0)
       goto found_match;
     }
    }
   }
  }
 }

found_match:
 FUNC_0(VAR_16 == ~0);

 if (VAR_16 != 0)
  FUNC_5(VAR_4,
      "no best match for target @ %dMHz on gpc_pll",
      VAR_5 / VAR_0);

 VAR_3->m = VAR_14;
 VAR_3->n = VAR_15;
 VAR_3->pl = VAR_12;

 VAR_7 = FUNC_2(VAR_1, VAR_3);

 FUNC_5(VAR_4,
     "actual target freq %d KHz, M %d, N %d, PL %d(div%d)\n",
     VAR_7 / VAR_0, VAR_3->m, VAR_3->n, VAR_3->pl,
     VAR_1->pl_to_div(VAR_3->pl));
 return 0;
}
