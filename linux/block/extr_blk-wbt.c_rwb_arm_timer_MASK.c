
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_depth {int scale_step; } ;
struct rq_wb {int cur_win_nsec; int win_nsec; int cb; struct rq_depth rq_depth; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct rq_wb *VAR_0)
{
 struct rq_depth *VAR_1 = &VAR_0->rq_depth;

 if (VAR_1->scale_step > 0) {






  VAR_0->cur_win_nsec = FUNC_1(VAR_0->win_nsec << 4,
     FUNC_2((VAR_1->scale_step + 1) << 8));
 } else {




  VAR_0->cur_win_nsec = VAR_0->win_nsec;
 }

 FUNC_0(VAR_0->cb, VAR_0->cur_win_nsec);
}
