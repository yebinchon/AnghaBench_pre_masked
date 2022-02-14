
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int dispc_channel; } ;
struct dispc_clock_info {int dummy; } ;
struct TYPE_7__ {struct dispc_clock_info clock_info; } ;
struct sdi_device {int vdds_sdi_reg; TYPE_2__* dss; TYPE_6__ output; int datapairs; TYPE_1__ mgr_config; int pixelclock; } ;
struct omap_dss_device {int dummy; } ;
struct TYPE_8__ {int dispc; } ;


 int FUNC_0 (int ,int ,struct dispc_clock_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,unsigned long) ;
 struct sdi_device* FUNC_8 (struct omap_dss_device*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct sdi_device*,int ,unsigned long*,struct dispc_clock_info*) ;
 int FUNC_13 (struct sdi_device*) ;

__attribute__((used)) static void FUNC_14(struct omap_dss_device *VAR_0)
{
 struct sdi_device *VAR_1 = FUNC_8(VAR_0);
 struct dispc_clock_info VAR_2;
 unsigned long VAR_3;
 int VAR_4;

 VAR_4 = FUNC_11(VAR_1->vdds_sdi_reg);
 if (VAR_4)
  return;

 VAR_4 = FUNC_1(VAR_1->dss->dispc);
 if (VAR_4)
  goto err_get_dispc;

 VAR_4 = FUNC_12(VAR_1, VAR_1->pixelclock, &VAR_3, &VAR_2);
 if (VAR_4)
  goto err_calc_clock_div;

 VAR_1->mgr_config.clock_info = VAR_2;

 VAR_4 = FUNC_7(VAR_1->dss, VAR_3);
 if (VAR_4)
  goto err_set_dss_clock_div;

 FUNC_13(VAR_1);
 FUNC_0(VAR_1->dss->dispc, VAR_1->output.dispc_channel,
    &VAR_1->mgr_config.clock_info);

 FUNC_6(VAR_1->dss, VAR_1->datapairs);
 VAR_4 = FUNC_5(VAR_1->dss);
 if (VAR_4)
  goto err_sdi_enable;
 FUNC_9(2);

 VAR_4 = FUNC_3(&VAR_1->output);
 if (VAR_4)
  goto err_mgr_enable;

 return;

err_mgr_enable:
 FUNC_4(VAR_1->dss);
err_sdi_enable:
err_set_dss_clock_div:
err_calc_clock_div:
 FUNC_2(VAR_1->dss->dispc);
err_get_dispc:
 FUNC_10(VAR_1->vdds_sdi_reg);
}
