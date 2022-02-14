
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_3__ {scalar_t__ tv_sec; int tv_usec; } ;
struct sctp_stream_queue_pending {int act_flags; scalar_t__ timetolive; int sinfo_flags; TYPE_1__ ts; } ;





 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*,struct timeval*) ;

__attribute__((used)) static void
FUNC_5(struct sctp_stream_queue_pending *VAR_2)
{




 if (FUNC_0(VAR_2->sinfo_flags)) {
  VAR_2->act_flags |= FUNC_1(VAR_2->sinfo_flags);
 } else if (VAR_2->timetolive > 0) {
  VAR_2->sinfo_flags |= VAR_1;
  VAR_2->act_flags |= FUNC_1(VAR_2->sinfo_flags);
 } else {
  return;
 }
 switch (FUNC_1(VAR_2->sinfo_flags)) {
 case 130:




  VAR_2->ts.tv_sec = VAR_2->timetolive;
  VAR_2->ts.tv_usec = 0;
  break;
 case 128:
  {
   struct timeval VAR_3;

   (void)FUNC_3(&VAR_2->ts);
   VAR_3.tv_sec = VAR_2->timetolive / 1000;
   VAR_3.tv_usec = (VAR_2->timetolive * 1000) % 1000000;




   FUNC_4(&VAR_2->ts, &VAR_3);
  }
  break;
 case 129:




  VAR_2->ts.tv_sec = VAR_2->timetolive;
  VAR_2->ts.tv_usec = 0;
  break;
 default:
  FUNC_2(VAR_0,
      "Unknown PR_SCTP policy %u.\n",
      FUNC_1(VAR_2->sinfo_flags));
  break;
 }
}
