
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_qos {int dummy; } ;
struct iolatency_grp {int dummy; } ;
struct blkcg_gq {struct blkcg_gq* parent; } ;
struct blk_iolatency {int timer; } ;
struct bio {int bi_opf; struct blkcg_gq* bi_blkg; } ;


 struct blk_iolatency* FUNC_0 (struct rq_qos*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rq_qos*,struct iolatency_grp*,int,int) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct blk_iolatency*) ;
 struct iolatency_grp* FUNC_4 (struct blkcg_gq*) ;
 int FUNC_5 (struct iolatency_grp*) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct rq_qos *VAR_3, struct bio *VAR_4)
{
 struct blk_iolatency *VAR_5 = FUNC_0(VAR_3);
 struct blkcg_gq *VAR_6 = VAR_4->bi_blkg;
 bool VAR_7 = FUNC_2(VAR_4);

 if (!FUNC_3(VAR_5))
  return;

 while (VAR_6 && VAR_6->parent) {
  struct iolatency_grp *VAR_8 = FUNC_4(VAR_6);
  if (!VAR_8) {
   VAR_6 = VAR_6->parent;
   continue;
  }

  FUNC_5(VAR_8);
  FUNC_1(VAR_3, VAR_8, VAR_7,
         (VAR_4->bi_opf & VAR_1) == VAR_1);
  VAR_6 = VAR_6->parent;
 }
 if (!FUNC_7(&VAR_5->timer))
  FUNC_6(&VAR_5->timer, VAR_2 + VAR_0);
}
