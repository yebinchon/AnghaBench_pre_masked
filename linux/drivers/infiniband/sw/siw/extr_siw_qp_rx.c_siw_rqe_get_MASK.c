
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u32 ;
struct siw_wqe {int dummy; } ;
struct siw_srq {size_t num_rqe; size_t rq_get; size_t limit; int lock; scalar_t__ armed; struct siw_rqe* recvq; } ;
struct siw_rqe {int flags; int num_sge; TYPE_2__* sge; int id; } ;
struct TYPE_7__ {size_t rq_size; } ;
struct siw_qp {size_t rq_get; int rx_untagged; TYPE_1__ attrs; struct siw_rqe* recvq; struct siw_srq* srq; } ;
typedef TYPE_5__* rx_type ;
struct TYPE_10__ {int num_sge; TYPE_3__* sge; int id; } ;
struct TYPE_11__ {int ** mem; TYPE_4__ rqe; scalar_t__ bytes; scalar_t__ processed; int wr_status; } ;
struct TYPE_9__ {scalar_t__ length; int lkey; int laddr; } ;
struct TYPE_8__ {scalar_t__ length; int lkey; int laddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 struct siw_wqe* FUNC_1 (int *) ;
 int FUNC_2 (struct siw_qp*,char*,int) ;
 int FUNC_3 (struct siw_srq*,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static struct siw_wqe *FUNC_8(struct siw_qp *VAR_5)
{
 struct siw_rqe *VAR_6;
 struct siw_srq *VAR_7;
 struct siw_wqe *VAR_8 = ((void*)0);
 bool VAR_9 = 0;
 unsigned long VAR_10;

 VAR_7 = VAR_5->srq;
 if (VAR_7) {
  FUNC_5(&VAR_7->lock, VAR_10);
  if (FUNC_7(!VAR_7->num_rqe))
   goto out;

  VAR_6 = &VAR_7->recvq[VAR_7->rq_get % VAR_7->num_rqe];
 } else {
  if (FUNC_7(!VAR_5->recvq))
   goto out;

  VAR_6 = &VAR_5->recvq[VAR_5->rq_get % VAR_5->attrs.rq_size];
 }
 if (FUNC_0(VAR_6->flags == VAR_3)) {
  int VAR_11 = VAR_6->num_sge;

  if (FUNC_0(VAR_11 <= VAR_1)) {
   int VAR_12 = 0;

   VAR_8 = FUNC_1(&VAR_5->rx_untagged);
   rx_type(VAR_13) = VAR_2;
   VAR_13->wr_status = VAR_4;
   VAR_13->bytes = 0;
   VAR_13->processed = 0;

   VAR_13->rqe.id = VAR_6->id;
   VAR_13->rqe.num_sge = VAR_11;

   while (VAR_12 < VAR_11) {
    VAR_13->rqe.sge[VAR_12].laddr = VAR_6->sge[VAR_12].laddr;
    VAR_13->rqe.sge[VAR_12].lkey = VAR_6->sge[VAR_12].lkey;
    VAR_13->rqe.sge[VAR_12].length = VAR_6->sge[VAR_12].length;
    VAR_13->bytes += VAR_13->rqe.sge[VAR_12].length;
    VAR_13->mem[VAR_12] = ((void*)0);
    VAR_12++;
   }

   FUNC_4(VAR_6->flags, 0);
  } else {
   FUNC_2(VAR_5, "too many sge's: %d\n", VAR_6->num_sge);
   if (VAR_7)
    FUNC_6(&VAR_7->lock, VAR_10);
   return ((void*)0);
  }
  if (!VAR_7) {
   VAR_5->rq_get++;
  } else {
   if (VAR_7->armed) {

    u32 VAR_14 = (VAR_7->rq_get + VAR_7->limit) %
       VAR_7->num_rqe;
    struct siw_rqe *VAR_15 = &VAR_7->recvq[VAR_14];

    if (!(VAR_15->flags & VAR_3)) {
     VAR_7->armed = 0;
     VAR_9 = 1;
    }
   }
   VAR_7->rq_get++;
  }
 }
out:
 if (VAR_7) {
  FUNC_6(&VAR_7->lock, VAR_10);
  if (VAR_9)
   FUNC_3(VAR_7, VAR_0);
 }
 return VAR_8;
}
