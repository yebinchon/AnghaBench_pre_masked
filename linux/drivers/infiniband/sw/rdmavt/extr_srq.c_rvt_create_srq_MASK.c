
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_11__ {scalar_t__ size; scalar_t__ max_sge; int lock; int wq; } ;
struct rvt_srq {TYPE_4__ rq; TYPE_5__* ip; int limit; } ;
struct rvt_rwqe {int dummy; } ;
struct rvt_rwq {int dummy; } ;
struct TYPE_9__ {scalar_t__ max_srq_sge; scalar_t__ max_srq_wr; scalar_t__ max_srq; } ;
struct TYPE_10__ {TYPE_2__ props; int node; } ;
struct rvt_dev_info {scalar_t__ n_srqs_allocated; int pending_lock; int pending_mmaps; int n_srqs_lock; TYPE_3__ dparms; } ;
struct ib_udata {int outlen; } ;
struct TYPE_8__ {scalar_t__ max_sge; scalar_t__ max_wr; int srq_limit; } ;
struct ib_srq_init_attr {scalar_t__ srq_type; TYPE_1__ attr; } ;
struct ib_srq {int device; } ;
struct ib_sge {int dummy; } ;
typedef int __u64 ;
struct TYPE_12__ {int pending_mmaps; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ib_udata*,int *,int) ;
 struct rvt_dev_info* FUNC_1 (int ) ;
 struct rvt_srq* FUNC_2 (struct ib_srq*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int,int ,struct ib_udata*) ;
 TYPE_5__* FUNC_6 (struct rvt_dev_info*,int,struct ib_udata*,int ) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct ib_srq *VAR_4, struct ib_srq_init_attr *VAR_5,
     struct ib_udata *VAR_6)
{
 struct rvt_dev_info *VAR_7 = FUNC_1(VAR_4->device);
 struct rvt_srq *VAR_8 = FUNC_2(VAR_4);
 u32 VAR_9;
 int VAR_10;

 if (VAR_5->srq_type != VAR_3)
  return -VAR_2;

 if (VAR_5->attr.max_sge == 0 ||
     VAR_5->attr.max_sge > VAR_7->dparms.props.max_srq_sge ||
     VAR_5->attr.max_wr == 0 ||
     VAR_5->attr.max_wr > VAR_7->dparms.props.max_srq_wr)
  return -VAR_0;




 VAR_8->rq.size = VAR_5->attr.max_wr + 1;
 VAR_8->rq.max_sge = VAR_5->attr.max_sge;
 VAR_9 = sizeof(struct ib_sge) * VAR_8->rq.max_sge +
  sizeof(struct rvt_rwqe);
 if (FUNC_5(&VAR_8->rq, VAR_8->rq.size * VAR_9,
    VAR_7->dparms.node, VAR_6)) {
  VAR_10 = -VAR_1;
  goto bail_srq;
 }





 if (VAR_6 && VAR_6->outlen >= sizeof(__u64)) {
  u32 VAR_11 = sizeof(struct rvt_rwq) + VAR_8->rq.size * VAR_9;

  VAR_8->ip = FUNC_6(VAR_7, VAR_11, VAR_6, VAR_8->rq.wq);
  if (!VAR_8->ip) {
   VAR_10 = -VAR_1;
   goto bail_wq;
  }

  VAR_10 = FUNC_0(VAR_6, &VAR_8->ip->offset,
           sizeof(VAR_8->ip->offset));
  if (VAR_10)
   goto bail_ip;
 }




 FUNC_9(&VAR_8->rq.lock);
 VAR_8->limit = VAR_5->attr.srq_limit;

 FUNC_8(&VAR_7->n_srqs_lock);
 if (VAR_7->n_srqs_allocated == VAR_7->dparms.props.max_srq) {
  FUNC_11(&VAR_7->n_srqs_lock);
  VAR_10 = -VAR_1;
  goto bail_ip;
 }

 VAR_7->n_srqs_allocated++;
 FUNC_11(&VAR_7->n_srqs_lock);

 if (VAR_8->ip) {
  FUNC_10(&VAR_7->pending_lock);
  FUNC_4(&VAR_8->ip->pending_mmaps, &VAR_7->pending_mmaps);
  FUNC_12(&VAR_7->pending_lock);
 }

 return 0;

bail_ip:
 FUNC_3(VAR_8->ip);
bail_wq:
 FUNC_7(&VAR_8->rq);
bail_srq:
 return VAR_10;
}
