
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_queue {int ref; struct bfq_queue* new_bfqq; int pid; int bfqd; } ;


 int FUNC_0 (int ,struct bfq_queue*,char*,int ) ;
 int FUNC_1 (struct bfq_queue*) ;

__attribute__((used)) static struct bfq_queue *
FUNC_2(struct bfq_queue *VAR_0, struct bfq_queue *VAR_1)
{
 int VAR_2, VAR_3;
 struct bfq_queue *VAR_4;







 if (!FUNC_1(VAR_1))
  return ((void*)0);


 while ((VAR_4 = VAR_1->new_bfqq)) {
  if (VAR_4 == VAR_0)
   return ((void*)0);
  VAR_1 = VAR_4;
 }

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = FUNC_1(VAR_1);




 if (VAR_2 == 0 || VAR_3 == 0)
  return ((void*)0);

 FUNC_0(VAR_0->bfqd, VAR_0, "scheduling merge with queue %d",
  VAR_1->pid);
 VAR_0->new_bfqq = VAR_1;
 VAR_1->ref += VAR_2;
 return VAR_1;
}
