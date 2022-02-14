
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rdma_ah_attr {int dummy; } ;
struct TYPE_6__ {int grh_present; void* flow_label; int gid; int traffic_class; int hop_limit; int gid_index; int pkey_index; int path_bits; int sl; void* lid; void* qpn; scalar_t__ length; scalar_t__ status; } ;
struct TYPE_7__ {TYPE_2__ hdr; } ;
struct ib_umad_packet {TYPE_3__ mad; struct ib_mad_recv_wc* recv_wc; scalar_t__ length; } ;
struct ib_umad_file {int dummy; } ;
struct ib_mad_send_buf {int dummy; } ;
struct TYPE_5__ {int grh; } ;
struct ib_mad_recv_wc {TYPE_1__ recv_buf; TYPE_4__* wc; scalar_t__ mad_len; } ;
struct ib_mad_agent {int port_num; int device; struct ib_umad_file* context; } ;
struct ib_global_route {int flow_label; int dgid; int traffic_class; int hop_limit; int sgid_index; } ;
struct TYPE_8__ {scalar_t__ status; int slid; int wc_flags; int pkey_index; int dlid_path_bits; int sl; int src_qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ib_umad_file*) ;
 int FUNC_2 (struct ib_mad_recv_wc*) ;
 int FUNC_3 (int ,int ,TYPE_4__*,int ,struct rdma_ah_attr*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct ib_umad_packet*) ;
 struct ib_umad_packet* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int *,int) ;
 scalar_t__ FUNC_8 (struct ib_umad_file*,struct ib_mad_agent*,struct ib_umad_packet*) ;
 struct ib_global_route* FUNC_9 (struct rdma_ah_attr*) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (struct rdma_ah_attr*) ;

__attribute__((used)) static void FUNC_12(struct ib_mad_agent *VAR_3,
    struct ib_mad_send_buf *VAR_4,
    struct ib_mad_recv_wc *VAR_5)
{
 struct ib_umad_file *VAR_6 = VAR_3->context;
 struct ib_umad_packet *VAR_7;

 if (VAR_5->wc->status != VAR_2)
  goto err1;

 VAR_7 = FUNC_6(sizeof *VAR_7, VAR_0);
 if (!VAR_7)
  goto err1;

 VAR_7->length = VAR_5->mad_len;
 VAR_7->recv_wc = VAR_5;

 VAR_7->mad.hdr.status = 0;
 VAR_7->mad.hdr.length = FUNC_1(VAR_6) + VAR_5->mad_len;
 VAR_7->mad.hdr.qpn = FUNC_0(VAR_5->wc->src_qp);




 if (FUNC_10(VAR_3->device, VAR_3->port_num))
  VAR_7->mad.hdr.lid = FUNC_4(0xFFFF &
        VAR_5->wc->slid);
 else
  VAR_7->mad.hdr.lid = FUNC_4(VAR_5->wc->slid);
 VAR_7->mad.hdr.sl = VAR_5->wc->sl;
 VAR_7->mad.hdr.path_bits = VAR_5->wc->dlid_path_bits;
 VAR_7->mad.hdr.pkey_index = VAR_5->wc->pkey_index;
 VAR_7->mad.hdr.grh_present = !!(VAR_5->wc->wc_flags & VAR_1);
 if (VAR_7->mad.hdr.grh_present) {
  struct rdma_ah_attr VAR_8;
  const struct ib_global_route *VAR_9;
  int VAR_10;

  VAR_10 = FUNC_3(VAR_3->device, VAR_3->port_num,
           VAR_5->wc,
           VAR_5->recv_buf.grh,
           &VAR_8);
  if (VAR_10)
   goto err2;

  VAR_9 = FUNC_9(&VAR_8);
  VAR_7->mad.hdr.gid_index = VAR_9->sgid_index;
  VAR_7->mad.hdr.hop_limit = VAR_9->hop_limit;
  VAR_7->mad.hdr.traffic_class = VAR_9->traffic_class;
  FUNC_7(VAR_7->mad.hdr.gid, &VAR_9->dgid, 16);
  VAR_7->mad.hdr.flow_label = FUNC_0(VAR_9->flow_label);
  FUNC_11(&VAR_8);
 }

 if (FUNC_8(VAR_6, VAR_3, VAR_7))
  goto err2;
 return;

err2:
 FUNC_5(VAR_7);
err1:
 FUNC_2(VAR_5);
}
