
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct dss_device* private; } ;
struct dss_device {TYPE_1__* feat; } ;
struct TYPE_2__ {int* outputs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dss_device*,int ) ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct dss_device*) ;
 int FUNC_2 (struct dss_device*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_9, void *VAR_10)
{
 struct dss_device *VAR_11 = VAR_9->private;



 if (FUNC_1(VAR_11))
  return 0;

 FUNC_0(VAR_9, "%-35s %08x\n", "DSS_REVISION", FUNC_0(VAR_11, VAR_2));
 FUNC_0(VAR_9, "%-35s %08x\n", "DSS_SYSCONFIG", FUNC_0(VAR_11, VAR_5));
 FUNC_0(VAR_9, "%-35s %08x\n", "DSS_SYSSTATUS", FUNC_0(VAR_11, VAR_6));
 FUNC_0(VAR_9, "%-35s %08x\n", "DSS_CONTROL", FUNC_0(VAR_11, VAR_0));

 if (VAR_11->feat->outputs[VAR_7] & VAR_8) {
  FUNC_0(VAR_9, "%-35s %08x\n", "DSS_SDI_CONTROL", FUNC_0(VAR_11, VAR_3));
  FUNC_0(VAR_9, "%-35s %08x\n", "DSS_PLL_CONTROL", FUNC_0(VAR_11, VAR_1));
  FUNC_0(VAR_9, "%-35s %08x\n", "DSS_SDI_STATUS", FUNC_0(VAR_11, VAR_4));
 }

 FUNC_2(VAR_11);

 return 0;
}
