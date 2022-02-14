
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int sock_fd; } ;
struct usnic_transport_spec {int trans_type; TYPE_1__ udp; } ;
struct TYPE_4__ {struct usnic_fwd_flow* sock; } ;
struct usnic_ib_qp_grp_flow {int trans_type; struct usnic_ib_qp_grp* qp_grp; TYPE_2__ udp; struct usnic_fwd_flow* flow; } ;
struct usnic_ib_qp_grp {int ufdev; } ;
struct usnic_fwd_flow {int dummy; } ;
struct usnic_filter_action {int dummy; } ;
typedef struct usnic_fwd_flow socket ;
struct filter {int dummy; } ;
typedef enum usnic_transport_type { ____Placeholder_usnic_transport_type } usnic_transport_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct usnic_ib_qp_grp_flow* FUNC_0 (struct usnic_fwd_flow*) ;
 struct usnic_ib_qp_grp_flow* FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct usnic_fwd_flow*) ;
 int FUNC_3 (struct usnic_fwd_flow*) ;
 int FUNC_4 (struct usnic_ib_qp_grp*,struct usnic_filter_action*) ;
 struct usnic_ib_qp_grp_flow* FUNC_5 (int,int ) ;
 int FUNC_6 (char*,int) ;
 struct usnic_fwd_flow* FUNC_7 (int ,struct filter*,struct usnic_filter_action*) ;
 int FUNC_8 (struct usnic_fwd_flow*) ;
 int FUNC_9 (struct filter*,int ,int ) ;
 struct usnic_fwd_flow* FUNC_10 (int) ;
 int FUNC_11 (struct usnic_fwd_flow*) ;
 int FUNC_12 (struct usnic_fwd_flow*,int*,int *,int *) ;

__attribute__((used)) static struct usnic_ib_qp_grp_flow*
FUNC_13(struct usnic_ib_qp_grp *VAR_5,
  struct usnic_transport_spec *VAR_6)
{
 struct socket *VAR_7;
 int VAR_8;
 int VAR_9;
 struct filter VAR_10;
 struct usnic_filter_action VAR_11;
 struct usnic_ib_qp_grp_flow *VAR_12;
 struct usnic_fwd_flow *VAR_13;
 enum usnic_transport_type VAR_14;
 uint32_t VAR_15;
 uint16_t VAR_16;
 int VAR_17;

 VAR_14 = VAR_6->trans_type;
 VAR_8 = VAR_6->udp.sock_fd;


 VAR_7 = FUNC_10(VAR_8);
 if (FUNC_2(VAR_7))
  return FUNC_0(VAR_7);

 VAR_9 = FUNC_12(VAR_7, &VAR_17, &VAR_15, &VAR_16);
 if (VAR_9)
  goto out_put_sock;

 if (VAR_17 != VAR_4) {
  FUNC_6("Protocol for fd %d is not UDP", VAR_8);
  VAR_9 = -VAR_2;
  goto out_put_sock;
 }


 FUNC_9(&VAR_10, VAR_15, VAR_16);
 VAR_9 = FUNC_4(VAR_5, &VAR_11);
 if (VAR_9)
  goto out_put_sock;

 VAR_13 = FUNC_7(VAR_5->ufdev, &VAR_10, &VAR_11);
 if (FUNC_2(VAR_13)) {
  VAR_9 = VAR_13 ? FUNC_3(VAR_13) : -VAR_0;
  goto out_put_sock;
 }


 VAR_12 = FUNC_5(sizeof(*VAR_12), VAR_3);
 if (!VAR_12) {
  VAR_9 = -VAR_1;
  goto out_dealloc_flow;
 }
 VAR_12->flow = VAR_13;
 VAR_12->trans_type = VAR_14;
 VAR_12->udp.sock = VAR_7;
 VAR_12->qp_grp = VAR_5;
 return VAR_12;

out_dealloc_flow:
 FUNC_8(VAR_13);
out_put_sock:
 FUNC_11(VAR_7);
 return FUNC_1(VAR_9);
}
