
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zynqmp_ipi_message {int dummy; } ;
struct zynqmp_ipi_mchan {int req_buf_size; int resp_buf_size; size_t chan_type; void* rx_buf; void* resp_buf; void* req_buf; } ;
struct mbox_controller {int num_chans; int txdone_irq; int txdone_poll; int txpoll_period; struct mbox_chan* chans; int of_xlate; int * ops; struct device* dev; } ;
struct device {int * driver; int * release; struct device_node* of_node; struct device* parent; } ;
struct zynqmp_ipi_mbox {struct zynqmp_ipi_mchan* mchans; struct mbox_controller mbox; int remote_id; struct device dev; TYPE_1__* pdata; } ;
struct resource {int start; } ;
struct mbox_chan {struct zynqmp_ipi_mchan* con_priv; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,struct zynqmp_ipi_mbox*) ;
 int FUNC_5 (struct device*,char*,int ) ;
 int FUNC_6 (struct device*) ;
 void* FUNC_7 (struct device*,int ,int) ;
 void* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,struct mbox_controller*) ;
 int FUNC_10 (struct device_node*) ;
 int FUNC_11 (struct device_node*,char*,int *) ;
 void* FUNC_12 (struct resource*) ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (struct device_node*,char const*,struct resource*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_14(struct zynqmp_ipi_mbox *VAR_9,
     struct device_node *VAR_10)
{
 struct zynqmp_ipi_mchan *VAR_11;
 struct mbox_chan *VAR_12;
 struct mbox_controller *VAR_13;
 struct resource VAR_14;
 struct device *VAR_15, *VAR_16;
 const char *VAR_17;
 int VAR_18;

 VAR_15 = VAR_9->pdata->dev;

 VAR_9->dev.parent = VAR_15;
 VAR_9->dev.release = ((void*)0);
 VAR_9->dev.of_node = VAR_10;
 FUNC_5(&VAR_9->dev, "%s", FUNC_10(VAR_10));
 FUNC_4(&VAR_9->dev, VAR_9);
 VAR_9->dev.release = VAR_6;
 VAR_9->dev.driver = &VAR_7;
 VAR_18 = FUNC_6(&VAR_9->dev);
 if (VAR_18) {
  FUNC_2(VAR_15, "Failed to register ipi mbox dev.\n");
  return VAR_18;
 }
 VAR_16 = &VAR_9->dev;

 VAR_11 = &VAR_9->mchans[VAR_4];
 VAR_17 = "local_request_region";
 VAR_18 = FUNC_13(VAR_10, VAR_17, &VAR_14);
 if (!VAR_18) {
  VAR_11->req_buf_size = FUNC_12(&VAR_14);
  VAR_11->req_buf = FUNC_7(VAR_16, VAR_14.start,
           VAR_11->req_buf_size);
  if (FUNC_0(VAR_11->req_buf)) {
   FUNC_2(VAR_16, "Unable to map IPI buffer I/O memory\n");
   VAR_18 = FUNC_1(VAR_11->req_buf);
   return VAR_18;
  }
 } else if (VAR_18 != -VAR_0) {
  FUNC_2(VAR_16, "Unmatched resource %s, %d.\n", VAR_17, VAR_18);
  return VAR_18;
 }

 VAR_17 = "remote_response_region";
 VAR_18 = FUNC_13(VAR_10, VAR_17, &VAR_14);
 if (!VAR_18) {
  VAR_11->resp_buf_size = FUNC_12(&VAR_14);
  VAR_11->resp_buf = FUNC_7(VAR_16, VAR_14.start,
            VAR_11->resp_buf_size);
  if (FUNC_0(VAR_11->resp_buf)) {
   FUNC_2(VAR_16, "Unable to map IPI buffer I/O memory\n");
   VAR_18 = FUNC_1(VAR_11->resp_buf);
   return VAR_18;
  }
 } else if (VAR_18 != -VAR_0) {
  FUNC_2(VAR_16, "Unmatched resource %s.\n", VAR_17);
  return VAR_18;
 }
 VAR_11->rx_buf = FUNC_8(VAR_16,
         VAR_11->resp_buf_size +
         sizeof(struct zynqmp_ipi_message),
         VAR_2);
 if (!VAR_11->rx_buf)
  return -VAR_1;

 VAR_11 = &VAR_9->mchans[VAR_3];
 VAR_17 = "remote_request_region";
 VAR_18 = FUNC_13(VAR_10, VAR_17, &VAR_14);
 if (!VAR_18) {
  VAR_11->req_buf_size = FUNC_12(&VAR_14);
  VAR_11->req_buf = FUNC_7(VAR_16, VAR_14.start,
           VAR_11->req_buf_size);
  if (FUNC_0(VAR_11->req_buf)) {
   FUNC_2(VAR_16, "Unable to map IPI buffer I/O memory\n");
   VAR_18 = FUNC_1(VAR_11->req_buf);
   return VAR_18;
  }
 } else if (VAR_18 != -VAR_0) {
  FUNC_2(VAR_16, "Unmatched resource %s.\n", VAR_17);
  return VAR_18;
 }

 VAR_17 = "local_response_region";
 VAR_18 = FUNC_13(VAR_10, VAR_17, &VAR_14);
 if (!VAR_18) {
  VAR_11->resp_buf_size = FUNC_12(&VAR_14);
  VAR_11->resp_buf = FUNC_7(VAR_16, VAR_14.start,
            VAR_11->resp_buf_size);
  if (FUNC_0(VAR_11->resp_buf)) {
   FUNC_2(VAR_16, "Unable to map IPI buffer I/O memory\n");
   VAR_18 = FUNC_1(VAR_11->resp_buf);
   return VAR_18;
  }
 } else if (VAR_18 != -VAR_0) {
  FUNC_2(VAR_16, "Unmatched resource %s.\n", VAR_17);
  return VAR_18;
 }
 VAR_11->rx_buf = FUNC_8(VAR_16,
         VAR_11->resp_buf_size +
         sizeof(struct zynqmp_ipi_message),
         VAR_2);
 if (!VAR_11->rx_buf)
  return -VAR_1;


 VAR_18 = FUNC_11(VAR_10, "xlnx,ipi-id", &VAR_9->remote_id);
 if (VAR_18 < 0) {
  FUNC_2(VAR_15, "No IPI remote ID is specified.\n");
  return VAR_18;
 }

 VAR_13 = &VAR_9->mbox;
 VAR_13->dev = VAR_16;
 VAR_13->ops = &VAR_5;
 VAR_13->num_chans = 2;
 VAR_13->txdone_irq = 0;
 VAR_13->txdone_poll = 1;
 VAR_13->txpoll_period = 5;
 VAR_13->of_xlate = VAR_8;
 VAR_12 = FUNC_8(VAR_16, 2 * sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;
 VAR_13->chans = VAR_12;
 VAR_12[VAR_4].con_priv = &VAR_9->mchans[VAR_4];
 VAR_12[VAR_3].con_priv = &VAR_9->mchans[VAR_3];
 VAR_9->mchans[VAR_4].chan_type = VAR_4;
 VAR_9->mchans[VAR_3].chan_type = VAR_3;
 VAR_18 = FUNC_9(VAR_16, VAR_13);
 if (VAR_18)
  FUNC_2(VAR_16,
   "Failed to register mbox_controller(%d)\n", VAR_18);
 else
  FUNC_3(VAR_16,
    "Registered ZynqMP IPI mbox with TX/RX channels.\n");
 return VAR_18;
}
