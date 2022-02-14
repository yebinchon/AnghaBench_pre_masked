
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_wb {scalar_t__ sync_issue; struct request* sync_cookie; } ;
struct rq_qos {int dummy; } ;
struct request {scalar_t__ io_start_time_ns; } ;


 struct rq_wb* FUNC_0 (struct rq_qos*) ;
 int FUNC_1 (struct rq_wb*) ;
 scalar_t__ FUNC_2 (struct request*) ;

__attribute__((used)) static void FUNC_3(struct rq_qos *VAR_0, struct request *VAR_1)
{
 struct rq_wb *VAR_2 = FUNC_0(VAR_0);

 if (!FUNC_1(VAR_2))
  return;
 if (FUNC_2(VAR_1) && !VAR_2->sync_issue) {
  VAR_2->sync_cookie = VAR_1;
  VAR_2->sync_issue = VAR_1->io_start_time_ns;
 }
}
