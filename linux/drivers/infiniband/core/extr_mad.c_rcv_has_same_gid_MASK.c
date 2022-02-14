
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


union ib_gid {int raw; } ;
typedef scalar_t__ u8 ;
struct rdma_ah_attr {int dummy; } ;
struct TYPE_12__ {int ah; scalar_t__ mad; } ;
struct ib_mad_send_wr_private {TYPE_3__ send_buf; } ;
struct TYPE_18__ {TYPE_8__* grh; TYPE_2__* mad; } ;
struct ib_mad_recv_wc {TYPE_9__ recv_buf; TYPE_5__* wc; } ;
struct ib_mad_hdr {int dummy; } ;
struct TYPE_10__ {scalar_t__ port_num; struct ib_device* device; } ;
struct ib_mad_agent_private {TYPE_1__ agent; } ;
struct TYPE_15__ {int raw; } ;
struct ib_global_route {TYPE_6__ dgid; int sgid_index; } ;
struct ib_device {int dummy; } ;
struct TYPE_16__ {int raw; } ;
struct TYPE_13__ {int raw; } ;
struct TYPE_17__ {TYPE_7__ sgid; TYPE_4__ dgid; } ;
struct TYPE_14__ {int wc_flags; int dlid_path_bits; scalar_t__ slid; } ;
struct TYPE_11__ {struct ib_mad_hdr mad_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ib_device*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct ib_mad_hdr*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct rdma_ah_attr*) ;
 scalar_t__ FUNC_4 (struct rdma_ah_attr*) ;
 int FUNC_5 (struct rdma_ah_attr*) ;
 struct ib_global_route* FUNC_6 (struct rdma_ah_attr*) ;
 scalar_t__ FUNC_7 (int ,struct rdma_ah_attr*) ;
 scalar_t__ FUNC_8 (struct ib_device*,scalar_t__,int ,union ib_gid*) ;

__attribute__((used)) static inline int FUNC_9(const struct ib_mad_agent_private *VAR_2,
       const struct ib_mad_send_wr_private *VAR_3,
       const struct ib_mad_recv_wc *VAR_4 )
{
 struct rdma_ah_attr VAR_5;
 u8 VAR_6, VAR_7;
 union ib_gid VAR_8;
 struct ib_device *VAR_9 = VAR_2->agent.device;
 u8 VAR_10 = VAR_2->agent.port_num;
 u8 VAR_11;
 bool VAR_12;

 VAR_6 = FUNC_1((struct ib_mad_hdr *)VAR_3->send_buf.mad);
 VAR_7 = FUNC_1(&VAR_4->recv_buf.mad->mad_hdr);

 if (VAR_6 == VAR_7)

  return 0;

 if (FUNC_7(VAR_3->send_buf.ah, &VAR_5))

  return 0;

 VAR_12 = !!(FUNC_3(&VAR_5) & VAR_0);
 if (VAR_12 != !!(VAR_4->wc->wc_flags & VAR_1))

  return 0;

 if (!VAR_6 && VAR_7) {

  if (!VAR_12) {
   if (FUNC_0(VAR_9, VAR_10, &VAR_11))
    return 0;
   return (!VAR_11 || !((FUNC_5(&VAR_5) ^
        VAR_4->wc->dlid_path_bits) &
       ((1 << VAR_11) - 1)));
  } else {
   const struct ib_global_route *VAR_13 =
     FUNC_6(&VAR_5);

   if (FUNC_8(VAR_9, VAR_10,
        VAR_13->sgid_index, &VAR_8))
    return 0;
   return !FUNC_2(VAR_8.raw, VAR_4->recv_buf.grh->dgid.raw,
           16);
  }
 }

 if (!VAR_12)
  return FUNC_4(&VAR_5) == VAR_4->wc->slid;
 else
  return !FUNC_2(FUNC_6(&VAR_5)->dgid.raw,
          VAR_4->recv_buf.grh->sgid.raw,
          16);
}
