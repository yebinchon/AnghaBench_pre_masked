
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nokia_modem_device {int nokia_modem_rst_ind_irq; int nokia_modem_rst_ind_tasklet; TYPE_2__* ssi_protocol; TYPE_1__* cmt_speech; struct device* device; } ;
struct hsi_port {int dummy; } ;
struct hsi_client {int rx_cfg; int tx_cfg; } ;
struct hsi_board_info {char* name; int * archdata; int * platform_data; int rx_cfg; int tx_cfg; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,struct nokia_modem_device*) ;
 int FUNC_4 (int *) ;
 struct nokia_modem_device* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int,int ,int,char*,struct nokia_modem_device*) ;
 int FUNC_7 (int) ;
 int VAR_5 ;
 int FUNC_8 (int) ;
 struct hsi_port* FUNC_9 (struct hsi_client*) ;
 void* FUNC_10 (struct hsi_port*,struct hsi_board_info*) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct device_node*,int ) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_16 (int *,int ,unsigned long) ;
 int FUNC_17 (int *) ;
 struct hsi_client* FUNC_18 (struct device*) ;

__attribute__((used)) static int FUNC_19(struct device *VAR_8)
{
 struct device_node *VAR_9;
 struct nokia_modem_device *VAR_10;
 struct hsi_client *VAR_11 = FUNC_18(VAR_8);
 struct hsi_port *VAR_12 = FUNC_9(VAR_11);
 int VAR_13, VAR_14, VAR_15;
 struct hsi_board_info VAR_16;
 struct hsi_board_info VAR_17;

 VAR_9 = VAR_8->of_node;
 if (!VAR_9) {
  FUNC_1(VAR_8, "device tree node not found\n");
  return -VAR_2;
 }

 VAR_10 = FUNC_5(VAR_8, sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return -VAR_1;

 FUNC_3(VAR_8, VAR_10);
 VAR_10->device = VAR_8;

 VAR_13 = FUNC_13(VAR_9, 0);
 if (!VAR_13) {
  FUNC_1(VAR_8, "Invalid rst_ind interrupt (%d)\n", VAR_13);
  return -VAR_0;
 }
 VAR_10->nokia_modem_rst_ind_irq = VAR_13;
 VAR_14 = FUNC_12(VAR_13);

 FUNC_16(&VAR_10->nokia_modem_rst_ind_tasklet,
   VAR_5, (unsigned long)VAR_10);
 VAR_15 = FUNC_6(VAR_8, VAR_13, VAR_6,
    VAR_14, "modem_rst_ind", VAR_10);
 if (VAR_15 < 0) {
  FUNC_1(VAR_8, "Request rst_ind irq(%d) failed (flags %d)\n",
        VAR_13, VAR_14);
  return VAR_15;
 }
 FUNC_8(VAR_13);

 if (VAR_7) {
  VAR_15 = FUNC_14(VAR_8);
  if (VAR_15 < 0) {
   FUNC_1(VAR_8, "Could not probe GPIOs\n");
   goto error1;
  }
 }

 VAR_16.name = "ssi-protocol";
 VAR_16.tx_cfg = VAR_11->tx_cfg;
 VAR_16.rx_cfg = VAR_11->rx_cfg;
 VAR_16.platform_data = ((void*)0);
 VAR_16.archdata = ((void*)0);

 VAR_10->ssi_protocol = FUNC_10(VAR_12, &VAR_16);
 if (!VAR_10->ssi_protocol) {
  FUNC_1(VAR_8, "Could not register ssi-protocol device\n");
  VAR_15 = -VAR_1;
  goto error2;
 }

 VAR_15 = FUNC_4(&VAR_10->ssi_protocol->device);
 if (VAR_15 == 0) {
  FUNC_0(VAR_8, "Missing ssi-protocol driver\n");
  VAR_15 = -VAR_3;
  goto error3;
 } else if (VAR_15 < 0) {
  FUNC_1(VAR_8, "Could not load ssi-protocol driver (%d)\n", VAR_15);
  goto error3;
 }

 VAR_17.name = "cmt-speech";
 VAR_17.tx_cfg = VAR_11->tx_cfg;
 VAR_17.rx_cfg = VAR_11->rx_cfg;
 VAR_17.platform_data = ((void*)0);
 VAR_17.archdata = ((void*)0);

 VAR_10->cmt_speech = FUNC_10(VAR_12, &VAR_17);
 if (!VAR_10->cmt_speech) {
  FUNC_1(VAR_8, "Could not register cmt-speech device\n");
  VAR_15 = -VAR_1;
  goto error3;
 }

 VAR_15 = FUNC_4(&VAR_10->cmt_speech->device);
 if (VAR_15 == 0) {
  FUNC_0(VAR_8, "Missing cmt-speech driver\n");
  VAR_15 = -VAR_3;
  goto error4;
 } else if (VAR_15 < 0) {
  FUNC_1(VAR_8, "Could not load cmt-speech driver (%d)\n", VAR_15);
  goto error4;
 }

 FUNC_2(VAR_8, "Registered Nokia HSI modem\n");

 return 0;

error4:
 FUNC_11(&VAR_10->cmt_speech->device, ((void*)0));
error3:
 FUNC_11(&VAR_10->ssi_protocol->device, ((void*)0));
error2:
 FUNC_15(VAR_8);
error1:
 FUNC_7(VAR_10->nokia_modem_rst_ind_irq);
 FUNC_17(&VAR_10->nokia_modem_rst_ind_tasklet);

 return VAR_15;
}
