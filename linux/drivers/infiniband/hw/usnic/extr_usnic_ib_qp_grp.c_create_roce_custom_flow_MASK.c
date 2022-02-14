
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {scalar_t__ port_num; } ;
struct usnic_transport_spec {int trans_type; TYPE_1__ usnic_roce; } ;
struct TYPE_4__ {scalar_t__ port_num; } ;
struct usnic_ib_qp_grp_flow {int trans_type; struct usnic_ib_qp_grp* qp_grp; TYPE_2__ usnic_roce; struct usnic_fwd_flow* flow; } ;
struct usnic_ib_qp_grp {int ufdev; } ;
struct usnic_fwd_flow {int dummy; } ;
struct usnic_filter_action {int dummy; } ;
struct filter {int dummy; } ;
typedef enum usnic_transport_type { ____Placeholder_usnic_transport_type } usnic_transport_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct usnic_ib_qp_grp_flow* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct usnic_fwd_flow*) ;
 int FUNC_2 (struct usnic_fwd_flow*) ;
 int FUNC_3 (struct usnic_ib_qp_grp*,struct usnic_filter_action*) ;
 struct usnic_ib_qp_grp_flow* FUNC_4 (int,int ) ;
 struct usnic_fwd_flow* FUNC_5 (int ,struct filter*,struct usnic_filter_action*) ;
 int FUNC_6 (struct usnic_fwd_flow*) ;
 int FUNC_7 (struct filter*,scalar_t__) ;
 scalar_t__ FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static struct usnic_ib_qp_grp_flow*
FUNC_10(struct usnic_ib_qp_grp *VAR_4,
   struct usnic_transport_spec *VAR_5)
{
 uint16_t VAR_6;
 int VAR_7;
 struct filter VAR_8;
 struct usnic_filter_action VAR_9;
 struct usnic_ib_qp_grp_flow *VAR_10;
 struct usnic_fwd_flow *VAR_11;
 enum usnic_transport_type VAR_12;

 VAR_12 = VAR_5->trans_type;
 VAR_6 = VAR_5->usnic_roce.port_num;


 VAR_6 = FUNC_8(VAR_12, VAR_6);
 if (VAR_6 == 0)
  return FUNC_0(-VAR_1);


 FUNC_7(&VAR_8, VAR_6);
 VAR_7 = FUNC_3(VAR_4, &VAR_9);
 if (VAR_7)
  goto out_unreserve_port;

 VAR_11 = FUNC_5(VAR_4->ufdev, &VAR_8, &VAR_9);
 if (FUNC_1(VAR_11)) {
  VAR_7 = VAR_11 ? FUNC_2(VAR_11) : -VAR_0;
  goto out_unreserve_port;
 }


 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_3);
 if (!VAR_10) {
  VAR_7 = -VAR_2;
  goto out_dealloc_flow;
 }
 VAR_10->flow = VAR_11;
 VAR_10->trans_type = VAR_12;
 VAR_10->usnic_roce.port_num = VAR_6;
 VAR_10->qp_grp = VAR_4;
 return VAR_10;

out_dealloc_flow:
 FUNC_6(VAR_11);
out_unreserve_port:
 FUNC_9(VAR_12, VAR_6);
 return FUNC_0(VAR_7);
}
