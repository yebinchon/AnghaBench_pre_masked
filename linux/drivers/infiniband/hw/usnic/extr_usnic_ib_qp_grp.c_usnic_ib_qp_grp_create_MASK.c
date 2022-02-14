
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usnic_vnic_res_spec {int dummy; } ;
struct usnic_transport_spec {int trans_type; } ;
struct usnic_ib_vf {int vnic; int lock; } ;
struct usnic_ib_qp_grp_flow {int dummy; } ;
struct TYPE_3__ {int qp_num; } ;
struct usnic_ib_qp_grp {struct usnic_ib_qp_grp_flow* res_chunk_list; int grp_id; TYPE_1__ ibqp; int owner_pid; int state; struct usnic_fwd_dev* ufdev; int lock; int flows_lst; } ;
struct usnic_ib_pd {int dummy; } ;
struct usnic_fwd_dev {int dummy; } ;
typedef enum usnic_transport_type { ____Placeholder_usnic_transport_type } usnic_transport_type ;
struct TYPE_4__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usnic_ib_qp_grp* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct usnic_ib_qp_grp_flow*) ;
 int FUNC_3 (struct usnic_ib_qp_grp_flow*) ;
 struct usnic_ib_qp_grp_flow* FUNC_4 (int ,struct usnic_vnic_res_spec*,struct usnic_ib_qp_grp*) ;
 struct usnic_ib_qp_grp_flow* FUNC_5 (struct usnic_ib_qp_grp*,struct usnic_transport_spec*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_6 (struct usnic_ib_qp_grp_flow*) ;
 int FUNC_7 (struct usnic_ib_qp_grp*) ;
 struct usnic_ib_qp_grp* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct usnic_vnic_res_spec*) ;
 int * VAR_5 ;
 int FUNC_11 (struct usnic_ib_vf*,struct usnic_ib_pd*,struct usnic_ib_qp_grp*) ;
 int FUNC_12 (struct usnic_ib_qp_grp*) ;
 int FUNC_13 (struct usnic_ib_qp_grp_flow*,int *) ;
 int FUNC_14 (struct usnic_ib_qp_grp_flow*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,int) ;
 int FUNC_17 (struct usnic_ib_qp_grp*) ;
 int FUNC_18 (int *,struct usnic_vnic_res_spec*) ;

struct usnic_ib_qp_grp *
FUNC_19(struct usnic_fwd_dev *VAR_6, struct usnic_ib_vf *VAR_7,
   struct usnic_ib_pd *VAR_8,
   struct usnic_vnic_res_spec *VAR_9,
   struct usnic_transport_spec *VAR_10)
{
 struct usnic_ib_qp_grp *VAR_11;
 int VAR_12;
 enum usnic_transport_type VAR_13 = VAR_10->trans_type;
 struct usnic_ib_qp_grp_flow *VAR_14;

 FUNC_9(&VAR_7->lock);

 VAR_12 = FUNC_18(&VAR_5[VAR_13],
      VAR_9);
 if (VAR_12) {
  FUNC_16("Spec does not meet minimum req for transport %d\n",
    VAR_13);
  FUNC_10(VAR_9);
  return FUNC_0(VAR_12);
 }

 VAR_11 = FUNC_8(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return ((void*)0);

 VAR_11->res_chunk_list = FUNC_4(VAR_7->vnic, VAR_9,
       VAR_11);
 if (FUNC_2(VAR_11->res_chunk_list)) {
  VAR_12 = VAR_11->res_chunk_list ?
    FUNC_3(VAR_11->res_chunk_list) : -VAR_1;
  goto out_free_qp_grp;
 }

 VAR_12 = FUNC_11(VAR_7, VAR_8, VAR_11);
 if (VAR_12)
  goto out_free_res;

 FUNC_1(&VAR_11->flows_lst);
 FUNC_15(&VAR_11->lock);
 VAR_11->ufdev = VAR_6;
 VAR_11->state = VAR_3;
 VAR_11->owner_pid = VAR_4->pid;

 VAR_14 = FUNC_5(VAR_11, VAR_10);
 if (FUNC_2(VAR_14)) {
  FUNC_16("Unable to create and add flow with err %ld\n",
    FUNC_3(VAR_14));
  VAR_12 = VAR_14 ? FUNC_3(VAR_14) : -VAR_0;
  goto out_qp_grp_vf_unbind;
 }

 VAR_12 = FUNC_13(VAR_14, &VAR_11->grp_id);
 if (VAR_12)
  goto out_release_flow;
 VAR_11->ibqp.qp_num = VAR_11->grp_id;

 FUNC_17(VAR_11);

 return VAR_11;

out_release_flow:
 FUNC_14(VAR_14);
out_qp_grp_vf_unbind:
 FUNC_12(VAR_11);
out_free_res:
 FUNC_6(VAR_11->res_chunk_list);
out_free_qp_grp:
 FUNC_7(VAR_11);

 return FUNC_0(VAR_12);
}
