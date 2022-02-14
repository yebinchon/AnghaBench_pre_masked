
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_attr_bundle {int dummy; } ;
struct ib_uverbs_ex_create_qp {int is_srq; int qp_type; int sq_sig_all; int max_inline_data; int max_recv_sge; int max_send_sge; int max_recv_wr; int max_send_wr; int srq_handle; int recv_cq_handle; int send_cq_handle; int pd_handle; int user_handle; } ;
struct ib_uverbs_create_qp {int is_srq; int qp_type; int sq_sig_all; int max_inline_data; int max_recv_sge; int max_send_sge; int max_recv_wr; int max_send_wr; int srq_handle; int recv_cq_handle; int send_cq_handle; int pd_handle; int user_handle; } ;
typedef int cmd_ex ;
typedef int cmd ;


 int FUNC_0 (struct uverbs_attr_bundle*,struct ib_uverbs_ex_create_qp*) ;
 int FUNC_1 (struct ib_uverbs_ex_create_qp*,int ,int) ;
 int FUNC_2 (struct uverbs_attr_bundle*,struct ib_uverbs_create_qp*,int) ;

__attribute__((used)) static int FUNC_3(struct uverbs_attr_bundle *VAR_0)
{
 struct ib_uverbs_create_qp VAR_1;
 struct ib_uverbs_ex_create_qp VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, &VAR_1, sizeof(VAR_1));
 if (VAR_3)
  return VAR_3;

 FUNC_1(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.user_handle = VAR_1.user_handle;
 VAR_2.pd_handle = VAR_1.pd_handle;
 VAR_2.send_cq_handle = VAR_1.send_cq_handle;
 VAR_2.recv_cq_handle = VAR_1.recv_cq_handle;
 VAR_2.srq_handle = VAR_1.srq_handle;
 VAR_2.max_send_wr = VAR_1.max_send_wr;
 VAR_2.max_recv_wr = VAR_1.max_recv_wr;
 VAR_2.max_send_sge = VAR_1.max_send_sge;
 VAR_2.max_recv_sge = VAR_1.max_recv_sge;
 VAR_2.max_inline_data = VAR_1.max_inline_data;
 VAR_2.sq_sig_all = VAR_1.sq_sig_all;
 VAR_2.qp_type = VAR_1.qp_type;
 VAR_2.is_srq = VAR_1.is_srq;

 return FUNC_0(VAR_0, &VAR_2);
}
