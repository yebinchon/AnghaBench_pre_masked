
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct dispc_device {int dss; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
typedef enum dss_clk_source { ____Placeholder_dss_clk_source } dss_clk_source ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (struct dispc_device*,int,int*,int*) ;
 int FUNC_1 (struct dispc_device*,int) ;
 int FUNC_2 (struct dispc_device*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (struct seq_file*,char*,int ,...) ;

__attribute__((used)) static void FUNC_6(struct dispc_device *VAR_1,
          struct seq_file *VAR_2,
          enum omap_channel VAR_3)
{
 int VAR_4, VAR_5;
 enum dss_clk_source VAR_6;

 FUNC_5(VAR_2, "- %s -\n", VAR_0[VAR_3].name);

 VAR_6 = FUNC_4(VAR_1->dss, VAR_3);

 FUNC_5(VAR_2, "%s clk source = %s\n", VAR_0[VAR_3].name,
  FUNC_3(VAR_6));

 FUNC_0(VAR_1, VAR_3, &VAR_4, &VAR_5);

 FUNC_5(VAR_2, "lck\t\t%-16lulck div\t%u\n",
  FUNC_1(VAR_1, VAR_3), VAR_4);
 FUNC_5(VAR_2, "pck\t\t%-16lupck div\t%u\n",
  FUNC_2(VAR_1, VAR_3), VAR_5);
}
