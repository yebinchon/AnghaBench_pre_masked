
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct intel_hdcp_shim {int (* read_2_2_msg ) (struct intel_digital_port*,int ,struct hdcp2_rep_send_receiverid_list*,int) ;int (* write_2_2_msg ) (struct intel_digital_port*,struct hdcp2_rep_send_ack*,int) ;} ;
struct intel_hdcp {scalar_t__ seq_num_v; struct intel_hdcp_shim* shim; } ;
struct intel_digital_port {int dummy; } ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_connector {TYPE_1__ base; struct intel_hdcp hdcp; } ;
struct hdcp2_rep_send_receiverid_list {int receiver_ids; scalar_t__ seq_num_v; int * rx_info; } ;
struct hdcp2_rep_send_ack {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_2 ;
 struct intel_digital_port* FUNC_6 (struct intel_connector*) ;
 scalar_t__ FUNC_7 (int const*) ;
 scalar_t__ FUNC_8 (struct drm_device*,int ,scalar_t__) ;
 int FUNC_9 (struct intel_connector*,struct hdcp2_rep_send_receiverid_list*,struct hdcp2_rep_send_ack*) ;
 int FUNC_10 (struct intel_digital_port*,int ,struct hdcp2_rep_send_receiverid_list*,int) ;
 int FUNC_11 (struct intel_digital_port*,struct hdcp2_rep_send_ack*,int) ;

__attribute__((used)) static
int FUNC_12(struct intel_connector *VAR_3)
{
 struct intel_digital_port *VAR_4 = FUNC_6(VAR_3);
 struct intel_hdcp *VAR_5 = &VAR_3->hdcp;
 struct drm_device *VAR_6 = VAR_3->base.dev;
 union {
  struct hdcp2_rep_send_receiverid_list recvid_list;
  struct hdcp2_rep_send_ack rep_ack;
 } VAR_7;
 const struct intel_hdcp_shim *VAR_8 = VAR_5->shim;
 u32 VAR_9, VAR_10;
 u8 *VAR_11;
 int VAR_12;

 VAR_12 = VAR_8->read_2_2_msg(VAR_4, VAR_2,
     &VAR_7.recvid_list, sizeof(VAR_7.recvid_list));
 if (VAR_12 < 0)
  return VAR_12;

 VAR_11 = VAR_7.recvid_list.rx_info;

 if (FUNC_4(VAR_11[1]) ||
     FUNC_5(VAR_11[1])) {
  FUNC_0("Topology Max Size Exceeded\n");
  return -VAR_0;
 }


 VAR_9 =
  FUNC_7((const u8 *)VAR_7.recvid_list.seq_num_v);

 if (VAR_9 < VAR_5->seq_num_v) {

  FUNC_0("Seq_num_v roll over.\n");
  return -VAR_0;
 }

 VAR_10 = (FUNC_2(VAR_11[0]) << 4 |
        FUNC_3(VAR_11[1]));
 if (FUNC_8(VAR_6, VAR_7.recvid_list.receiver_ids,
     VAR_10)) {
  FUNC_1("Revoked receiver ID(s) is in list\n");
  return -VAR_1;
 }

 VAR_12 = FUNC_9(VAR_3,
          &VAR_7.recvid_list,
          &VAR_7.rep_ack);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_5->seq_num_v = VAR_9;
 VAR_12 = VAR_8->write_2_2_msg(VAR_4, &VAR_7.rep_ack,
      sizeof(VAR_7.rep_ack));
 if (VAR_12 < 0)
  return VAR_12;

 return 0;
}
