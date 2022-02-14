
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ mad; } ;
struct ib_mad_send_wr_private {TYPE_1__ send_buf; } ;
struct TYPE_8__ {TYPE_3__* mad; } ;
struct ib_mad_recv_wc {TYPE_4__ recv_buf; } ;
struct ib_mad_hdr {scalar_t__ mgmt_class; } ;
struct TYPE_6__ {scalar_t__ mgmt_class; } ;
struct TYPE_7__ {TYPE_2__ mad_hdr; } ;



__attribute__((used)) static inline int FUNC_0(const struct ib_mad_send_wr_private *VAR_0,
         const struct ib_mad_recv_wc *VAR_1)
{
 return ((struct ib_mad_hdr *)(VAR_0->send_buf.mad))->mgmt_class ==
  VAR_1->recv_buf.mad->mad_hdr.mgmt_class;
}
