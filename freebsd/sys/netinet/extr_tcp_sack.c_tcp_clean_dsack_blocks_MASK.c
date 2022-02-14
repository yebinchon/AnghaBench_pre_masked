
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* tcp_seq ;
struct tcpcb {int rcv_numsacks; TYPE_1__* sackblks; int rcv_nxt; int t_inpcb; } ;
struct sackblk {void* end; void* start; } ;
struct TYPE_2__ {void* end; void* start; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (void*,void*) ;
 scalar_t__ FUNC_2 (void*,int ) ;
 int FUNC_3 (struct sackblk*,TYPE_1__*,int) ;

void
FUNC_4(struct tcpcb *VAR_1)
{
 struct sackblk VAR_2[VAR_0];
 int VAR_3, VAR_4;

 FUNC_0(VAR_1->t_inpcb);





 VAR_3 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_1->rcv_numsacks; VAR_4++) {
  tcp_seq VAR_5 = VAR_1->sackblks[VAR_4].start;
  tcp_seq VAR_6 = VAR_1->sackblks[VAR_4].end;
  if (FUNC_1(VAR_5, VAR_6) || FUNC_2(VAR_5, VAR_1->rcv_nxt)) {



   continue;
  }



  VAR_2[VAR_3].start = VAR_5;
  VAR_2[VAR_3].end = VAR_6;
  VAR_3++;
 }
 if (VAR_3 > 0) {



  FUNC_3(VAR_2, &VAR_1->sackblks[0],
        sizeof(struct sackblk) * VAR_3);
 }
 VAR_1->rcv_numsacks = VAR_3;
}
