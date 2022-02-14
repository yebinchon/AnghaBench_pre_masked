
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dispc_channel; } ;
struct dsi_data {scalar_t__ mode; int dss; TYPE_1__ output; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,struct dsi_data*) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static void FUNC_2(struct dsi_data *VAR_3)
{
 enum omap_channel VAR_4 = VAR_3->output.dispc_channel;

 if (VAR_3->mode == VAR_1)
  FUNC_0(&VAR_3->output,
    VAR_2, VAR_3);

 FUNC_1(VAR_3->dss, VAR_4, VAR_0);
}
