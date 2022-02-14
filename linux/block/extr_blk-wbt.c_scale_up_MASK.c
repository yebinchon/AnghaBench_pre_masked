
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_wb {scalar_t__ unknown_cnt; int rq_depth; } ;


 int FUNC_0 (struct rq_wb*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rq_wb*,char*) ;
 int FUNC_3 (struct rq_wb*) ;

__attribute__((used)) static void FUNC_4(struct rq_wb *VAR_0)
{
 if (!FUNC_1(&VAR_0->rq_depth))
  return;
 FUNC_0(VAR_0);
 VAR_0->unknown_cnt = 0;
 FUNC_3(VAR_0);
 FUNC_2(VAR_0, "scale up");
}
