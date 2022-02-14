
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct zynqmp_ipi_mchan {int is_opened; int chan_type; } ;
struct zynqmp_ipi_mbox {TYPE_2__* mchans; } ;
struct mbox_chan {struct zynqmp_ipi_mchan* con_priv; TYPE_1__* mbox; } ;
struct device {int dummy; } ;
struct arm_smccc_res {int a0; } ;
struct TYPE_4__ {int is_opened; } ;
struct TYPE_3__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 struct zynqmp_ipi_mbox* FUNC_1 (struct device*) ;
 int FUNC_2 (struct zynqmp_ipi_mbox*,int ,int ,struct arm_smccc_res*) ;

__attribute__((used)) static int FUNC_3(struct mbox_chan *VAR_3)
{
 struct device *VAR_4 = VAR_3->mbox->dev;
 struct zynqmp_ipi_mbox *VAR_5 = FUNC_1(VAR_4);
 struct zynqmp_ipi_mchan *VAR_6 = VAR_3->con_priv;
 u64 VAR_7;
 struct arm_smccc_res VAR_8;
 int VAR_9 = 0;
 unsigned int VAR_10;

 if (VAR_6->is_opened)
  return 0;


 VAR_10 = (VAR_6->chan_type + 1) % 2;
 if (!VAR_5->mchans[VAR_10].is_opened) {
  VAR_7 = VAR_2;
  FUNC_2(VAR_5, VAR_7, 0, &VAR_8);

  VAR_9 = (int)(VAR_8.a0 & 0xFFFFFFFF);
  if (VAR_9 < 0) {
   FUNC_0(VAR_4, "SMC to open the IPI channel failed.\n");
   return VAR_9;
  }
  VAR_9 = 0;
 }


 if (VAR_6->chan_type == VAR_0) {
  VAR_7 = VAR_1;
  FUNC_2(VAR_5, VAR_7, 0, &VAR_8);
 }
 VAR_6->is_opened = 1;

 return VAR_9;
}
