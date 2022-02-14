
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_wb {struct request* sync_cookie; int last_comp; scalar_t__ sync_issue; } ;
struct rq_qos {int dummy; } ;
struct request {int dummy; } ;


 struct rq_wb* FUNC_0 (struct rq_qos*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rq_qos*,int ) ;
 int FUNC_3 (struct rq_wb*,int *) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (struct request*) ;
 scalar_t__ FUNC_6 (struct request*) ;
 int FUNC_7 (struct request*) ;

__attribute__((used)) static void FUNC_8(struct rq_qos *VAR_0, struct request *VAR_1)
{
 struct rq_wb *VAR_2 = FUNC_0(VAR_0);

 if (!FUNC_7(VAR_1)) {
  if (VAR_2->sync_cookie == VAR_1) {
   VAR_2->sync_issue = 0;
   VAR_2->sync_cookie = ((void*)0);
  }

  if (FUNC_6(VAR_1))
   FUNC_3(VAR_2, &VAR_2->last_comp);
 } else {
  FUNC_1(VAR_1 == VAR_2->sync_cookie);
  FUNC_2(VAR_0, FUNC_5(VAR_1));
 }
 FUNC_4(VAR_1);
}
