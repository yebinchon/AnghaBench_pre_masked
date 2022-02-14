
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_queue {int ref; } ;
struct bfq_data {int root_group; } ;


 int FUNC_0 (struct bfq_data*,struct bfq_queue*,int ) ;
 int FUNC_1 (struct bfq_data*,char*,struct bfq_queue*) ;
 int FUNC_2 (struct bfq_data*,struct bfq_queue*,char*,struct bfq_queue*,int ) ;
 int FUNC_3 (struct bfq_queue*) ;

__attribute__((used)) static void FUNC_4(struct bfq_data *VAR_0,
     struct bfq_queue **VAR_1)
{
 struct bfq_queue *VAR_2 = *VAR_1;

 FUNC_1(VAR_0, "put_async_bfqq: %p", VAR_2);
 if (VAR_2) {
  FUNC_0(VAR_0, VAR_2, VAR_0->root_group);

  FUNC_2(VAR_0, VAR_2, "put_async_bfqq: putting %p, %d",
        VAR_2, VAR_2->ref);
  FUNC_3(VAR_2);
  *VAR_1 = ((void*)0);
 }
}
