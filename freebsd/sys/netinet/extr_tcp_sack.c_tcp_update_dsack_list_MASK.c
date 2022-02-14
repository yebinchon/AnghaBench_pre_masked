
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tcp_seq ;
struct tcpcb {scalar_t__ rcv_nxt; int rcv_numsacks; struct sackblk* sackblks; TYPE_2__* t_inpcb; } ;
struct sackblk {scalar_t__ end; scalar_t__ start; } ;
struct TYPE_4__ {TYPE_1__* inp_socket; } ;
struct TYPE_3__ {int so_options; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int FUNC_7 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;

void
FUNC_8(struct tcpcb *VAR_3, tcp_seq VAR_4, tcp_seq VAR_5)
{
 struct sackblk VAR_6,VAR_7,VAR_8[VAR_1];
 int VAR_9, VAR_10, VAR_11, VAR_12;
 tcp_seq VAR_13, VAR_14;

 FUNC_0(VAR_3->t_inpcb);

 FUNC_1(FUNC_4(VAR_4, VAR_5), ("rcv_start < rcv_end"));

 if (VAR_3->t_inpcb->inp_socket->so_options & VAR_2) {
  FUNC_7(VAR_0, "\nDSACK update: %d..%d, rcv_nxt: %u\n",
  VAR_4, VAR_5, VAR_3->rcv_nxt);
 }

 if (FUNC_4(VAR_5, VAR_3->rcv_nxt) ||
     ((VAR_5 == VAR_3->rcv_nxt) &&
      (VAR_3->rcv_numsacks > 0 ) &&
      (VAR_3->sackblks[0].end == VAR_3->rcv_nxt))) {
  VAR_8[0].start = VAR_4;
  VAR_8[0].end = VAR_5;
 } else {
  VAR_8[0].start = VAR_8[0].end = 0;
 }

 VAR_6.start = VAR_6.end = 0;
 VAR_7.start = VAR_4;
 VAR_7.end = VAR_5;
 VAR_12 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_3->rcv_numsacks; VAR_9++) {
  VAR_13 = VAR_3->sackblks[VAR_9].start;
  VAR_14 = VAR_3->sackblks[VAR_9].end;
  if (FUNC_4(VAR_5, VAR_13)) {

   continue;
  }
  if (FUNC_2(VAR_4, VAR_14)) {

   continue;
  }
  if (FUNC_2(VAR_3->rcv_nxt, VAR_14)) {
   if ((FUNC_5(VAR_4, VAR_13) != FUNC_6(VAR_5, VAR_14)) &&
       (FUNC_2(VAR_6.start, FUNC_5(VAR_4, VAR_13)) ||
       (VAR_6.start == VAR_6.end))) {
    VAR_6.start = FUNC_5(VAR_4, VAR_13);
    VAR_6.end = FUNC_6(VAR_5, VAR_14);
   }
   continue;
  }
  if (((VAR_6.start == VAR_6.end) ||
       FUNC_4(VAR_13, VAR_6.start)) &&
       (FUNC_2(VAR_14, VAR_4) &&
        FUNC_3(VAR_13, VAR_5))) {
   VAR_6.start = VAR_13;
   VAR_6.end = VAR_14;
  }
  VAR_7.start = FUNC_6(VAR_7.start, VAR_13);
  VAR_7.end = FUNC_5(VAR_7.end, VAR_14);
  if ((VAR_7.start == VAR_13) &&
      (VAR_7.end == VAR_14))
   VAR_12 = 1;
 }
 if (FUNC_4(VAR_6.start, VAR_6.end)) {

  VAR_8[0].start = FUNC_5(VAR_4, VAR_6.start);
  VAR_8[0].end = FUNC_6(VAR_5, VAR_6.end);
 }
 VAR_11 = 1;




 if ((FUNC_4(VAR_3->rcv_nxt, VAR_7.end) &&
     !((VAR_7.start == VAR_8[0].start) &&
     (VAR_7.end == VAR_8[0].end))) ||
     VAR_12 == 1) {
  VAR_8[VAR_11].start = VAR_7.start;
  VAR_8[VAR_11++].end = VAR_7.end;
 }
 for (VAR_10 = 0; (VAR_10 < VAR_3->rcv_numsacks) && (VAR_11 < VAR_1); VAR_10++) {
  if (((FUNC_4(VAR_3->sackblks[VAR_10].end, VAR_7.start) ||
        FUNC_2(VAR_3->sackblks[VAR_10].start, VAR_7.end)) &&
      (FUNC_2(VAR_3->sackblks[VAR_10].start, VAR_3->rcv_nxt))))
  VAR_8[VAR_11++] = VAR_3->sackblks[VAR_10];
 }
 VAR_10 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {

  if (FUNC_4(VAR_8[VAR_9].start, VAR_8[VAR_9].end)) {
   VAR_3->sackblks[VAR_10++] = VAR_8[VAR_9];
  }
 }
 VAR_3->rcv_numsacks = VAR_10;
}
