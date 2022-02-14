
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct dss_device {int dss_clk; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct dss_device*) ;
 int FUNC_3 (struct dss_device*) ;
 int FUNC_4 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_5(struct dss_device *VAR_1, struct seq_file *VAR_2)
{
 const char *VAR_3;
 unsigned long VAR_4;

 if (FUNC_2(VAR_1))
  return;

 FUNC_4(VAR_2, "- DSS -\n");

 VAR_3 = FUNC_1(VAR_0);
 VAR_4 = FUNC_0(VAR_1->dss_clk);

 FUNC_4(VAR_2, "%s = %lu\n",
   VAR_3,
   VAR_4);

 FUNC_3(VAR_1);
}
