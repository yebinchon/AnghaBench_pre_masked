
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* q; } ;
struct rq_depth {scalar_t__ scale_step; } ;
struct rq_wb {int unknown_cnt; TYPE_2__ rqos; struct rq_depth rq_depth; } ;
struct blk_stat_callback {int stat; struct rq_wb* data; } ;
struct TYPE_3__ {int backing_dev_info; } ;






 int VAR_0 ;
 int FUNC_0 (struct rq_wb*,int ) ;
 int FUNC_1 (struct rq_wb*) ;
 int FUNC_2 (struct rq_wb*,int) ;
 int FUNC_3 (struct rq_wb*) ;
 int FUNC_4 (int ,int,scalar_t__,unsigned int) ;
 unsigned int FUNC_5 (struct rq_wb*) ;

__attribute__((used)) static void FUNC_6(struct blk_stat_callback *VAR_1)
{
 struct rq_wb *VAR_2 = VAR_1->data;
 struct rq_depth *VAR_3 = &VAR_2->rq_depth;
 unsigned int VAR_4 = FUNC_5(VAR_2);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_1->stat);

 FUNC_4(VAR_2->rqos.q->backing_dev_info, VAR_5, VAR_3->scale_step,
   VAR_4);






 switch (VAR_5) {
 case 131:
  FUNC_2(VAR_2, 1);
  break;
 case 130:
  FUNC_3(VAR_2);
  break;
 case 128:





  FUNC_3(VAR_2);
  break;
 case 129:
  if (++VAR_2->unknown_cnt < VAR_0)
   break;





  if (VAR_3->scale_step > 0)
   FUNC_3(VAR_2);
  else if (VAR_3->scale_step < 0)
   FUNC_2(VAR_2, 0);
  break;
 default:
  break;
 }




 if (VAR_3->scale_step || VAR_4)
  FUNC_1(VAR_2);
}
