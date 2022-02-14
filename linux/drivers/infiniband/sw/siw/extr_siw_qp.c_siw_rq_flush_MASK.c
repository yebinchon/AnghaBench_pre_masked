
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct siw_rqe {int flags; } ;
struct siw_wqe {scalar_t__ wr_status; int sqe; int bytes; struct siw_rqe rqe; } ;
struct TYPE_6__ {int rq_size; } ;
struct TYPE_5__ {struct siw_wqe wqe_active; } ;
struct TYPE_4__ {struct siw_wqe wqe_active; } ;
struct siw_qp {size_t rq_get; TYPE_3__ attrs; struct siw_rqe* recvq; TYPE_2__ rx_tagged; TYPE_1__ rx_untagged; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct siw_wqe*) ;
 int FUNC_3 (struct siw_qp*,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct siw_qp*,struct siw_rqe*,int ,int ,int ) ;
 int FUNC_5 (struct siw_qp*,int *,int ,int ) ;
 int FUNC_6 (struct siw_wqe*,scalar_t__) ;

void FUNC_7(struct siw_qp *VAR_6)
{
 struct siw_wqe *VAR_7 = &VAR_6->rx_untagged.wqe_active;




 if (VAR_7->wr_status != VAR_5) {
  FUNC_3(VAR_6, "flush current rqe, type %d, status %d\n",
      FUNC_2(VAR_7), VAR_7->wr_status);

  FUNC_6(VAR_7, FUNC_2(VAR_7));

  if (FUNC_2(VAR_7) == VAR_2) {
   FUNC_4(VAR_6, &VAR_7->rqe, VAR_7->bytes,
      0, VAR_4);
  } else if (FUNC_2(VAR_7) != VAR_0 &&
      FUNC_2(VAR_7) != VAR_1 &&
      FUNC_2(VAR_7) != VAR_3) {
   FUNC_5(VAR_6, &VAR_7->sqe, 0, VAR_4);
  }
  VAR_7->wr_status = VAR_5;
 }
 VAR_7 = &VAR_6->rx_tagged.wqe_active;

 if (VAR_7->wr_status != VAR_5) {
  FUNC_6(VAR_7, FUNC_2(VAR_7));
  VAR_7->wr_status = VAR_5;
 }



 while (VAR_6->attrs.rq_size) {
  struct siw_rqe *VAR_8 =
   &VAR_6->recvq[VAR_6->rq_get % VAR_6->attrs.rq_size];

  if (!FUNC_0(VAR_8->flags))
   break;

  if (FUNC_4(VAR_6, VAR_8, 0, 0, VAR_4) != 0)
   break;

  FUNC_1(VAR_8->flags, 0);
  VAR_6->rq_get++;
 }
}
