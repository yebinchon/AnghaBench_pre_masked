
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_nat_assoc {int exp; int exp_loc; } ;
struct TYPE_2__ {int loc_time; int cur_loc; int * TimerQ; } ;
struct libalias {TYPE_1__ sctpNatTimer; } ;


 int FUNC_0 (struct libalias*) ;
 int FUNC_1 (int *,struct sctp_nat_assoc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct libalias *VAR_2, struct sctp_nat_assoc *VAR_3)
{
 int VAR_4;
 FUNC_0(VAR_2);
 VAR_4 = VAR_3->exp - VAR_2->sctpNatTimer.loc_time + VAR_2->sctpNatTimer.cur_loc;
 if (VAR_4 >= VAR_0)
  VAR_4 -= VAR_0;
 FUNC_1(&VAR_2->sctpNatTimer.TimerQ[VAR_4], VAR_3, VAR_1);
 VAR_3->exp_loc = VAR_4;
}
