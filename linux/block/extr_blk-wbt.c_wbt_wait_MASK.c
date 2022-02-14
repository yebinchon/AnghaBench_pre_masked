
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_wb {int cb; int last_issue; } ;
struct rq_qos {int dummy; } ;
struct bio {int bi_opf; } ;
typedef enum wbt_flags { ____Placeholder_wbt_flags } wbt_flags ;


 struct rq_wb* FUNC_0 (struct rq_qos*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rq_wb*,int,int ) ;
 int FUNC_2 (struct rq_wb*,struct bio*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rq_wb*) ;
 int FUNC_5 (struct rq_wb*,int *) ;

__attribute__((used)) static void FUNC_6(struct rq_qos *VAR_2, struct bio *VAR_3)
{
 struct rq_wb *VAR_4 = FUNC_0(VAR_2);
 enum wbt_flags VAR_5;

 VAR_5 = FUNC_2(VAR_4, VAR_3);
 if (!(VAR_5 & VAR_1)) {
  if (VAR_5 & VAR_0)
   FUNC_5(VAR_4, &VAR_4->last_issue);
  return;
 }

 FUNC_1(VAR_4, VAR_5, VAR_3->bi_opf);

 if (!FUNC_3(VAR_4->cb))
  FUNC_4(VAR_4);
}
