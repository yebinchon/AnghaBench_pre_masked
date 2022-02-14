
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rq_depth {scalar_t__ scale_step; } ;
struct TYPE_4__ {TYPE_1__* q; } ;
struct rq_wb {scalar_t__ cur_win_nsec; scalar_t__ min_lat_nsec; struct rq_depth rq_depth; TYPE_2__ rqos; } ;
struct blk_rq_stat {scalar_t__ min; scalar_t__ nr_samples; } ;
struct backing_dev_info {int dummy; } ;
struct TYPE_3__ {struct backing_dev_info* backing_dev_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (struct rq_wb*) ;
 int FUNC_1 (struct blk_rq_stat*) ;
 int FUNC_2 (struct backing_dev_info*,scalar_t__) ;
 int FUNC_3 (struct backing_dev_info*,struct blk_rq_stat*) ;
 scalar_t__ FUNC_4 (struct rq_wb*) ;
 scalar_t__ FUNC_5 (struct rq_wb*) ;

__attribute__((used)) static int FUNC_6(struct rq_wb *VAR_6, struct blk_rq_stat *VAR_7)
{
 struct backing_dev_info *VAR_8 = VAR_6->rqos.q->backing_dev_info;
 struct rq_depth *VAR_9 = &VAR_6->rq_depth;
 u64 VAR_10;
 VAR_10 = FUNC_0(VAR_6);
 if (VAR_10 > VAR_6->cur_win_nsec ||
     (VAR_10 > VAR_6->min_lat_nsec && !VAR_7[VAR_4].nr_samples)) {
  FUNC_2(VAR_8, VAR_10);
  return VAR_0;
 }




 if (!FUNC_1(VAR_7)) {






  if (VAR_7[VAR_5].nr_samples || FUNC_4(VAR_6) ||
      FUNC_5(VAR_6))
   return VAR_3;
  return VAR_2;
 }




 if (VAR_7[VAR_4].min > VAR_6->min_lat_nsec) {
  FUNC_2(VAR_8, VAR_7[VAR_4].min);
  FUNC_3(VAR_8, VAR_7);
  return VAR_0;
 }

 if (VAR_9->scale_step)
  FUNC_3(VAR_8, VAR_7);

 return VAR_1;
}
