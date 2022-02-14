
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rvt_mmap_info {int pending_mmaps; int offset; } ;
struct rvt_k_cq_wc {int head; int tail; int * kqueue; int * uqueue; } ;
struct TYPE_4__ {int max_cqe; } ;
struct TYPE_5__ {int node; TYPE_1__ props; } ;
struct rvt_dev_info {int pending_lock; int pending_mmaps; TYPE_2__ dparms; } ;
struct rvt_cq_wc {int head; int tail; int * kqueue; int * uqueue; } ;
struct TYPE_6__ {int cqe; } ;
struct rvt_cq {int lock; struct rvt_mmap_info* ip; struct rvt_k_cq_wc* kqueue; struct rvt_k_cq_wc* queue; TYPE_3__ ibcq; struct rvt_dev_info* rdi; } ;
struct ib_wc {int dummy; } ;
struct ib_uverbs_wc {int dummy; } ;
struct ib_udata {int outlen; } ;
struct ib_cq {int dummy; } ;
typedef int offset ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct ib_udata*,int *,int) ;
 struct rvt_cq* FUNC_3 (struct ib_cq*) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct rvt_dev_info*,struct rvt_mmap_info*,int,struct rvt_k_cq_wc*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct rvt_k_cq_wc*) ;
 struct rvt_k_cq_wc* FUNC_11 (int) ;
 struct rvt_k_cq_wc* FUNC_12 (int,int ) ;

int FUNC_13(struct ib_cq *VAR_2, int VAR_3, struct ib_udata *VAR_4)
{
 struct rvt_cq *VAR_5 = FUNC_3(VAR_2);
 u32 VAR_6, VAR_7, VAR_8;
 int VAR_9;
 u32 VAR_10;
 struct rvt_dev_info *VAR_11 = VAR_5->rdi;
 struct rvt_cq_wc *VAR_12 = ((void*)0);
 struct rvt_cq_wc *VAR_13 = ((void*)0);
 struct rvt_k_cq_wc *VAR_14 = ((void*)0);
 struct rvt_k_cq_wc *VAR_15 = ((void*)0);

 if (VAR_3 < 1 || VAR_3 > VAR_11->dparms.props.max_cqe)
  return -VAR_0;




 if (VAR_4 && VAR_4->outlen >= sizeof(__u64)) {
  VAR_10 = sizeof(struct ib_uverbs_wc) * (VAR_3 + 1);
  VAR_10 += sizeof(*VAR_12);
  VAR_12 = FUNC_11(VAR_10);
  if (!VAR_12)
   return -VAR_1;
 } else {
  VAR_10 = sizeof(struct ib_wc) * (VAR_3 + 1);
  VAR_10 += sizeof(*VAR_14);
  VAR_14 = FUNC_12(VAR_10, VAR_11->dparms.node);
  if (!VAR_14)
   return -VAR_1;
 }

 if (VAR_4 && VAR_4->outlen >= sizeof(__u64)) {
  __u64 VAR_16 = 0;

  VAR_9 = FUNC_2(VAR_4, &VAR_16, sizeof(VAR_16));
  if (VAR_9)
   goto bail_free;
 }

 FUNC_7(&VAR_5->lock);




 if (VAR_12) {
  VAR_13 = VAR_5->queue;
  VAR_6 = FUNC_0(VAR_13->head);
  VAR_7 = FUNC_0(VAR_13->tail);
 } else {
  VAR_15 = VAR_5->kqueue;
  VAR_6 = VAR_15->head;
  VAR_7 = VAR_15->tail;
 }

 if (VAR_6 > (u32)VAR_5->ibcq.cqe)
  VAR_6 = (u32)VAR_5->ibcq.cqe;
 if (VAR_7 > (u32)VAR_5->ibcq.cqe)
  VAR_7 = (u32)VAR_5->ibcq.cqe;
 if (VAR_6 < VAR_7)
  VAR_8 = VAR_5->ibcq.cqe + 1 + VAR_6 - VAR_7;
 else
  VAR_8 = VAR_6 - VAR_7;
 if (FUNC_9((u32)VAR_3 < VAR_8)) {
  VAR_9 = -VAR_0;
  goto bail_unlock;
 }
 for (VAR_8 = 0; VAR_7 != VAR_6; VAR_8++) {
  if (VAR_12)
   VAR_12->uqueue[VAR_8] = VAR_13->uqueue[VAR_7];
  else
   VAR_14->kqueue[VAR_8] = VAR_15->kqueue[VAR_7];
  if (VAR_7 == (u32)VAR_5->ibcq.cqe)
   VAR_7 = 0;
  else
   VAR_7++;
 }
 VAR_5->ibcq.cqe = VAR_3;
 if (VAR_12) {
  FUNC_1(VAR_12->head, VAR_8);
  FUNC_1(VAR_12->tail, 0);
  VAR_5->queue = VAR_12;
 } else {
  VAR_14->head = VAR_8;
  VAR_14->tail = 0;
  VAR_5->kqueue = VAR_14;
 }
 FUNC_8(&VAR_5->lock);

 if (VAR_12)
  FUNC_10(VAR_13);
 else
  FUNC_10(VAR_15);

 if (VAR_5->ip) {
  struct rvt_mmap_info *VAR_17 = VAR_5->ip;

  FUNC_6(VAR_11, VAR_17, VAR_10, VAR_12);





  if (VAR_4 && VAR_4->outlen >= sizeof(__u64)) {
   VAR_9 = FUNC_2(VAR_4, &VAR_17->offset,
            sizeof(VAR_17->offset));
   if (VAR_9)
    return VAR_9;
  }

  FUNC_7(&VAR_11->pending_lock);
  if (FUNC_5(&VAR_17->pending_mmaps))
   FUNC_4(&VAR_17->pending_mmaps, &VAR_11->pending_mmaps);
  FUNC_8(&VAR_11->pending_lock);
 }

 return 0;

bail_unlock:
 FUNC_8(&VAR_5->lock);
bail_free:
 FUNC_10(VAR_12);
 FUNC_10(VAR_14);

 return VAR_9;
}
