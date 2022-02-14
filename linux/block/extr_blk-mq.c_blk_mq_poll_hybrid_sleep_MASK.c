
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {unsigned int poll_nsec; } ;
struct request {int rq_flags; } ;
struct hrtimer_sleeper {int timer; scalar_t__ task; } ;
struct blk_mq_hw_ctx {int dummy; } ;
typedef unsigned int ktime_t ;
typedef enum hrtimer_mode { ____Placeholder_hrtimer_mode } hrtimer_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct request_queue*,struct blk_mq_hw_ctx*,struct request*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct hrtimer_sleeper*,int ,int) ;
 int FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (struct hrtimer_sleeper*,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static bool FUNC_11(struct request_queue *VAR_8,
         struct blk_mq_hw_ctx *VAR_9,
         struct request *VAR_10)
{
 struct hrtimer_sleeper VAR_11;
 enum hrtimer_mode VAR_12;
 unsigned int VAR_13;
 ktime_t VAR_14;

 if (VAR_10->rq_flags & VAR_4)
  return 0;







 if (VAR_8->poll_nsec > 0)
  VAR_13 = VAR_8->poll_nsec;
 else
  VAR_13 = FUNC_1(VAR_8, VAR_9, VAR_10);

 if (!VAR_13)
  return 0;

 VAR_10->rq_flags |= VAR_4;





 VAR_14 = VAR_13;

 VAR_12 = VAR_2;
 FUNC_5(&VAR_11, VAR_0, VAR_12);
 FUNC_6(&VAR_11.timer, VAR_14);

 do {
  if (FUNC_2(VAR_10) == VAR_3)
   break;
  FUNC_9(VAR_6);
  FUNC_7(&VAR_11, VAR_12);
  if (VAR_11.task)
   FUNC_8();
  FUNC_4(&VAR_11.timer);
  VAR_12 = VAR_1;
 } while (VAR_11.task && !FUNC_10(VAR_7));

 FUNC_0(VAR_5);
 FUNC_3(&VAR_11.timer);
 return 1;
}
