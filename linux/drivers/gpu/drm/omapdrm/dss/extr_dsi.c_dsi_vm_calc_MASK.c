
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct videomode {scalar_t__ pixelclock; } ;
struct omap_dss_dsi_config {int hs_clk_min; scalar_t__ trans_mode; int hs_clk_max; int pixel_format; struct videomode* vm; } ;
struct TYPE_2__ {int clkin; } ;
struct dsi_data {int num_lanes_used; TYPE_1__ pll; } ;
struct dsi_clk_calc_ctx {TYPE_1__* pll; scalar_t__ req_pck_max; scalar_t__ req_pck_min; scalar_t__ req_pck_nom; struct omap_dss_dsi_config const* config; struct dsi_data* dsi; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,unsigned long,unsigned long,unsigned long,int ,struct dsi_clk_calc_ctx*) ;
 unsigned long FUNC_4 (int,unsigned long) ;
 int FUNC_5 (struct dsi_clk_calc_ctx*,int ,int) ;

__attribute__((used)) static bool FUNC_6(struct dsi_data *VAR_2,
  const struct omap_dss_dsi_config *VAR_3,
  struct dsi_clk_calc_ctx *VAR_4)
{
 const struct videomode *VAR_5 = VAR_3->vm;
 unsigned long VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;
 int VAR_9 = VAR_2->num_lanes_used - 1;
 int VAR_10 = FUNC_2(VAR_3->pixel_format);
 unsigned long VAR_11;

 VAR_6 = FUNC_0(VAR_2->pll.clkin);

 FUNC_5(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->dsi = VAR_2;
 VAR_4->pll = &VAR_2->pll;
 VAR_4->config = VAR_3;


 VAR_4->req_pck_min = VAR_5->pixelclock - 1000;
 VAR_4->req_pck_nom = VAR_5->pixelclock;
 VAR_4->req_pck_max = VAR_5->pixelclock + 1000;

 VAR_11 = FUNC_1((u64)VAR_4->req_pck_min * VAR_10, VAR_9 * 8);
 VAR_7 = FUNC_4(VAR_3->hs_clk_min * 4, VAR_11 * 4 * 4);

 if (VAR_3->trans_mode == VAR_0) {
  VAR_8 = VAR_3->hs_clk_max * 4;
 } else {
  unsigned long VAR_12;
  VAR_12 = FUNC_1((u64)VAR_4->req_pck_max * VAR_10,
    VAR_9 * 8);

  VAR_8 = VAR_12 * 4 * 4;
 }

 return FUNC_3(VAR_4->pll, VAR_6,
   VAR_7, VAR_8,
   VAR_1, VAR_4);
}
