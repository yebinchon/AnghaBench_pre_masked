
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct zynqmp_ipi_mchan {scalar_t__ chan_type; } ;
struct zynqmp_ipi_mbox {int dummy; } ;
struct mbox_chan {struct zynqmp_ipi_mchan* con_priv; TYPE_1__* mbox; } ;
struct device {int dummy; } ;
struct arm_smccc_res {int a0; } ;
struct TYPE_2__ {struct device* dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*) ;
 struct zynqmp_ipi_mbox* FUNC_2 (struct device*) ;
 int FUNC_3 (struct zynqmp_ipi_mbox*,int ,int ,struct arm_smccc_res*) ;

__attribute__((used)) static bool FUNC_4(struct mbox_chan *VAR_3)
{
 struct device *VAR_4 = VAR_3->mbox->dev;
 struct zynqmp_ipi_mbox *VAR_5 = FUNC_2(VAR_4);
 struct zynqmp_ipi_mchan *VAR_6 = VAR_3->con_priv;
 int VAR_7;
 u64 VAR_8;
 struct arm_smccc_res VAR_9;

 if (FUNC_0(!VAR_5)) {
  FUNC_1(VAR_4, "no platform drv data??\n");
  return 0;
 }

 if (VAR_6->chan_type == VAR_0) {



  VAR_8 = VAR_2;
  FUNC_3(VAR_5, VAR_8, 0, &VAR_9);

  VAR_7 = (int)(VAR_9.a0 & 0xFFFFFFFF);
  if (VAR_7 < 0 || VAR_7 & VAR_1)
   return 0;
  return 1;
 }

 return 1;
}
