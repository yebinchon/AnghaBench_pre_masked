
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct opa_smp {int dummy; } ;
struct opa_mad {int dummy; } ;
struct ib_wc {int dummy; } ;
struct ib_mad_qp_info {TYPE_3__* qp; } ;
struct TYPE_12__ {int byte_len; } ;
struct TYPE_9__ {int * grh; struct opa_mad* opa_mad; } ;
struct TYPE_10__ {TYPE_1__ recv_buf; TYPE_4__* wc; } ;
struct TYPE_13__ {TYPE_4__ wc; TYPE_2__ recv_wc; } ;
struct ib_mad_private {TYPE_5__ header; int grh; scalar_t__ mad; } ;
struct ib_mad_port_private {TYPE_6__* device; } ;
struct ib_mad_hdr {int dummy; } ;
typedef enum smi_forward_action { ____Placeholder_smi_forward_action } smi_forward_action ;
typedef enum smi_action { ____Placeholder_smi_action } smi_action ;
struct TYPE_14__ {int phys_port_cnt; } ;
struct TYPE_11__ {int qp_num; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ib_mad_hdr const*,int *,struct ib_wc*,TYPE_6__*,int ,int ,int ,int) ;
 int FUNC_1 (struct ib_mad_private*) ;
 int FUNC_2 (struct ib_mad_private*,struct ib_mad_private*,int ) ;
 int FUNC_3 (struct opa_smp*) ;
 scalar_t__ FUNC_4 (struct opa_smp*,TYPE_6__*) ;
 int FUNC_5 (struct opa_smp*) ;
 scalar_t__ FUNC_6 (struct opa_smp*,scalar_t__,int,int ) ;
 scalar_t__ FUNC_7 (struct opa_smp*,scalar_t__,int) ;
 scalar_t__ FUNC_8 (TYPE_6__*) ;

__attribute__((used)) static enum smi_action
FUNC_9(struct ib_mad_port_private *VAR_4,
        struct ib_mad_qp_info *VAR_5,
        struct ib_wc *VAR_6,
        int VAR_7,
        struct ib_mad_private *VAR_8,
        struct ib_mad_private *VAR_9)
{
 enum smi_forward_action VAR_10;
 struct opa_smp *VAR_11 = (struct opa_smp *)VAR_8->mad;

 if (FUNC_6(VAR_11,
       FUNC_8(VAR_4->device),
       VAR_7,
       VAR_4->device->phys_port_cnt) ==
       VAR_0)
  return VAR_0;

 VAR_10 = FUNC_3(VAR_11);
 if (VAR_10 == VAR_2)
  return VAR_1;

 if (VAR_10 == VAR_3) {
  if (FUNC_7(VAR_11,
        FUNC_8(VAR_4->device),
        VAR_7) == VAR_0)
   return VAR_0;

  if (FUNC_4(VAR_11, VAR_4->device) ==
      VAR_0)
   return VAR_0;

 } else if (FUNC_8(VAR_4->device)) {

  FUNC_2(VAR_9, VAR_8, FUNC_1(VAR_9));
  VAR_9->header.recv_wc.wc = &VAR_9->header.wc;
  VAR_9->header.recv_wc.recv_buf.opa_mad =
    (struct opa_mad *)VAR_9->mad;
  VAR_9->header.recv_wc.recv_buf.grh = &VAR_9->grh;

  FUNC_0((const struct ib_mad_hdr *)VAR_9->mad,
        &VAR_9->grh, VAR_6,
        VAR_4->device,
        FUNC_5(VAR_11),
        VAR_5->qp->qp_num,
        VAR_8->header.wc.byte_len,
        1);

  return VAR_0;
 }

 return VAR_1;
}
