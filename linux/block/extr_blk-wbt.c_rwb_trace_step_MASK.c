
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rq_depth {int max_depth; int scale_step; } ;
struct TYPE_4__ {TYPE_1__* q; } ;
struct rq_wb {int wb_normal; int wb_background; int cur_win_nsec; struct rq_depth rq_depth; TYPE_2__ rqos; } ;
struct backing_dev_info {int dummy; } ;
struct TYPE_3__ {struct backing_dev_info* backing_dev_info; } ;


 int FUNC_0 (struct backing_dev_info*,char const*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct rq_wb *VAR_0, const char *VAR_1)
{
 struct backing_dev_info *VAR_2 = VAR_0->rqos.q->backing_dev_info;
 struct rq_depth *VAR_3 = &VAR_0->rq_depth;

 FUNC_0(VAR_2, VAR_1, VAR_3->scale_step, VAR_0->cur_win_nsec,
   VAR_0->wb_background, VAR_0->wb_normal, VAR_3->max_depth);
}
