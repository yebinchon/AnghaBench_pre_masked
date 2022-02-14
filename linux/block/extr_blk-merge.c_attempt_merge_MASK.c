
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {scalar_t__ rq_disk; scalar_t__ write_hint; scalar_t__ ioprio; int rq_flags; int cmd_flags; scalar_t__ start_time_ns; int * bio; int __data_len; TYPE_1__* biotail; } ;
struct TYPE_2__ {int * bi_next; } ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (struct request*,struct request*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct request_queue*,struct request*,struct request*) ;
 int FUNC_7 (struct request_queue*,struct request*,struct request*) ;
 int FUNC_8 (struct request_queue*,struct request*,struct request*) ;
 scalar_t__ FUNC_9 (struct request*) ;
 scalar_t__ FUNC_10 (struct request*) ;
 int FUNC_11 (struct request*) ;

__attribute__((used)) static struct request *FUNC_12(struct request_queue *VAR_3,
         struct request *VAR_4, struct request *VAR_5)
{
 if (!FUNC_11(VAR_4) || !FUNC_11(VAR_5))
  return ((void*)0);

 if (FUNC_9(VAR_4) != FUNC_9(VAR_5))
  return ((void*)0);

 if (FUNC_10(VAR_4) != FUNC_10(VAR_5)
     || VAR_4->rq_disk != VAR_5->rq_disk)
  return ((void*)0);

 if (FUNC_9(VAR_4) == VAR_1 &&
     !FUNC_5(VAR_4->bio, VAR_5->bio))
  return ((void*)0);





 if (VAR_4->write_hint != VAR_5->write_hint)
  return ((void*)0);

 if (VAR_4->ioprio != VAR_5->ioprio)
  return ((void*)0);
 switch (FUNC_4(VAR_4, VAR_5)) {
 case 128:
  if (!FUNC_8(VAR_3, VAR_4, VAR_5))
   return ((void*)0);
  break;
 case 129:
  if (!FUNC_7(VAR_3, VAR_4, VAR_5))
   return ((void*)0);
  break;
 default:
  return ((void*)0);
 }







 if (((VAR_4->rq_flags | VAR_5->rq_flags) & VAR_2) ||
     (VAR_4->cmd_flags & VAR_0) !=
     (VAR_5->cmd_flags & VAR_0)) {
  FUNC_3(VAR_4);
  FUNC_3(VAR_5);
 }






 if (VAR_5->start_time_ns < VAR_4->start_time_ns)
  VAR_4->start_time_ns = VAR_5->start_time_ns;

 VAR_4->biotail->bi_next = VAR_5->bio;
 VAR_4->biotail = VAR_5->biotail;

 VAR_4->__data_len += FUNC_2(VAR_5);

 if (!FUNC_1(VAR_4))
  FUNC_6(VAR_3, VAR_4, VAR_5);




 FUNC_0(VAR_5);





 VAR_5->bio = ((void*)0);
 return VAR_5;
}
