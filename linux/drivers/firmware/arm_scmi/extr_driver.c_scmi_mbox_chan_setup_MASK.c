
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr {int dummy; } ;
struct scmi_info {int handle; int dev; struct idr rx_idr; struct idr tx_idr; } ;
struct mbox_client {int tx_block; int knows_txdone; int * tx_prepare; int rx_callback; struct device* dev; } ;
struct scmi_chan_info {int * handle; int chan; int payload; struct mbox_client cl; struct device* dev; } ;
struct resource {int start; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (int ,int ,int ) ;
 struct scmi_chan_info* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct idr*,struct scmi_chan_info*,int,int,int ) ;
 struct scmi_chan_info* FUNC_6 (struct idr*,int ) ;
 int FUNC_7 (struct mbox_client*,int) ;
 int FUNC_8 (struct device_node*,int ,struct resource*) ;
 int FUNC_9 (struct device_node*) ;
 struct device_node* FUNC_10 (struct device_node*,char*,int) ;
 int FUNC_11 (struct resource*) ;
 scalar_t__ FUNC_12 (struct device_node*,int) ;
 int VAR_6 ;
 int * VAR_7 ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct scmi_info *VAR_8, struct device *VAR_9,
    int VAR_10, bool VAR_11)
{
 int VAR_12, VAR_13;
 struct resource VAR_14;
 resource_size_t VAR_15;
 struct device_node *VAR_16, *VAR_17 = VAR_9->of_node;
 struct scmi_chan_info *VAR_18;
 struct mbox_client *VAR_19;
 struct idr *VAR_20;
 const char *VAR_21 = VAR_11 ? "Tx" : "Rx";


 VAR_13 = VAR_11 ? 0 : 1;
 VAR_20 = VAR_11 ? &VAR_8->tx_idr : &VAR_8->rx_idr;

 if (FUNC_12(VAR_17, VAR_13)) {
  VAR_18 = FUNC_6(VAR_20, VAR_5);
  if (FUNC_13(!VAR_18))
   return -VAR_1;
  goto idr_alloc;
 }

 VAR_18 = FUNC_4(VAR_8->dev, sizeof(*VAR_18), VAR_4);
 if (!VAR_18)
  return -VAR_2;

 VAR_18->dev = VAR_9;

 VAR_19 = &VAR_18->cl;
 VAR_19->dev = VAR_9;
 VAR_19->rx_callback = VAR_6;
 VAR_19->tx_prepare = VAR_11 ? VAR_7 : ((void*)0);
 VAR_19->tx_block = 0;
 VAR_19->knows_txdone = VAR_11;

 VAR_16 = FUNC_10(VAR_17, "shmem", VAR_13);
 VAR_12 = FUNC_8(VAR_16, 0, &VAR_14);
 FUNC_9(VAR_16);
 if (VAR_12) {
  FUNC_2(VAR_9, "failed to get SCMI %s payload memory\n", VAR_21);
  return VAR_12;
 }

 VAR_15 = FUNC_11(&VAR_14);
 VAR_18->payload = FUNC_3(VAR_8->dev, VAR_14.start, VAR_15);
 if (!VAR_18->payload) {
  FUNC_2(VAR_9, "failed to ioremap SCMI %s payload\n", VAR_21);
  return -VAR_0;
 }

 VAR_18->chan = FUNC_7(VAR_19, VAR_13);
 if (FUNC_0(VAR_18->chan)) {
  VAR_12 = FUNC_1(VAR_18->chan);
  if (VAR_12 != -VAR_3)
   FUNC_2(VAR_9, "failed to request SCMI %s mailbox\n",
    VAR_21);
  return VAR_12;
 }

idr_alloc:
 VAR_12 = FUNC_5(VAR_20, VAR_18, VAR_10, VAR_10 + 1, VAR_4);
 if (VAR_12 != VAR_10) {
  FUNC_2(VAR_9, "unable to allocate SCMI idr slot err %d\n", VAR_12);
  return VAR_12;
 }

 VAR_18->handle = &VAR_8->handle;
 return 0;
}
