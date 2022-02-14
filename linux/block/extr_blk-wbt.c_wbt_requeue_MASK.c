
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_wb {struct request* sync_cookie; scalar_t__ sync_issue; } ;
struct rq_qos {int dummy; } ;
struct request {int dummy; } ;


 struct rq_wb* FUNC_0 (struct rq_qos*) ;
 int FUNC_1 (struct rq_wb*) ;

__attribute__((used)) static void FUNC_2(struct rq_qos *VAR_0, struct request *VAR_1)
{
 struct rq_wb *VAR_2 = FUNC_0(VAR_0);
 if (!FUNC_1(VAR_2))
  return;
 if (VAR_1 == VAR_2->sync_cookie) {
  VAR_2->sync_issue = 0;
  VAR_2->sync_cookie = ((void*)0);
 }
}
