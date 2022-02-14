
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tcp_seq ;
struct tcpopt {int to_flags; int to_nsacks; scalar_t__ to_sacks; } ;
struct TYPE_2__ {scalar_t__ sacked_bytes; scalar_t__ last_sack_ack; scalar_t__ sack_bytes_rexmit; } ;
struct tcpcb {scalar_t__ snd_una; scalar_t__ snd_max; scalar_t__ snd_fack; TYPE_1__ sackhint; int snd_holes; int t_inpcb; } ;
struct sackhole {scalar_t__ end; scalar_t__ start; scalar_t__ rxmit; } ;
struct sackblk {scalar_t__ start; scalar_t__ end; } ;
typedef int sack ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 void* FUNC_6 (scalar_t__,scalar_t__) ;
 void* FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int *) ;
 struct sackhole* FUNC_9 (int *,int ) ;
 struct sackhole* FUNC_10 (struct sackhole*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_11 (scalar_t__,struct sackblk*,int) ;
 void* FUNC_12 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 struct sackhole* FUNC_13 (struct tcpcb*,scalar_t__,scalar_t__,struct sackhole*) ;
 int FUNC_14 (struct tcpcb*,struct sackhole*) ;

int
FUNC_15(struct tcpcb *VAR_5, struct tcpopt *VAR_6, tcp_seq VAR_7)
{
 struct sackhole *VAR_8, *VAR_9;
 struct sackblk VAR_10, VAR_11[VAR_1 + 1], *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;

 FUNC_0(VAR_5->t_inpcb);

 VAR_15 = 0;
 VAR_16 = 0;




 if (FUNC_5(VAR_5->snd_una, VAR_7) && !FUNC_8(&VAR_5->snd_holes)) {
  VAR_11[VAR_15].start = VAR_5->snd_una;
  VAR_11[VAR_15++].end = VAR_7;
 }




 if (VAR_6->to_flags & VAR_2) {
  VAR_5->sackhint.sacked_bytes = 0;
  for (VAR_13 = 0; VAR_13 < VAR_6->to_nsacks; VAR_13++) {
   FUNC_11((VAR_6->to_sacks + VAR_13 * VAR_0),
       &VAR_10, sizeof(VAR_10));
   VAR_10.start = FUNC_12(VAR_10.start);
   VAR_10.end = FUNC_12(VAR_10.end);
   if (FUNC_3(VAR_10.end, VAR_10.start) &&
       FUNC_3(VAR_10.start, VAR_5->snd_una) &&
       FUNC_3(VAR_10.start, VAR_7) &&
       FUNC_5(VAR_10.start, VAR_5->snd_max) &&
       FUNC_3(VAR_10.end, VAR_5->snd_una) &&
       FUNC_4(VAR_10.end, VAR_5->snd_max)) {
    VAR_11[VAR_15++] = VAR_10;
    VAR_5->sackhint.sacked_bytes +=
        (VAR_10.end-VAR_10.start);
   }
  }
 }




 if (VAR_15 == 0)
  return (VAR_16);






 for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
  for (VAR_14 = VAR_13 + 1; VAR_14 < VAR_15; VAR_14++) {
   if (FUNC_3(VAR_11[VAR_13].end, VAR_11[VAR_14].end)) {
    VAR_10 = VAR_11[VAR_13];
    VAR_11[VAR_13] = VAR_11[VAR_14];
    VAR_11[VAR_14] = VAR_10;
   }
  }
 }
 if (FUNC_8(&VAR_5->snd_holes))







  VAR_5->snd_fack = FUNC_6(VAR_5->snd_una, VAR_7);
 VAR_12 = &VAR_11[VAR_15 - 1];
 VAR_5->sackhint.last_sack_ack = VAR_12->end;
 if (FUNC_5(VAR_5->snd_fack, VAR_12->start)) {






  VAR_9 = FUNC_13(VAR_5, VAR_5->snd_fack,VAR_12->start,((void*)0));
  if (VAR_9 != ((void*)0)) {
   VAR_5->snd_fack = VAR_12->end;

   VAR_12--;
   VAR_16 = 1;
  } else {
   while (VAR_12 >= VAR_11 &&
          FUNC_5(VAR_5->snd_fack, VAR_12->start))
    VAR_12--;
   if (VAR_12 >= VAR_11 &&
       FUNC_5(VAR_5->snd_fack, VAR_12->end))
    VAR_5->snd_fack = VAR_12->end;
  }
 } else if (FUNC_5(VAR_5->snd_fack, VAR_12->end)) {

  VAR_5->snd_fack = VAR_12->end;
  VAR_16 = 1;
 }
 VAR_8 = FUNC_9(&VAR_5->snd_holes, VAR_3);




 while (VAR_12 >= VAR_11 && VAR_8 != ((void*)0)) {
  if (FUNC_2(VAR_12->start, VAR_8->end)) {




   VAR_12--;
   continue;
  }
  if (FUNC_4(VAR_12->end, VAR_8->start)) {




   VAR_8 = FUNC_10(VAR_8, VAR_3, VAR_4);
   continue;
  }
  VAR_5->sackhint.sack_bytes_rexmit -= (VAR_8->rxmit - VAR_8->start);
  FUNC_1(VAR_5->sackhint.sack_bytes_rexmit >= 0,
      ("sackhint bytes rtx >= 0"));
  VAR_16 = 1;
  if (FUNC_4(VAR_12->start, VAR_8->start)) {

   if (FUNC_2(VAR_12->end, VAR_8->end)) {

    VAR_9 = VAR_8;
    VAR_8 = FUNC_10(VAR_8, VAR_3, VAR_4);
    FUNC_14(VAR_5, VAR_9);





    continue;
   } else {

    VAR_8->start = VAR_12->end;
    VAR_8->rxmit = FUNC_6(VAR_8->rxmit, VAR_8->start);
   }
  } else {

   if (FUNC_2(VAR_12->end, VAR_8->end)) {

    VAR_8->end = VAR_12->start;
    VAR_8->rxmit = FUNC_7(VAR_8->rxmit, VAR_8->end);
   } else {




    VAR_9 = FUNC_13(VAR_5, VAR_12->end,
        VAR_8->end, VAR_8);
    if (VAR_9 != ((void*)0)) {
     if (FUNC_3(VAR_8->rxmit, VAR_9->rxmit)) {
      VAR_9->rxmit = VAR_8->rxmit;
      VAR_5->sackhint.sack_bytes_rexmit
          += (VAR_9->rxmit
          - VAR_9->start);
     }
     VAR_8->end = VAR_12->start;
     VAR_8->rxmit = FUNC_7(VAR_8->rxmit,
         VAR_8->end);
    }
   }
  }
  VAR_5->sackhint.sack_bytes_rexmit += (VAR_8->rxmit - VAR_8->start);





  if (FUNC_4(VAR_12->start, VAR_8->start))
   VAR_8 = FUNC_10(VAR_8, VAR_3, VAR_4);
  else
   VAR_12--;
 }
 return (VAR_16);
}
