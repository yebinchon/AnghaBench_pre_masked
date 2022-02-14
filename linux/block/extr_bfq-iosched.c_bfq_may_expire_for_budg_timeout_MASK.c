
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int budget; } ;
struct bfq_queue {TYPE_1__ entity; int bfqd; } ;


 int FUNC_0 (struct bfq_queue*) ;
 scalar_t__ FUNC_1 (struct bfq_queue*) ;
 int FUNC_2 (struct bfq_queue*) ;
 int FUNC_3 (int ,struct bfq_queue*,char*,int ,int,scalar_t__) ;

__attribute__((used)) static bool FUNC_4(struct bfq_queue *VAR_0)
{
 FUNC_3(VAR_0->bfqd, VAR_0,
  "may_budget_timeout: wait_request %d left %d timeout %d",
  FUNC_2(VAR_0),
   FUNC_0(VAR_0) >= VAR_0->entity.budget / 3,
  FUNC_1(VAR_0));

 return (!FUNC_2(VAR_0) ||
  FUNC_0(VAR_0) >= VAR_0->entity.budget / 3)
  &&
  FUNC_1(VAR_0);
}
