
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct zynqmp_ipi_pdata {int num_mboxes; struct zynqmp_ipi_mbox* ipi_mboxes; } ;
struct zynqmp_ipi_message {int len; int data; } ;
struct zynqmp_ipi_mchan {int req_buf; int req_buf_size; struct zynqmp_ipi_message* rx_buf; scalar_t__ is_opened; } ;
struct TYPE_2__ {struct mbox_chan* chans; } ;
struct zynqmp_ipi_mbox {TYPE_1__ mbox; struct zynqmp_ipi_mchan* mchans; } ;
struct mbox_chan {int dummy; } ;
struct arm_smccc_res {int a0; } ;
typedef int irqreturn_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mbox_chan*,void*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct zynqmp_ipi_mbox*,int ,int ,struct arm_smccc_res*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 struct zynqmp_ipi_pdata *VAR_8 = VAR_7;
 struct mbox_chan *VAR_9;
 struct zynqmp_ipi_mbox *VAR_10;
 struct zynqmp_ipi_mchan *VAR_11;
 struct zynqmp_ipi_message *VAR_12;
 u64 VAR_13, VAR_14;
 struct arm_smccc_res VAR_15;
 int VAR_16, VAR_17;

 (void)VAR_6;
 VAR_13 = VAR_5;
 VAR_14 = VAR_2;
 for (VAR_17 = 0; VAR_17 < VAR_8->num_mboxes; VAR_17++) {
  VAR_10 = &VAR_8->ipi_mboxes[VAR_17];
  VAR_11 = &VAR_10->mchans[VAR_0];
  VAR_9 = &VAR_10->mbox.chans[VAR_0];
  FUNC_2(VAR_10, VAR_13, VAR_14, &VAR_15);
  VAR_16 = (int)(VAR_15.a0 & 0xFFFFFFFF);
  if (VAR_16 > 0 && VAR_16 & VAR_1) {
   if (VAR_11->is_opened) {
    VAR_12 = VAR_11->rx_buf;
    VAR_12->len = VAR_11->req_buf_size;
    FUNC_1(VAR_12->data, VAR_11->req_buf,
           VAR_12->len);
    FUNC_0(VAR_9, (void *)VAR_12);
    return VAR_3;
   }
  }
 }
 return VAR_4;
}
