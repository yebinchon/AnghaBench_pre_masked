
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ishtp_msg_hdr {int dummy; } ;
struct ishtp_fw_client {int props; int client_id; } ;
struct TYPE_2__ {int minor_version; int major_version; } ;
struct ishtp_device {void* hbm_state; size_t fw_client_presentation_num; int ishtp_host_dma_enabled; int devc; int ishtp_host_dma_tx_buf; int dev_state; int fw_client_index; int fw_clients_map; int ishtp_host_dma_rx_buf_phys; int ishtp_host_dma_rx_buf_size; int ishtp_host_dma_rx_buf; struct ishtp_fw_client* fw_clients; int wait_hbm_recvd_msg; TYPE_1__ version; } ;
struct ishtp_bus_message {int hbm_cmd; } ;
struct hbm_props_response {int client_properties; int address; int status; } ;
struct hbm_host_version_response {TYPE_1__ fw_max_version; int host_version_supported; } ;
struct hbm_host_enum_response {int valid_addresses; } ;
struct hbm_client_connect_response {int dummy; } ;
struct hbm_client_connect_request {int dummy; } ;
struct dma_xfer_hbm {int dummy; } ;
struct dma_alloc_notify {int buf_address; int buf_size; int hbm; } ;
typedef int dma_alloc_notify ;





 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ishtp_device*) ;
 int FUNC_4 (struct ishtp_device*) ;
 int FUNC_5 (struct ishtp_device*,struct hbm_client_connect_response*) ;
 int FUNC_6 (struct ishtp_device*,struct hbm_client_connect_response*) ;
 int FUNC_7 (struct ishtp_device*,struct dma_xfer_hbm*) ;
 int FUNC_8 (struct ishtp_device*,struct dma_xfer_hbm*) ;
 int FUNC_9 (struct ishtp_device*) ;
 int FUNC_10 (struct ishtp_device*) ;
 int FUNC_11 (struct ishtp_device*,struct hbm_client_connect_request*) ;
 int FUNC_12 (struct ishtp_msg_hdr*,size_t const) ;
 int FUNC_13 (struct ishtp_device*) ;
 int FUNC_14 (struct ishtp_device*) ;
 int FUNC_15 () ;
 int FUNC_16 (struct ishtp_device*,struct ishtp_msg_hdr*,unsigned char*) ;
 int FUNC_17 (int ,int ,int) ;
 int FUNC_18 (struct dma_alloc_notify*,int ,int) ;
 int FUNC_19 (int *) ;

void FUNC_20(struct ishtp_device *VAR_11,
   struct ishtp_bus_message *VAR_12)
{
 struct ishtp_bus_message *VAR_13;
 struct ishtp_fw_client *VAR_14;
 struct hbm_host_version_response *VAR_15;
 struct hbm_client_connect_response *VAR_16;
 struct hbm_client_connect_response *VAR_17;
 struct hbm_client_connect_request *VAR_18;
 struct hbm_props_response *VAR_19;
 struct hbm_host_enum_response *VAR_20;
 struct ishtp_msg_hdr VAR_21;
 struct dma_alloc_notify VAR_22;
 struct dma_xfer_hbm *VAR_23;

 VAR_13 = VAR_12;

 switch (VAR_13->hbm_cmd) {
 case 129:
  VAR_15 = (struct hbm_host_version_response *)VAR_13;
  if (!VAR_15->host_version_supported) {
   VAR_11->version = VAR_15->fw_max_version;

   VAR_11->hbm_state = VAR_10;
   FUNC_14(VAR_11);
   return;
  }

  VAR_11->version.major_version = VAR_1;
  VAR_11->version.minor_version = VAR_2;
  if (VAR_11->dev_state == VAR_5 &&
    VAR_11->hbm_state == VAR_8) {
   VAR_11->hbm_state = VAR_9;
   FUNC_9(VAR_11);
  } else {
   FUNC_1(VAR_11->devc,
    "reset: wrong host start response\n");

   FUNC_3(VAR_11);
   return;
  }

  FUNC_19(&VAR_11->wait_hbm_recvd_msg);
  break;

 case 138:
  VAR_16 = (struct hbm_client_connect_response *)VAR_13;
  FUNC_5(VAR_11, VAR_16);
  break;

 case 136:
  VAR_17 =
   (struct hbm_client_connect_response *)VAR_13;
  FUNC_6(VAR_11, VAR_17);
  break;

 case 131:
  VAR_19 = (struct hbm_props_response *)VAR_13;
  VAR_14 = &VAR_11->fw_clients[VAR_11->fw_client_presentation_num];

  if (VAR_19->status || !VAR_11->fw_clients) {
   FUNC_1(VAR_11->devc,
   "reset: properties response hbm wrong status\n");
   FUNC_3(VAR_11);
   return;
  }

  if (VAR_14->client_id != VAR_19->address) {
   FUNC_1(VAR_11->devc,
    "reset: host properties response address mismatch [%02X %02X]\n",
    VAR_14->client_id, VAR_19->address);
   FUNC_3(VAR_11);
   return;
  }

  if (VAR_11->dev_state != VAR_5 ||
   VAR_11->hbm_state != VAR_6) {
   FUNC_1(VAR_11->devc,
    "reset: unexpected properties response\n");
   FUNC_3(VAR_11);
   return;
  }

  VAR_14->props = VAR_19->client_properties;
  VAR_11->fw_client_index++;
  VAR_11->fw_client_presentation_num++;


  FUNC_13(VAR_11);

  if (VAR_11->dev_state != VAR_4)
   break;

  if (!FUNC_15())
   break;

  FUNC_0(VAR_11->devc, "Requesting to use DMA\n");
  FUNC_4(VAR_11);
  if (VAR_11->ishtp_host_dma_rx_buf) {
   const size_t VAR_24 = sizeof(VAR_22);

   FUNC_18(&VAR_22, 0, sizeof(VAR_22));
   VAR_22.hbm = VAR_0;
   VAR_22.buf_size =
     VAR_11->ishtp_host_dma_rx_buf_size;
   VAR_22.buf_address =
     VAR_11->ishtp_host_dma_rx_buf_phys;
   FUNC_12(&VAR_21, VAR_24);
   FUNC_16(VAR_11, &VAR_21,
    (unsigned char *)&VAR_22);
  }

  break;

 case 130:
  VAR_20 = (struct hbm_host_enum_response *) VAR_13;
  FUNC_17(VAR_11->fw_clients_map, VAR_20->valid_addresses, 32);
  if (VAR_11->dev_state == VAR_5 &&
   VAR_11->hbm_state == VAR_7) {
   VAR_11->fw_client_presentation_num = 0;
   VAR_11->fw_client_index = 0;

   FUNC_10(VAR_11);
   VAR_11->hbm_state = VAR_6;


   FUNC_13(VAR_11);
  } else {
   FUNC_1(VAR_11->devc,
         "reset: unexpected enumeration response hbm\n");
   FUNC_3(VAR_11);
   return;
  }
  break;

 case 128:
  if (VAR_11->hbm_state != VAR_10)
   FUNC_1(VAR_11->devc, "unexpected stop response\n");

  VAR_11->dev_state = VAR_3;
  FUNC_2(VAR_11->devc, "reset: FW stop response\n");
  FUNC_3(VAR_11);
  break;

 case 137:

  VAR_18 =
   (struct hbm_client_connect_request *)VAR_13;
  FUNC_11(VAR_11, VAR_18);
  break;

 case 132:
  VAR_11->hbm_state = VAR_10;
  break;

 case 135:
  VAR_11->ishtp_host_dma_enabled = 1;
  break;

 case 134:
  VAR_23 = (struct dma_xfer_hbm *)VAR_13;
  if (!VAR_11->ishtp_host_dma_enabled) {
   FUNC_1(VAR_11->devc,
    "DMA XFER requested but DMA is not enabled\n");
   break;
  }
  FUNC_7(VAR_11, VAR_23);
  break;

 case 133:
  VAR_23 = (struct dma_xfer_hbm *)VAR_13;
  if (!VAR_11->ishtp_host_dma_enabled ||
      !VAR_11->ishtp_host_dma_tx_buf) {
   FUNC_1(VAR_11->devc,
    "DMA XFER acked but DMA Tx is not enabled\n");
   break;
  }
  FUNC_8(VAR_11, VAR_23);
  break;

 default:
  FUNC_1(VAR_11->devc, "unknown HBM: %u\n",
   (unsigned int)VAR_13->hbm_cmd);

  break;
 }
}
