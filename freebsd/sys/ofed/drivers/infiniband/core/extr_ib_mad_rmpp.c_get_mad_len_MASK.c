
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct opa_rmpp_mad {int dummy; } ;
struct mad_rmpp_recv {scalar_t__ base_version; int seg_num; TYPE_4__* cur_seg_buf; TYPE_3__* agent; } ;
struct TYPE_12__ {int paylen_newwin; } ;
struct TYPE_11__ {int mgmt_class; } ;
struct ib_rmpp_mad {TYPE_6__ rmpp_hdr; TYPE_5__ mad_hdr; } ;
struct TYPE_10__ {scalar_t__ mad; } ;
struct TYPE_9__ {TYPE_2__* qp_info; } ;
struct TYPE_8__ {TYPE_1__* port_priv; } ;
struct TYPE_7__ {int port_num; int device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline int FUNC_3(struct mad_rmpp_recv *VAR_3)
{
 struct ib_rmpp_mad *VAR_4;
 int VAR_5, VAR_6, VAR_7;
 bool VAR_8 = FUNC_2(VAR_3->agent->qp_info->port_priv->device,
        VAR_3->agent->qp_info->port_priv->port_num);

 VAR_4 = (struct ib_rmpp_mad *)VAR_3->cur_seg_buf->mad;

 VAR_5 = FUNC_1(VAR_4->mad_hdr.mgmt_class);
 if (VAR_8 && VAR_3->base_version == VAR_1) {
  VAR_6 = sizeof(struct opa_rmpp_mad) - VAR_5;
  VAR_7 = VAR_2 - FUNC_0(VAR_4->rmpp_hdr.paylen_newwin);
  if (VAR_7 > VAR_2 || VAR_7 < 0)
   VAR_7 = 0;
 } else {
  VAR_6 = sizeof(struct ib_rmpp_mad) - VAR_5;
  VAR_7 = VAR_0 - FUNC_0(VAR_4->rmpp_hdr.paylen_newwin);
  if (VAR_7 > VAR_0 || VAR_7 < 0)
   VAR_7 = 0;
 }

 return VAR_5 + VAR_3->seg_num * VAR_6 - VAR_7;
}
