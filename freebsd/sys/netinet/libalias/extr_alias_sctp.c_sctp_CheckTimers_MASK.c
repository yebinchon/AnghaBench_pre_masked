
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_nat_assoc {scalar_t__ exp; scalar_t__ state; int g_vtag; } ;
struct TYPE_2__ {scalar_t__ loc_time; size_t cur_loc; int * TimerQ; } ;
struct libalias {scalar_t__ timeStamp; TYPE_1__ sctpNatTimer; } ;


 int FUNC_0 (struct libalias*) ;
 int FUNC_1 (int *) ;
 struct sctp_nat_assoc* FUNC_2 (int *) ;
 int FUNC_3 (struct sctp_nat_assoc*,int ) ;
 int FUNC_4 (struct libalias*,struct sctp_nat_assoc*) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct sctp_nat_assoc*) ;
 int FUNC_7 (char*,int ,scalar_t__,int ) ;
 int FUNC_8 (struct libalias*,struct sctp_nat_assoc*) ;
 int FUNC_9 (struct sctp_nat_assoc*) ;
 int VAR_5 ;

void
FUNC_10(struct libalias *VAR_6)
{
 struct sctp_nat_assoc *VAR_7;

 FUNC_0(VAR_6);
 while(VAR_6->timeStamp >= VAR_6->sctpNatTimer.loc_time) {
  while (!FUNC_1(&VAR_6->sctpNatTimer.TimerQ[VAR_6->sctpNatTimer.cur_loc])) {
   VAR_7 = FUNC_2(&VAR_6->sctpNatTimer.TimerQ[VAR_6->sctpNatTimer.cur_loc]);

   FUNC_3(VAR_7, VAR_5);
   if (VAR_6->timeStamp >= VAR_7->exp) {
    FUNC_5(((VAR_7->state == VAR_0) ? (VAR_1) : (VAR_2)),
        FUNC_7("Timer Expired", VAR_7->g_vtag, VAR_7->state, VAR_4));
    FUNC_4(VAR_6, VAR_7);
    FUNC_6(VAR_7);
    FUNC_9(VAR_7);
   } else {
    FUNC_8(VAR_6, VAR_7);
   }
  }

  ++VAR_6->sctpNatTimer.loc_time;
  if (++VAR_6->sctpNatTimer.cur_loc >= VAR_3)
   VAR_6->sctpNatTimer.cur_loc = 0;
 }
}
