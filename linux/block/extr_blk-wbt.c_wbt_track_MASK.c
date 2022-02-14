
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_wb {int dummy; } ;
struct rq_qos {int dummy; } ;
struct request {int wbt_flags; } ;
struct bio {int dummy; } ;


 struct rq_wb* FUNC_0 (struct rq_qos*) ;
 int FUNC_1 (struct rq_wb*,struct bio*) ;

__attribute__((used)) static void FUNC_2(struct rq_qos *VAR_0, struct request *VAR_1, struct bio *VAR_2)
{
 struct rq_wb *VAR_3 = FUNC_0(VAR_0);
 VAR_1->wbt_flags |= FUNC_1(VAR_3, VAR_2);
}
