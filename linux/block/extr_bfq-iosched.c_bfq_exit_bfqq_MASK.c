
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_queue {int ref; } ;
struct bfq_data {struct bfq_queue* in_service_queue; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfq_data*,struct bfq_queue*,int ) ;
 int FUNC_1 (struct bfq_data*,struct bfq_queue*,char*,struct bfq_queue*,int ) ;
 int FUNC_2 (struct bfq_queue*) ;
 int FUNC_3 (struct bfq_queue*) ;
 int FUNC_4 (struct bfq_data*) ;

__attribute__((used)) static void FUNC_5(struct bfq_data *VAR_1, struct bfq_queue *VAR_2)
{
 if (VAR_2 == VAR_1->in_service_queue) {
  FUNC_0(VAR_1, VAR_2, VAR_0);
  FUNC_4(VAR_1);
 }

 FUNC_1(VAR_1, VAR_2, "exit_bfqq: %p, %d", VAR_2, VAR_2->ref);

 FUNC_2(VAR_2);

 FUNC_3(VAR_2);
}
