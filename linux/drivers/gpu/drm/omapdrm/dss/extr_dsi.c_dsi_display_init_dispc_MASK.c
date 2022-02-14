
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dispc_channel; } ;
struct TYPE_6__ {int stallmode; int fifohandcheck; scalar_t__ lcden_sig_polarity; int video_port_width; int io_pad_mode; } ;
struct dsi_data {scalar_t__ module_id; scalar_t__ mode; int dss; TYPE_1__ output; TYPE_3__ mgr_config; int pix_fmt; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct dsi_data*) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,struct dsi_data*) ;
 int FUNC_4 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*,int ,struct dsi_data*) ;
 int FUNC_6 (int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct dsi_data *VAR_6)
{
 enum omap_channel VAR_7 = VAR_6->output.dispc_channel;
 int VAR_8;

 FUNC_6(VAR_6->dss, VAR_7, VAR_6->module_id == 0 ?
   VAR_1 :
   VAR_2);

 if (VAR_6->mode == VAR_4) {
  VAR_8 = FUNC_3(&VAR_6->output,
    VAR_5, VAR_6);
  if (VAR_8) {
   FUNC_0("can't register FRAMEDONE handler\n");
   goto err;
  }

  VAR_6->mgr_config.stallmode = 1;
  VAR_6->mgr_config.fifohandcheck = 1;
 } else {
  VAR_6->mgr_config.stallmode = 0;
  VAR_6->mgr_config.fifohandcheck = 0;
 }

 VAR_8 = FUNC_1(VAR_6);
 if (VAR_8)
  goto err1;

 VAR_6->mgr_config.io_pad_mode = VAR_3;
 VAR_6->mgr_config.video_port_width =
   FUNC_2(VAR_6->pix_fmt);
 VAR_6->mgr_config.lcden_sig_polarity = 0;

 FUNC_4(&VAR_6->output, &VAR_6->mgr_config);

 return 0;
err1:
 if (VAR_6->mode == VAR_4)
  FUNC_5(&VAR_6->output,
    VAR_5, VAR_6);
err:
 FUNC_6(VAR_6->dss, VAR_7, VAR_0);
 return VAR_8;
}
