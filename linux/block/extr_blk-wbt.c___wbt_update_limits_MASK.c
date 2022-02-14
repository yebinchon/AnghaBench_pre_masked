
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_depth {int scaled_max; scalar_t__ scale_step; } ;
struct rq_wb {struct rq_depth rq_depth; } ;


 int FUNC_0 (struct rq_wb*) ;
 int FUNC_1 (struct rq_depth*) ;
 int FUNC_2 (struct rq_wb*) ;

__attribute__((used)) static void FUNC_3(struct rq_wb *VAR_0)
{
 struct rq_depth *VAR_1 = &VAR_0->rq_depth;

 VAR_1->scale_step = 0;
 VAR_1->scaled_max = 0;

 FUNC_1(VAR_1);
 FUNC_0(VAR_0);

 FUNC_2(VAR_0);
}
