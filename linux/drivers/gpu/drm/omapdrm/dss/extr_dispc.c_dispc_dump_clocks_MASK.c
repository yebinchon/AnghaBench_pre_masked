
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;
struct dispc_device {int dss; } ;
typedef enum dss_clk_source { ____Placeholder_dss_clk_source } dss_clk_source ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct dispc_device*,struct seq_file*,int ) ;
 int FUNC_2 (struct dispc_device*) ;
 scalar_t__ FUNC_3 (struct dispc_device*,int ) ;
 int FUNC_4 (struct dispc_device*,int ) ;
 scalar_t__ FUNC_5 (struct dispc_device*) ;
 int FUNC_6 (struct dispc_device*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct seq_file*,char*,...) ;

void FUNC_10(struct dispc_device *VAR_7, struct seq_file *VAR_8)
{
 enum dss_clk_source VAR_9;
 int VAR_10;
 u32 VAR_11;

 if (FUNC_5(VAR_7))
  return;

 FUNC_9(VAR_8, "- DISPC -\n");

 VAR_9 = FUNC_8(VAR_7->dss);
 FUNC_9(VAR_8, "dispc fclk source = %s\n",
   FUNC_7(VAR_9));

 FUNC_9(VAR_8, "fck\t\t%-16lu\n", FUNC_2(VAR_7));

 if (FUNC_3(VAR_7, VAR_1)) {
  FUNC_9(VAR_8, "- DISPC-CORE-CLK -\n");
  VAR_11 = FUNC_4(VAR_7, VAR_0);
  VAR_10 = FUNC_0(VAR_11, 23, 16);

  FUNC_9(VAR_8, "lck\t\t%-16lulck div\t%u\n",
    (FUNC_2(VAR_7)/VAR_10), VAR_10);
 }

 FUNC_1(VAR_7, VAR_8, VAR_4);

 if (FUNC_3(VAR_7, VAR_2))
  FUNC_1(VAR_7, VAR_8, VAR_5);
 if (FUNC_3(VAR_7, VAR_3))
  FUNC_1(VAR_7, VAR_8, VAR_6);

 FUNC_6(VAR_7);
}
