
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctpTimerQ {int dummy; } ;
struct sctpNatTableL {int dummy; } ;
struct sctpNatTableG {int dummy; } ;
struct TYPE_2__ {scalar_t__ cur_loc; int loc_time; int * TimerQ; } ;
struct libalias {int sctpNatTableSize; scalar_t__ sctpLinkCount; TYPE_1__ sctpNatTimer; int timeStamp; int * sctpTableGlobal; int * sctpTableLocal; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;
 void* FUNC_3 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_4(struct libalias *VAR_4)
{

 int VAR_5;
 VAR_4->sctpNatTableSize = VAR_2;
 FUNC_1(VAR_0,
     FUNC_2("Initialising SCTP NAT Instance (hash_table_size:%d)\n", VAR_4->sctpNatTableSize));
 VAR_4->sctpTableLocal = FUNC_3(VAR_4->sctpNatTableSize, sizeof(struct sctpNatTableL));
 VAR_4->sctpTableGlobal = FUNC_3(VAR_4->sctpNatTableSize, sizeof(struct sctpNatTableG));
 VAR_4->sctpNatTimer.TimerQ = FUNC_3(VAR_1, sizeof(struct sctpTimerQ));

 for (VAR_5 = 0; VAR_5 < VAR_4->sctpNatTableSize; VAR_5++) {
  FUNC_0(&VAR_4->sctpTableLocal[VAR_5]);
  FUNC_0(&VAR_4->sctpTableGlobal[VAR_5]);
 }


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_0(&VAR_4->sctpNatTimer.TimerQ[VAR_5]);



 VAR_4->sctpNatTimer.loc_time=VAR_4->timeStamp;

 VAR_4->sctpNatTimer.cur_loc = 0;
 VAR_4->sctpLinkCount = 0;
}
