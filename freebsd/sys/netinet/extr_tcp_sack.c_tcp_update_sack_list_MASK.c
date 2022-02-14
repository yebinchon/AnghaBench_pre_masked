
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tcp_seq ;
struct tcpcb {int rcv_numsacks; scalar_t__ rcv_nxt; struct sackblk* sackblks; int t_inpcb; } ;
struct sackblk {scalar_t__ end; scalar_t__ start; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (struct sackblk*,struct sackblk*,int) ;

void
FUNC_7(struct tcpcb *VAR_1, tcp_seq VAR_2, tcp_seq VAR_3)
{






 struct sackblk VAR_4, VAR_5[VAR_0];
 int VAR_6, VAR_7, VAR_8;

 FUNC_0(VAR_1->t_inpcb);


 FUNC_1(FUNC_4(VAR_2, VAR_3), ("rcv_start <= rcv_end"));

 if ((VAR_2 == VAR_3) &&
     (VAR_1->rcv_numsacks >= 1) &&
     (VAR_3 == VAR_1->sackblks[0].end)) {

  VAR_4 = VAR_1->sackblks[0];
 } else {

  VAR_4.start = VAR_2;
  VAR_4.end = VAR_3;
 }






 VAR_7 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_1->rcv_numsacks; VAR_8++) {
  tcp_seq VAR_9 = VAR_1->sackblks[VAR_8].start;
  tcp_seq VAR_10 = VAR_1->sackblks[VAR_8].end;
  if (FUNC_2(VAR_9, VAR_10) || FUNC_4(VAR_9, VAR_1->rcv_nxt)) {



  } else if (FUNC_4(VAR_4.start, VAR_10) &&
      FUNC_2(VAR_4.end, VAR_9)) {
   if (VAR_4.start == VAR_10)
    VAR_4.start = VAR_9;
   else if (VAR_4.end == VAR_9)
    VAR_4.end = VAR_10;
   else {
    if (FUNC_5(VAR_4.start, VAR_9)) {
     tcp_seq VAR_11 = VAR_9;
     VAR_9 = VAR_4.start;
     VAR_4.start = VAR_11;
    }
    if (FUNC_3(VAR_4.end, VAR_10)) {
     tcp_seq VAR_12 = VAR_10;
     VAR_10 = VAR_4.end;
     VAR_4.end = VAR_12;
    }
    if ((VAR_4.start != VAR_9) ||
        (VAR_4.end != VAR_10)) {
     if ((VAR_7 >= 1) &&
        FUNC_2(VAR_5[VAR_7-1].start, VAR_9) &&
        FUNC_4(VAR_5[VAR_7-1].end, VAR_10))
      VAR_7--;
     VAR_5[VAR_7].start = VAR_9;
     VAR_5[VAR_7].end = VAR_10;
     VAR_7++;
    }
   }
  } else {



   if ((VAR_7 >= 1) &&
      FUNC_2(VAR_5[VAR_7-1].start, VAR_9) &&
      FUNC_4(VAR_5[VAR_7-1].end, VAR_10))
    VAR_7--;



   VAR_5[VAR_7].start = VAR_9;
   VAR_5[VAR_7].end = VAR_10;
   VAR_7++;
  }
 }




 VAR_6 = 0;
 if (FUNC_5(VAR_2, VAR_3)) {




  VAR_1->sackblks[0] = VAR_4;
  VAR_6 = 1;




  if (VAR_7 >= VAR_0)
   VAR_7--;
 }
 if ((VAR_2 == VAR_3) &&
     (VAR_2 == VAR_1->sackblks[0].end)) {
  VAR_6 = 1;
 }
 if (VAR_7 > 0) {



  FUNC_6(VAR_5, &VAR_1->sackblks[VAR_6],
        sizeof(struct sackblk) * VAR_7);
 }


 VAR_1->rcv_numsacks = VAR_6 + VAR_7;
}
