
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_queue {struct bfq_queue* new_bfqq; } ;


 int FUNC_0 (struct bfq_queue*) ;

__attribute__((used)) static void FUNC_1(struct bfq_queue *VAR_0)
{
 struct bfq_queue *VAR_1, *VAR_2;






 VAR_1 = VAR_0->new_bfqq;
 while (VAR_1) {
  if (VAR_1 == VAR_0)
   break;
  VAR_2 = VAR_1->new_bfqq;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
}
