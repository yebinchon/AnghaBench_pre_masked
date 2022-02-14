
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dss_device {int dummy; } ;
struct TYPE_2__ {void* clks; void* irqs; void* regs; } ;
struct dsi_data {int module_id; TYPE_1__ debugfs; int line_buffer_size; struct dss_device* dss; } ;
struct device {int dummy; } ;
typedef int name ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct device*,char*,int ,int ) ;
 struct dsi_data* FUNC_2 (struct device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct dsi_data*) ;
 int FUNC_4 (struct dss_device*,struct dsi_data*) ;
 int FUNC_5 (struct dsi_data*,int ) ;
 int FUNC_6 (struct dsi_data*) ;
 int FUNC_7 (struct dsi_data*) ;
 void* FUNC_8 (struct dss_device*,char*,int ,struct dsi_data*) ;
 struct dss_device* FUNC_9 (struct device*) ;
 int FUNC_10 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_4, struct device *VAR_5, void *VAR_6)
{
 struct dss_device *VAR_7 = FUNC_9(VAR_5);
 struct dsi_data *VAR_8 = FUNC_2(VAR_4);
 char VAR_9[10];
 u32 VAR_10;
 int VAR_11;

 VAR_8->dss = VAR_7;

 FUNC_4(VAR_7, VAR_8);

 VAR_11 = FUNC_6(VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_10 = FUNC_5(VAR_8, VAR_0);
 FUNC_1(VAR_4, "OMAP DSI rev %d.%d\n",
        FUNC_0(VAR_10, 7, 4), FUNC_0(VAR_10, 3, 0));

 VAR_8->line_buffer_size = FUNC_3(VAR_8);

 FUNC_7(VAR_8);

 FUNC_10(VAR_9, sizeof(VAR_9), "dsi%u_regs", VAR_8->module_id + 1);
 VAR_8->debugfs.regs = FUNC_8(VAR_7, VAR_9,
          VAR_3, VAR_8);





 FUNC_10(VAR_9, sizeof(VAR_9), "dsi%u_clks", VAR_8->module_id + 1);
 VAR_8->debugfs.clks = FUNC_8(VAR_7, VAR_9,
          VAR_1, VAR_8);

 return 0;
}
