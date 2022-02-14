
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_wb {int dummy; } ;
struct rq_wait {int dummy; } ;
struct rq_qos {int dummy; } ;
typedef enum wbt_flags { ____Placeholder_wbt_flags } wbt_flags ;


 struct rq_wb* FUNC_0 (struct rq_qos*) ;
 int VAR_0 ;
 struct rq_wait* FUNC_1 (struct rq_wb*,int) ;
 int FUNC_2 (struct rq_wb*,struct rq_wait*,int) ;

__attribute__((used)) static void FUNC_3(struct rq_qos *VAR_1, enum wbt_flags VAR_2)
{
 struct rq_wb *VAR_3 = FUNC_0(VAR_1);
 struct rq_wait *VAR_4;

 if (!(VAR_2 & VAR_0))
  return;

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 FUNC_2(VAR_3, VAR_4, VAR_2);
}
