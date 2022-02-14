
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_nat_assoc {int dummy; } ;
struct TYPE_2__ {struct sctp_nat_assoc* TimerQ; } ;
struct libalias {TYPE_1__ sctpNatTimer; struct sctp_nat_assoc* sctpTableGlobal; struct sctp_nat_assoc* sctpTableLocal; } ;


 int FUNC_0 (struct libalias*) ;
 struct sctp_nat_assoc* FUNC_1 (struct sctp_nat_assoc*) ;
 struct sctp_nat_assoc* FUNC_2 (struct sctp_nat_assoc*,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct sctp_nat_assoc*) ;
 int FUNC_6 (struct sctp_nat_assoc*) ;
 int VAR_2 ;

void FUNC_7(struct libalias *VAR_3)
{
 struct sctp_nat_assoc *VAR_4, *VAR_5;
 int VAR_6;

 FUNC_0(VAR_3);
 FUNC_3(VAR_0,
     FUNC_4("Removing SCTP NAT Instance\n"));
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_4 = FUNC_1(&VAR_3->sctpNatTimer.TimerQ[VAR_6]);
  while (VAR_4 != ((void*)0)) {
   FUNC_5(VAR_4);
   VAR_5 = FUNC_2(VAR_4, VAR_2);
   FUNC_6(VAR_4);
   VAR_4 = VAR_5;
  }
 }

 FUNC_6(VAR_3->sctpTableLocal);
 FUNC_6(VAR_3->sctpTableGlobal);
 FUNC_6(VAR_3->sctpNatTimer.TimerQ);
}
