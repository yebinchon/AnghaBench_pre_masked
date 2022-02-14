
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int producer_lock; } ;
struct rxe_srq {TYPE_1__ rq; } ;
struct ib_srq {int dummy; } ;
struct ib_recv_wr {struct ib_recv_wr* next; } ;


 int FUNC_0 (TYPE_1__*,struct ib_recv_wr const*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct rxe_srq* FUNC_3 (struct ib_srq*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ib_srq *VAR_0, const struct ib_recv_wr *VAR_1,
        const struct ib_recv_wr **VAR_2)
{
 int VAR_3 = 0;
 unsigned long VAR_4;
 struct rxe_srq *VAR_5 = FUNC_3(VAR_0);

 FUNC_1(&VAR_5->rq.producer_lock, VAR_4);

 while (VAR_1) {
  VAR_3 = FUNC_0(&VAR_5->rq, VAR_1);
  if (FUNC_4(VAR_3))
   break;
  VAR_1 = VAR_1->next;
 }

 FUNC_2(&VAR_5->rq.producer_lock, VAR_4);

 if (VAR_3)
  *VAR_2 = VAR_1;

 return VAR_3;
}
