
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct zynqmp_ipi_mchan {unsigned int chan_type; scalar_t__ is_opened; } ;
struct zynqmp_ipi_mbox {TYPE_1__* mchans; } ;
struct mbox_chan {struct zynqmp_ipi_mchan* con_priv; TYPE_2__* mbox; } ;
struct device {int dummy; } ;
struct arm_smccc_res {int dummy; } ;
struct TYPE_4__ {struct device* dev; } ;
struct TYPE_3__ {int is_opened; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct zynqmp_ipi_mbox* FUNC_0 (struct device*) ;
 int FUNC_1 (struct zynqmp_ipi_mbox*,int ,int ,struct arm_smccc_res*) ;

__attribute__((used)) static void FUNC_2(struct mbox_chan *VAR_3)
{
 struct device *VAR_4 = VAR_3->mbox->dev;
 struct zynqmp_ipi_mbox *VAR_5 = FUNC_0(VAR_4);
 struct zynqmp_ipi_mchan *VAR_6 = VAR_3->con_priv;
 u64 VAR_7;
 struct arm_smccc_res VAR_8;
 unsigned int VAR_9;

 if (!VAR_6->is_opened)
  return;


 VAR_9 = VAR_6->chan_type;
 if (VAR_9 == VAR_0) {
  VAR_7 = VAR_1;
  FUNC_1(VAR_5, VAR_7, 0, &VAR_8);
 }

 VAR_9 = (VAR_9 + 1) % 2;
 if (!VAR_5->mchans[VAR_9].is_opened) {
  VAR_7 = VAR_2;
  FUNC_1(VAR_5, VAR_7, 0, &VAR_8);
 }

 VAR_6->is_opened = 0;
}
