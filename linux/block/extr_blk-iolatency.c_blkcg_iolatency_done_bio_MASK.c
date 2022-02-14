
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct rq_wait {int wait; int inflight; } ;
struct rq_qos {int dummy; } ;
struct iolatency_grp {scalar_t__ cur_win_nsec; int window_start; scalar_t__ min_lat_nsec; struct rq_wait rq_wait; int blkiolat; } ;
struct blkcg_gq {struct blkcg_gq* parent; } ;
struct bio {scalar_t__ bi_status; int bi_issue; struct blkcg_gq* bi_blkg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct bio*,int ) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (int ) ;
 struct iolatency_grp* FUNC_7 (struct blkcg_gq*) ;
 int FUNC_8 (struct iolatency_grp*,scalar_t__) ;
 int FUNC_9 (struct iolatency_grp*,int *,scalar_t__,int) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct rq_qos *VAR_2, struct bio *VAR_3)
{
 struct blkcg_gq *VAR_4;
 struct rq_wait *VAR_5;
 struct iolatency_grp *VAR_6;
 u64 VAR_7;
 u64 VAR_8 = FUNC_11(FUNC_10());
 bool VAR_9 = FUNC_5(VAR_3);
 bool VAR_10 = 0;
 int VAR_11 = 0;

 VAR_4 = VAR_3->bi_blkg;
 if (!VAR_4 || !FUNC_4(VAR_3, VAR_0))
  return;

 VAR_6 = FUNC_7(VAR_3->bi_blkg);
 if (!VAR_6)
  return;

 VAR_10 = FUNC_6(VAR_6->blkiolat);
 if (!VAR_10)
  return;

 while (VAR_4 && VAR_4->parent) {
  VAR_6 = FUNC_7(VAR_4);
  if (!VAR_6) {
   VAR_4 = VAR_4->parent;
   continue;
  }
  VAR_5 = &VAR_6->rq_wait;

  VAR_11 = FUNC_3(&VAR_5->inflight);
  FUNC_0(VAR_11 < 0);




  if (VAR_6->min_lat_nsec && VAR_3->bi_status != VAR_1) {
   FUNC_9(VAR_6, &VAR_3->bi_issue, VAR_8,
           VAR_9);
   VAR_7 = FUNC_2(&VAR_6->window_start);
   if (VAR_8 > VAR_7 &&
       (VAR_8 - VAR_7) >= VAR_6->cur_win_nsec) {
    if (FUNC_1(&VAR_6->window_start,
          VAR_7, VAR_8) == VAR_7)
     FUNC_8(VAR_6, VAR_8);
   }
  }
  FUNC_12(&VAR_5->wait);
  VAR_4 = VAR_4->parent;
 }
}
