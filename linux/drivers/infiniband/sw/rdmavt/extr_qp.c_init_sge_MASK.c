
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wc ;
struct rvt_sge {int mr; } ;
struct rvt_sge_state {int num_sge; scalar_t__ total_len; struct rvt_sge sge; struct rvt_sge* sg_list; } ;
struct rvt_rwqe {int num_sge; int wr_id; TYPE_3__* sg_list; } ;
struct TYPE_5__ {int recv_cq; int pd; TYPE_1__* srq; int device; } ;
struct rvt_qp {scalar_t__ r_len; TYPE_2__ ibqp; struct rvt_sge* r_sg_list; struct rvt_sge_state r_sge; } ;
struct rvt_pd {int dummy; } ;
struct rvt_lkey_table {int dummy; } ;
struct rvt_dev_info {struct rvt_lkey_table lkey_table; } ;
struct ib_wc {TYPE_2__* qp; int opcode; int status; int wr_id; } ;
struct TYPE_6__ {scalar_t__ length; } ;
struct TYPE_4__ {int pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rvt_dev_info* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct rvt_pd* FUNC_2 (int ) ;
 int FUNC_3 (struct ib_wc*,int ,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,struct ib_wc*,int) ;
 int FUNC_6 (struct rvt_lkey_table*,struct rvt_pd*,struct rvt_sge*,int *,int ,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct rvt_qp *VAR_3, struct rvt_rwqe *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct ib_wc VAR_8;
 struct rvt_lkey_table *VAR_9;
 struct rvt_pd *VAR_10;
 struct rvt_sge_state *VAR_11;
 struct rvt_dev_info *VAR_12 = FUNC_0(VAR_3->ibqp.device);

 VAR_9 = &VAR_12->lkey_table;
 VAR_10 = FUNC_2(VAR_3->ibqp.srq ? VAR_3->ibqp.srq->pd : VAR_3->ibqp.pd);
 VAR_11 = &VAR_3->r_sge;
 VAR_11->sg_list = VAR_3->r_sg_list;
 VAR_3->r_len = 0;
 for (VAR_5 = VAR_6 = 0; VAR_5 < VAR_4->num_sge; VAR_5++) {
  if (VAR_4->sg_list[VAR_5].length == 0)
   continue;

  VAR_7 = FUNC_6(VAR_9, VAR_10, VAR_6 ? &VAR_11->sg_list[VAR_6 - 1] : &VAR_11->sge,
      ((void*)0), FUNC_4(&VAR_4->sg_list[VAR_5]),
      VAR_0);
  if (FUNC_8(VAR_7 <= 0))
   goto bad_lkey;
  VAR_3->r_len += VAR_4->sg_list[VAR_5].length;
  VAR_6++;
 }
 VAR_11->num_sge = VAR_6;
 VAR_11->total_len = VAR_3->r_len;
 return 1;

bad_lkey:
 while (VAR_6) {
  struct rvt_sge *VAR_13 = --VAR_6 ? &VAR_11->sg_list[VAR_6 - 1] : &VAR_11->sge;

  FUNC_7(VAR_13->mr);
 }
 VAR_11->num_sge = 0;
 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.wr_id = VAR_4->wr_id;
 VAR_8.status = VAR_1;
 VAR_8.opcode = VAR_2;
 VAR_8.qp = &VAR_3->ibqp;

 FUNC_5(FUNC_1(VAR_3->ibqp.recv_cq), &VAR_8, 1);
 return 0;
}
