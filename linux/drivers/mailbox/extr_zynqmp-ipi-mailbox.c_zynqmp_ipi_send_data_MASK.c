
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct zynqmp_ipi_message {scalar_t__ len; int data; } ;
struct zynqmp_ipi_mchan {scalar_t__ chan_type; scalar_t__ req_buf_size; scalar_t__ resp_buf_size; int resp_buf; int req_buf; } ;
struct zynqmp_ipi_mbox {int dummy; } ;
struct mbox_chan {struct zynqmp_ipi_mchan* con_priv; TYPE_1__* mbox; } ;
struct device {int dummy; } ;
struct arm_smccc_res {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,...) ;
 struct zynqmp_ipi_mbox* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (struct zynqmp_ipi_mbox*,int ,int ,struct arm_smccc_res*) ;

__attribute__((used)) static int FUNC_5(struct mbox_chan *VAR_5, void *VAR_6)
{
 struct device *VAR_7 = VAR_5->mbox->dev;
 struct zynqmp_ipi_mbox *VAR_8 = FUNC_2(VAR_7);
 struct zynqmp_ipi_mchan *VAR_9 = VAR_5->con_priv;
 struct zynqmp_ipi_message *VAR_10 = VAR_6;
 u64 VAR_11;
 struct arm_smccc_res VAR_12;

 if (FUNC_0(!VAR_8)) {
  FUNC_1(VAR_7, "no platform drv data??\n");
  return -VAR_0;
 }

 if (VAR_9->chan_type == VAR_1) {

  if (VAR_10 && VAR_10->len > VAR_9->req_buf_size) {
   FUNC_1(VAR_7, "channel %d message length %u > max %lu\n",
    VAR_9->chan_type, (unsigned int)VAR_10->len,
    VAR_9->req_buf_size);
   return -VAR_0;
  }
  if (VAR_10 && VAR_10->len)
   FUNC_3(VAR_9->req_buf, VAR_10->data, VAR_10->len);

  VAR_11 = VAR_4;
  FUNC_4(VAR_8, VAR_11, 0, &VAR_12);
 } else {

  if (VAR_10 && VAR_10->len > VAR_9->resp_buf_size) {
   FUNC_1(VAR_7, "channel %d message length %u > max %lu\n",
    VAR_9->chan_type, (unsigned int)VAR_10->len,
    VAR_9->resp_buf_size);
   return -VAR_0;
  }
  if (VAR_10 && VAR_10->len)
   FUNC_3(VAR_9->resp_buf, VAR_10->data, VAR_10->len);
  VAR_11 = VAR_3;
  FUNC_4(VAR_8, VAR_11, VAR_2,
       &VAR_12);
 }
 return 0;
}
