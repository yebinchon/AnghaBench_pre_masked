
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long expires; } ;
struct request_queue {TYPE_1__ timeout; int rq_timeout; } ;
struct request {int deadline; int timeout; int rq_flags; struct request_queue* q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,unsigned long) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(struct request *VAR_3)
{
 struct request_queue *VAR_4 = VAR_3->q;
 unsigned long VAR_5;





 if (!VAR_3->timeout)
  VAR_3->timeout = VAR_4->rq_timeout;

 VAR_3->rq_flags &= ~VAR_1;

 VAR_5 = VAR_2 + VAR_3->timeout;
 FUNC_0(VAR_3->deadline, VAR_5);






 VAR_5 = FUNC_1(FUNC_3(VAR_5));

 if (!FUNC_5(&VAR_4->timeout) ||
     FUNC_4(VAR_5, VAR_4->timeout.expires)) {
  unsigned long VAR_6 = VAR_4->timeout.expires - VAR_5;
  if (!FUNC_5(&VAR_4->timeout) || (VAR_6 >= VAR_0 / 2))
   FUNC_2(&VAR_4->timeout, VAR_5);
 }

}
