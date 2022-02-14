
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_data {scalar_t__ bfq_user_max_budget; int bfq_max_budget; } ;


 int FUNC_0 (struct bfq_data*) ;
 int FUNC_1 (struct bfq_data*,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct bfq_data *VAR_0)
{
 if (VAR_0->bfq_user_max_budget == 0) {
  VAR_0->bfq_max_budget =
   FUNC_0(VAR_0);
  FUNC_1(VAR_0, "new max_budget = %d", VAR_0->bfq_max_budget);
 }
}
