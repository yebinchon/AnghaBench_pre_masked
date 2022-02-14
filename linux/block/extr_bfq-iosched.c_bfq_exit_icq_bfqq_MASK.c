
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_queue {int * bic; struct bfq_data* bfqd; } ;
struct bfq_io_cq {int dummy; } ;
struct bfq_data {int lock; } ;


 int FUNC_0 (struct bfq_data*,struct bfq_queue*) ;
 int FUNC_1 (struct bfq_io_cq*,int *,int) ;
 struct bfq_queue* FUNC_2 (struct bfq_io_cq*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct bfq_io_cq *VAR_0, bool VAR_1)
{
 struct bfq_queue *VAR_2 = FUNC_2(VAR_0, VAR_1);
 struct bfq_data *VAR_3;

 if (VAR_2)
  VAR_3 = VAR_2->bfqd;

 if (VAR_2 && VAR_3) {
  unsigned long VAR_4;

  FUNC_3(&VAR_3->lock, VAR_4);
  VAR_2->bic = ((void*)0);
  FUNC_0(VAR_3, VAR_2);
  FUNC_1(VAR_0, ((void*)0), VAR_1);
  FUNC_4(&VAR_3->lock, VAR_4);
 }
}
