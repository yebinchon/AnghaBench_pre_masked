
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_udata {int dummy; } ;
struct ib_srq {int usecnt; } ;
struct ib_rwq_ind_table {int usecnt; } ;
struct ib_qp_security {int dummy; } ;
struct ib_qp {scalar_t__ mrs_used; TYPE_2__* device; int res; int uobject; struct ib_qp_security* qp_sec; struct ib_rwq_ind_table* rwq_ind_tbl; struct ib_srq* srq; struct ib_cq* recv_cq; struct ib_cq* send_cq; struct ib_pd* pd; struct ib_qp* real_qp; int usecnt; struct ib_gid_attr* av_sgid_attr; struct ib_gid_attr* alt_path_sgid_attr; } ;
struct ib_pd {int usecnt; } ;
struct ib_gid_attr {int dummy; } ;
struct ib_cq {int usecnt; } ;
struct TYPE_3__ {int (* destroy_qp ) (struct ib_qp*,struct ib_udata*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ib_qp*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct ib_qp_security*) ;
 int FUNC_5 (struct ib_qp_security*) ;
 int FUNC_6 (struct ib_qp_security*) ;
 int FUNC_7 (struct ib_qp*,int) ;
 int FUNC_8 (struct ib_gid_attr const*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ib_qp*) ;
 int FUNC_11 (struct ib_qp*,struct ib_udata*) ;

int FUNC_12(struct ib_qp *VAR_1, struct ib_udata *VAR_2)
{
 const struct ib_gid_attr *VAR_3 = VAR_1->alt_path_sgid_attr;
 const struct ib_gid_attr *VAR_4 = VAR_1->av_sgid_attr;
 struct ib_pd *VAR_5;
 struct ib_cq *VAR_6, *VAR_7;
 struct ib_srq *VAR_8;
 struct ib_rwq_ind_table *VAR_9;
 struct ib_qp_security *VAR_10;
 int VAR_11;

 FUNC_0(VAR_1->mrs_used > 0);

 if (FUNC_3(&VAR_1->usecnt))
  return -VAR_0;

 if (VAR_1->real_qp != VAR_1)
  return FUNC_1(VAR_1);

 VAR_5 = VAR_1->pd;
 VAR_6 = VAR_1->send_cq;
 VAR_7 = VAR_1->recv_cq;
 VAR_8 = VAR_1->srq;
 VAR_9 = VAR_1->rwq_ind_tbl;
 VAR_10 = VAR_1->qp_sec;
 if (VAR_10)
  FUNC_5(VAR_10);

 if (!VAR_1->uobject)
  FUNC_10(VAR_1);

 FUNC_7(VAR_1, 1);
 FUNC_9(&VAR_1->res);
 VAR_11 = VAR_1->device->ops.destroy_qp(VAR_1, VAR_2);
 if (!VAR_11) {
  if (VAR_3)
   FUNC_8(VAR_3);
  if (VAR_4)
   FUNC_8(VAR_4);
  if (VAR_5)
   FUNC_2(&VAR_5->usecnt);
  if (VAR_6)
   FUNC_2(&VAR_6->usecnt);
  if (VAR_7)
   FUNC_2(&VAR_7->usecnt);
  if (VAR_8)
   FUNC_2(&VAR_8->usecnt);
  if (VAR_9)
   FUNC_2(&VAR_9->usecnt);
  if (VAR_10)
   FUNC_6(VAR_10);
 } else {
  if (VAR_10)
   FUNC_4(VAR_10);
 }

 return VAR_11;
}
