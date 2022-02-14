
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_dss_dsi_config {scalar_t__ mode; int lp_clk_max; int lp_clk_min; int pixel_format; } ;
struct omap_dss_device {int dummy; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {int * clkout; } ;
struct dsi_data {scalar_t__ mode; int lock; int vm_timings; TYPE_1__ vm; int output; int user_dispc_cinfo; TYPE_2__ user_dsi_cinfo; int user_lp_cinfo; int pix_fmt; } ;
struct dsi_clk_calc_ctx {int dsi_vm; TYPE_1__ vm; int dispc_cinfo; TYPE_2__ dsi_cinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*) ;
 int VAR_11 ;
 size_t VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (struct dsi_data*,struct omap_dss_dsi_config const*,struct dsi_clk_calc_ctx*) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (struct dsi_data*,TYPE_2__*) ;
 int FUNC_4 (struct dsi_data*,struct omap_dss_dsi_config const*,struct dsi_clk_calc_ctx*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct dsi_data* FUNC_8 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_9(struct omap_dss_device *VAR_14,
  const struct omap_dss_dsi_config *VAR_15)
{
 struct dsi_data *VAR_16 = FUNC_8(VAR_14);
 struct dsi_clk_calc_ctx VAR_17;
 bool VAR_18;
 int VAR_19;

 FUNC_6(&VAR_16->lock);

 VAR_16->pix_fmt = VAR_15->pixel_format;
 VAR_16->mode = VAR_15->mode;

 if (VAR_15->mode == VAR_13)
  VAR_18 = FUNC_4(VAR_16, VAR_15, &VAR_17);
 else
  VAR_18 = FUNC_1(VAR_16, VAR_15, &VAR_17);

 if (!VAR_18) {
  FUNC_0("failed to find suitable DSI clock settings\n");
  VAR_19 = -VAR_11;
  goto err;
 }

 FUNC_3(VAR_16, &VAR_17.dsi_cinfo);

 VAR_19 = FUNC_2(VAR_17.dsi_cinfo.clkout[VAR_12],
  VAR_15->lp_clk_min, VAR_15->lp_clk_max, &VAR_16->user_lp_cinfo);
 if (VAR_19) {
  FUNC_0("failed to find suitable DSI LP clock settings\n");
  goto err;
 }

 VAR_16->user_dsi_cinfo = VAR_17.dsi_cinfo;
 VAR_16->user_dispc_cinfo = VAR_17.dispc_cinfo;

 VAR_16->vm = VAR_17.vm;





 VAR_16->vm.flags &= ~VAR_4;
 VAR_16->vm.flags &= ~VAR_3;
 VAR_16->vm.flags |= VAR_2;
 VAR_16->vm.flags &= ~VAR_10;
 VAR_16->vm.flags |= VAR_9;





 VAR_16->vm.flags &= ~VAR_5;
 VAR_16->vm.flags |= VAR_6;
 VAR_16->vm.flags &= ~VAR_1;
 VAR_16->vm.flags |= VAR_0;
 VAR_16->vm.flags &= ~VAR_8;
 VAR_16->vm.flags |= VAR_7;

 FUNC_5(&VAR_16->output, &VAR_16->vm);

 VAR_16->vm_timings = VAR_17.dsi_vm;

 FUNC_7(&VAR_16->lock);

 return 0;
err:
 FUNC_7(&VAR_16->lock);

 return VAR_19;
}
