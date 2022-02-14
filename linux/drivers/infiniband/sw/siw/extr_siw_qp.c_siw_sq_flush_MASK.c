
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siw_sqe {int flags; } ;
struct siw_wqe {scalar_t__ wr_status; int bytes; struct siw_sqe sqe; } ;
struct TYPE_2__ {int orq_size; int sq_size; } ;
struct siw_qp {size_t orq_get; size_t sq_get; TYPE_1__ attrs; struct siw_sqe* sendq; struct siw_sqe* orq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct siw_qp*,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct siw_qp*,int ) ;
 scalar_t__ FUNC_4 (struct siw_qp*,struct siw_sqe*,int ,int ) ;
 int FUNC_5 (struct siw_wqe*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct siw_wqe*) ;
 struct siw_wqe* FUNC_7 (struct siw_qp*) ;

void FUNC_8(struct siw_qp *VAR_7)
{
 struct siw_sqe *VAR_8;
 struct siw_wqe *VAR_9 = FUNC_7(VAR_7);
 int VAR_10 = 0;




 while (VAR_7->attrs.orq_size) {
  VAR_8 = &VAR_7->orq[VAR_7->orq_get % VAR_7->attrs.orq_size];
  if (!FUNC_0(VAR_8->flags))
   break;

  if (FUNC_4(VAR_7, VAR_8, 0, VAR_4) != 0)
   break;

  FUNC_1(VAR_8->flags, 0);
  VAR_7->orq_get++;
 }



 if (VAR_9->wr_status != VAR_5) {
  FUNC_2(VAR_7, "flush current SQE, type %d, status %d\n",
      FUNC_6(VAR_9), VAR_9->wr_status);

  FUNC_5(VAR_9, FUNC_6(VAR_9));

  if (FUNC_6(VAR_9) != VAR_3 &&
      ((FUNC_6(VAR_9) != VAR_1 &&
        FUNC_6(VAR_9) != VAR_2) ||
       VAR_9->wr_status == VAR_6))




   FUNC_4(VAR_7, &VAR_9->sqe, VAR_9->bytes,
      VAR_4);

  VAR_9->wr_status = VAR_5;
 }



 while (VAR_7->attrs.sq_size) {
  VAR_8 = &VAR_7->sendq[VAR_7->sq_get % VAR_7->attrs.sq_size];
  if (!FUNC_0(VAR_8->flags))
   break;

  VAR_10 = 1;
  if (FUNC_4(VAR_7, VAR_8, 0, VAR_4) != 0)




   break;

  FUNC_1(VAR_8->flags, 0);
  VAR_7->sq_get++;
 }
 if (VAR_10)
  FUNC_3(VAR_7, VAR_0);
}
