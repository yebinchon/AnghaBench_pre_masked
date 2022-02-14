
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_dss_device {int dummy; } ;
struct TYPE_4__ {int dispc_channel; } ;
struct dpi_data {int lock; scalar_t__ vdds_dsi_reg; TYPE_1__* dss; scalar_t__ pll; TYPE_2__ output; } ;
struct TYPE_3__ {int dispc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct dpi_data* FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct omap_dss_device *VAR_1)
{
 struct dpi_data *VAR_2 = FUNC_1(VAR_1);

 FUNC_5(&VAR_2->lock);

 FUNC_2(&VAR_2->output);

 if (VAR_2->pll) {
  FUNC_4(VAR_2->dss, VAR_2->output.dispc_channel,
       VAR_0);
  FUNC_3(VAR_2->pll);
 }

 FUNC_0(VAR_2->dss->dispc);

 if (VAR_2->vdds_dsi_reg)
  FUNC_7(VAR_2->vdds_dsi_reg);

 FUNC_6(&VAR_2->lock);
}
