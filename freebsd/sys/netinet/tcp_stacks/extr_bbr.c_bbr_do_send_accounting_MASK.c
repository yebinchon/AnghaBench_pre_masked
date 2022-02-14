
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int t_flags; int t_sndtlpbyte; int t_stats; int t_sndrexmitpack; int t_sndtlppack; } ;
struct tcp_bbr {size_t rc_bbr_state; } ;
struct bbr_sendmap {int r_flags; size_t r_bbr_state; } ;
typedef int int32_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct tcpcb*,struct tcp_bbr*,struct bbr_sendmap*,int,int) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_3 (struct tcp_bbr*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static inline void
FUNC_7(struct tcpcb *VAR_14, struct tcp_bbr *VAR_15, struct bbr_sendmap *VAR_16, int32_t VAR_17, int32_t VAR_18)
{
 if (VAR_18) {
  FUNC_2(VAR_14, VAR_15, VAR_16, VAR_17, VAR_18);
  return;
 }
 if ((VAR_14->t_flags & VAR_2) && VAR_17 == 1) {

  FUNC_1(VAR_9);




 } else if (VAR_16) {
  if (VAR_16->r_flags & VAR_1) {
  } else {

   VAR_14->t_sndrexmitpack++;
   FUNC_1(VAR_11);
   FUNC_0(VAR_10, VAR_17);




  }




  FUNC_4(VAR_5[VAR_16->r_bbr_state], VAR_17);
  if (VAR_15->rc_bbr_state != VAR_0) {

   FUNC_4(VAR_6[VAR_15->rc_bbr_state], VAR_17);
  } else {





   FUNC_4(VAR_6[VAR_0], VAR_17);
   FUNC_4(VAR_6[(FUNC_3(VAR_15) + 5)], VAR_17);
  }

  FUNC_4(VAR_5[16], VAR_17);
  FUNC_4(VAR_6[16], VAR_17);

  FUNC_4(VAR_6[17], VAR_17);
  FUNC_4(VAR_5[17], VAR_17);

 } else {

  FUNC_1(VAR_8);
  FUNC_0(VAR_7, VAR_17);

  FUNC_4(VAR_6[17], VAR_17);
  FUNC_4(VAR_5[17], VAR_17);




 }
}
