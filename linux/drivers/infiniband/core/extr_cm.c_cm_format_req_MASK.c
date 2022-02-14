
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {int dlid; int slid; } ;
struct TYPE_19__ {void* interface_id; } ;
struct TYPE_20__ {TYPE_8__ global; } ;
struct TYPE_17__ {void* interface_id; } ;
struct TYPE_18__ {TYPE_6__ global; } ;
struct sa_path_rec {scalar_t__ rec_type; int hop_limit; int packet_life_time; int sl; int traffic_class; int rate; int flow_label; TYPE_10__ opa; TYPE_9__ dgid; TYPE_7__ sgid; int mtu; int pkey; } ;
struct ib_cm_req_param {scalar_t__ qp_type; scalar_t__ private_data_len; scalar_t__ private_data; int srq; int rnr_retry_count; int retry_count; int responder_resources; int max_cm_retries; struct sa_path_rec* primary_path; int local_cm_response_timeout; int starting_psn; int flow_control; int remote_cm_response_timeout; int initiator_depth; int qp_num; int service_id; struct sa_path_rec* alternate_path; } ;
struct cm_req_msg {int primary_hop_limit; int alt_hop_limit; int private_data; int alt_traffic_class; void* alt_remote_lid; void* alt_local_lid; TYPE_9__ alt_remote_gid; TYPE_7__ alt_local_gid; int primary_traffic_class; void* primary_remote_lid; void* primary_local_lid; TYPE_9__ primary_remote_gid; TYPE_7__ primary_local_gid; int pkey; int local_ca_guid; int service_id; int local_comm_id; int hdr; } ;
struct TYPE_16__ {TYPE_4__* port; } ;
struct TYPE_13__ {TYPE_1__* device; int local_id; } ;
struct cm_id_private {TYPE_5__ av; TYPE_2__ id; } ;
struct TYPE_15__ {TYPE_3__* cm_dev; } ;
struct TYPE_14__ {int ack_delay; } ;
struct TYPE_12__ {int node_guid; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct cm_id_private*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct cm_req_msg*,int ) ;
 int FUNC_6 (struct cm_req_msg*,int ) ;
 int FUNC_7 (struct cm_req_msg*,int ) ;
 int FUNC_8 (struct cm_req_msg*,int ) ;
 int FUNC_9 (struct cm_req_msg*,int) ;
 int FUNC_10 (struct cm_req_msg*,int ) ;
 int FUNC_11 (struct cm_req_msg*,int ) ;
 int FUNC_12 (struct cm_req_msg*,int ) ;
 int FUNC_13 (struct cm_req_msg*,int ) ;
 int FUNC_14 (struct cm_req_msg*,int ) ;
 int FUNC_15 (struct cm_req_msg*,int ) ;
 int FUNC_16 (struct cm_req_msg*,int ) ;
 int FUNC_17 (struct cm_req_msg*,int ) ;
 int FUNC_18 (struct cm_req_msg*,int ) ;
 int FUNC_19 (struct cm_req_msg*,int ) ;
 int FUNC_20 (struct cm_req_msg*,int) ;
 int FUNC_21 (struct cm_req_msg*,scalar_t__) ;
 int FUNC_22 (struct cm_req_msg*,int ) ;
 int FUNC_23 (struct cm_req_msg*,int ) ;
 int FUNC_24 (struct cm_req_msg*,int ) ;
 int FUNC_25 (struct cm_req_msg*,int ) ;
 int FUNC_26 (struct cm_req_msg*,int ) ;
 int FUNC_27 (struct cm_req_msg*,int ) ;
 int FUNC_28 (int ) ;
 void* FUNC_29 (int ) ;
 int FUNC_30 (int ,scalar_t__,scalar_t__) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int ,int ) ;
 int FUNC_33 (struct sa_path_rec*) ;
 int FUNC_34 (struct sa_path_rec*) ;

__attribute__((used)) static void FUNC_35(struct cm_req_msg *VAR_4,
     struct cm_id_private *VAR_5,
     struct ib_cm_req_param *VAR_6)
{
 struct sa_path_rec *VAR_7 = VAR_6->primary_path;
 struct sa_path_rec *VAR_8 = VAR_6->alternate_path;
 bool VAR_9 = 0;

 if (VAR_7->rec_type == VAR_3)
  VAR_9 = FUNC_32(VAR_7->opa.dlid,
           VAR_7->opa.slid);

 FUNC_4(&VAR_4->hdr, VAR_0,
     FUNC_3(VAR_5));

 VAR_4->local_comm_id = VAR_5->id.local_id;
 VAR_4->service_id = VAR_6->service_id;
 VAR_4->local_ca_guid = VAR_5->id.device->node_guid;
 FUNC_12(VAR_4, FUNC_28(VAR_6->qp_num));
 FUNC_11(VAR_4, VAR_6->initiator_depth);
 FUNC_22(VAR_4,
           VAR_6->remote_cm_response_timeout);
 FUNC_21(VAR_4, VAR_6->qp_type);
 FUNC_10(VAR_4, VAR_6->flow_control);
 FUNC_27(VAR_4, FUNC_28(VAR_6->starting_psn));
 FUNC_13(VAR_4,
          VAR_6->local_cm_response_timeout);
 VAR_4->pkey = VAR_6->primary_path->pkey;
 FUNC_15(VAR_4, VAR_6->primary_path->mtu);
 FUNC_14(VAR_4, VAR_6->max_cm_retries);

 if (VAR_6->qp_type != VAR_2) {
  FUNC_23(VAR_4, VAR_6->responder_resources);
  FUNC_24(VAR_4, VAR_6->retry_count);
  FUNC_25(VAR_4, VAR_6->rnr_retry_count);
  FUNC_26(VAR_4, VAR_6->srq);
 }

 VAR_4->primary_local_gid = VAR_7->sgid;
 VAR_4->primary_remote_gid = VAR_7->dgid;
 if (VAR_9) {
  VAR_4->primary_local_gid.global.interface_id
   = FUNC_0(FUNC_1(VAR_7->opa.slid));
  VAR_4->primary_remote_gid.global.interface_id
   = FUNC_0(FUNC_1(VAR_7->opa.dlid));
 }
 if (VAR_7->hop_limit <= 1) {
  VAR_4->primary_local_lid = VAR_9 ? 0 :
   FUNC_29(FUNC_31(FUNC_34(VAR_7)));
  VAR_4->primary_remote_lid = VAR_9 ? 0 :
   FUNC_29(FUNC_31(FUNC_33(VAR_7)));
 } else {

  VAR_4->primary_local_lid = VAR_1;
  VAR_4->primary_remote_lid = VAR_1;
 }
 FUNC_16(VAR_4, VAR_7->flow_label);
 FUNC_18(VAR_4, VAR_7->rate);
 VAR_4->primary_traffic_class = VAR_7->traffic_class;
 VAR_4->primary_hop_limit = VAR_7->hop_limit;
 FUNC_19(VAR_4, VAR_7->sl);
 FUNC_20(VAR_4, (VAR_7->hop_limit <= 1));
 FUNC_17(VAR_4,
  FUNC_2(VAR_5->av.port->cm_dev->ack_delay,
          VAR_7->packet_life_time));

 if (VAR_8) {
  bool VAR_10 = 0;

  if (VAR_8->rec_type == VAR_3)
   VAR_10 = FUNC_32(VAR_8->opa.dlid,
            VAR_8->opa.slid);

  VAR_4->alt_local_gid = VAR_8->sgid;
  VAR_4->alt_remote_gid = VAR_8->dgid;
  if (VAR_10) {
   VAR_4->alt_local_gid.global.interface_id
    = FUNC_0(FUNC_1(VAR_8->opa.slid));
   VAR_4->alt_remote_gid.global.interface_id
    = FUNC_0(FUNC_1(VAR_8->opa.dlid));
  }
  if (VAR_8->hop_limit <= 1) {
   VAR_4->alt_local_lid = VAR_10 ? 0 :
    FUNC_29(FUNC_31(FUNC_34(VAR_8)));
   VAR_4->alt_remote_lid = VAR_10 ? 0 :
    FUNC_29(FUNC_31(FUNC_33(VAR_8)));
  } else {
   VAR_4->alt_local_lid = VAR_1;
   VAR_4->alt_remote_lid = VAR_1;
  }
  FUNC_5(VAR_4,
       VAR_8->flow_label);
  FUNC_7(VAR_4, VAR_8->rate);
  VAR_4->alt_traffic_class = VAR_8->traffic_class;
  VAR_4->alt_hop_limit = VAR_8->hop_limit;
  FUNC_8(VAR_4, VAR_8->sl);
  FUNC_9(VAR_4, (VAR_8->hop_limit <= 1));
  FUNC_6(VAR_4,
   FUNC_2(VAR_5->av.port->cm_dev->ack_delay,
           VAR_8->packet_life_time));
 }

 if (VAR_6->private_data && VAR_6->private_data_len)
  FUNC_30(VAR_4->private_data, VAR_6->private_data,
         VAR_6->private_data_len);
}
