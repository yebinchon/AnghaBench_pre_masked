
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvkm_clk {int dummy; } ;
struct gk20a_pll {int dummy; } ;
struct TYPE_3__ {struct gk20a_pll pll; int base; } ;
struct TYPE_4__ {int dfs_coeff; int dfs_ext_cal; } ;
struct gm20b_clk {scalar_t__ uv; scalar_t__ new_uv; scalar_t__ safe_fmax_vmin; TYPE_1__ base; struct gk20a_pll new_pll; TYPE_2__ new_dvfs; TYPE_2__ dvfs; } ;


 struct gm20b_clk* FUNC_0 (struct nvkm_clk*) ;
 int FUNC_1 (struct gm20b_clk*,struct gk20a_pll*) ;
 int FUNC_2 (struct gm20b_clk*,int ) ;
 int FUNC_3 (struct gm20b_clk*,TYPE_2__*) ;
 int FUNC_4 (struct gm20b_clk*,int ) ;
 int FUNC_5 (struct gm20b_clk*,struct gk20a_pll*) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(struct nvkm_clk *VAR_1)
{
 struct gm20b_clk *VAR_2 = FUNC_0(VAR_1);
 u32 VAR_3;
 int VAR_4;


 if (VAR_2->uv == VAR_2->new_uv)
  goto prog;
 VAR_3 = FUNC_6(&VAR_2->base.base, VAR_0);
 if (VAR_3 > VAR_2->safe_fmax_vmin) {
  struct gk20a_pll VAR_5;

  if (VAR_2->uv < VAR_2->new_uv)

   VAR_5 = VAR_2->base.pll;
  else

   VAR_5 = VAR_2->new_pll;

  FUNC_1(VAR_2, &VAR_5);
  VAR_4 = FUNC_5(VAR_2, &VAR_5);
  if (VAR_4)
   return VAR_4;
 }







 FUNC_2(VAR_2, 0);
 FUNC_4(VAR_2, VAR_2->new_dvfs.dfs_ext_cal);
 FUNC_2(VAR_2, VAR_2->new_dvfs.dfs_coeff);
 FUNC_3(VAR_2, &VAR_2->new_dvfs);

prog:
 VAR_2->uv = VAR_2->new_uv;
 VAR_2->dvfs = VAR_2->new_dvfs;
 VAR_2->base.pll = VAR_2->new_pll;

 return FUNC_5(VAR_2, &VAR_2->base.pll);
}
