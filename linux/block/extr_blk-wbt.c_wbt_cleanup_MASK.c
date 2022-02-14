
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_wb {int dummy; } ;
struct rq_qos {int dummy; } ;
struct bio {int dummy; } ;
typedef enum wbt_flags { ____Placeholder_wbt_flags } wbt_flags ;


 struct rq_wb* FUNC_0 (struct rq_qos*) ;
 int FUNC_1 (struct rq_qos*,int) ;
 int FUNC_2 (struct rq_wb*,struct bio*) ;

__attribute__((used)) static void FUNC_3(struct rq_qos *VAR_0, struct bio *VAR_1)
{
 struct rq_wb *VAR_2 = FUNC_0(VAR_0);
 enum wbt_flags VAR_3 = FUNC_2(VAR_2, VAR_1);
 FUNC_1(VAR_0, VAR_3);
}
