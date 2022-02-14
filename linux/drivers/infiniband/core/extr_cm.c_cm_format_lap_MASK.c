
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_15__ {int dlid; int slid; } ;
struct TYPE_13__ {void* interface_id; } ;
struct TYPE_14__ {TYPE_4__ global; } ;
struct TYPE_11__ {void* interface_id; } ;
struct TYPE_12__ {TYPE_2__ global; } ;
struct sa_path_rec {scalar_t__ rec_type; int packet_life_time; int sl; int rate; int hop_limit; int traffic_class; int flow_label; TYPE_6__ opa; TYPE_5__ dgid; TYPE_3__ sgid; } ;
struct cm_lap_msg {int private_data; int alt_hop_limit; TYPE_5__ alt_remote_gid; TYPE_3__ alt_local_gid; void* alt_remote_lid; void* alt_local_lid; int remote_comm_id; int local_comm_id; int hdr; } ;
struct TYPE_18__ {TYPE_8__* port; } ;
struct TYPE_10__ {int remote_id; int local_id; } ;
struct cm_id_private {TYPE_9__ av; int remote_qpn; TYPE_1__ id; } ;
struct TYPE_17__ {TYPE_7__* cm_dev; } ;
struct TYPE_16__ {int ack_delay; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct cm_id_private*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct cm_lap_msg*,int ) ;
 int FUNC_6 (struct cm_lap_msg*,int ) ;
 int FUNC_7 (struct cm_lap_msg*,int ) ;
 int FUNC_8 (struct cm_lap_msg*,int ) ;
 int FUNC_9 (struct cm_lap_msg*,int) ;
 int FUNC_10 (struct cm_lap_msg*,int ) ;
 int FUNC_11 (struct cm_lap_msg*,int) ;
 int FUNC_12 (struct cm_lap_msg*,int ) ;
 void* FUNC_13 (int ) ;
 int FUNC_14 (int ,void const*,scalar_t__) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (struct sa_path_rec*) ;
 int FUNC_18 (struct sa_path_rec*) ;

__attribute__((used)) static void FUNC_19(struct cm_lap_msg *VAR_2,
     struct cm_id_private *VAR_3,
     struct sa_path_rec *VAR_4,
     const void *VAR_5,
     u8 VAR_6)
{
 bool VAR_7 = 0;

 if (VAR_4->rec_type == VAR_1)
  VAR_7 = FUNC_16(VAR_4->opa.dlid,
           VAR_4->opa.slid);
 FUNC_4(&VAR_2->hdr, VAR_0,
     FUNC_3(VAR_3));
 VAR_2->local_comm_id = VAR_3->id.local_id;
 VAR_2->remote_comm_id = VAR_3->id.remote_id;
 FUNC_8(VAR_2, VAR_3->remote_qpn);

 FUNC_9(VAR_2, 0x1F);
 VAR_2->alt_local_lid =
  FUNC_13(FUNC_15(FUNC_18(VAR_4)));
 VAR_2->alt_remote_lid =
  FUNC_13(FUNC_15(FUNC_17(VAR_4)));
 VAR_2->alt_local_gid = VAR_4->sgid;
 VAR_2->alt_remote_gid = VAR_4->dgid;
 if (VAR_7) {
  VAR_2->alt_local_gid.global.interface_id
   = FUNC_0(FUNC_1(VAR_4->opa.slid));
  VAR_2->alt_remote_gid.global.interface_id
   = FUNC_0(FUNC_1(VAR_4->opa.dlid));
 }
 FUNC_5(VAR_2, VAR_4->flow_label);
 FUNC_12(VAR_2, VAR_4->traffic_class);
 VAR_2->alt_hop_limit = VAR_4->hop_limit;
 FUNC_7(VAR_2, VAR_4->rate);
 FUNC_10(VAR_2, VAR_4->sl);
 FUNC_11(VAR_2, 1);
 FUNC_6(VAR_2,
  FUNC_2(VAR_3->av.port->cm_dev->ack_delay,
          VAR_4->packet_life_time));

 if (VAR_5 && VAR_6)
  FUNC_14(VAR_2->private_data, VAR_5, VAR_6);
}
