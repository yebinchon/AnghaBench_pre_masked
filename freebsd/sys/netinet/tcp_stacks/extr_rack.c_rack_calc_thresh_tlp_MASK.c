
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpcb {int snd_max; int snd_una; int t_rxtcur; } ;
struct TYPE_2__ {int rc_tlp_threshold; int rc_sacked; int rc_holes_rxt; } ;
struct tcp_rack {scalar_t__ rack_tlp_threshold_use; TYPE_1__ r_ctl; } ;
struct rack_sendmap {int r_end; int r_start; int r_rtr_cnt; int* r_tim_lastsent; } ;


 struct rack_sendmap* FUNC_0 (struct rack_sendmap*,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct tcpcb*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static uint32_t
FUNC_5(struct tcpcb *VAR_11, struct tcp_rack *VAR_12,
       struct rack_sendmap *VAR_13, uint32_t VAR_14)
{
 struct rack_sendmap *VAR_15;
 uint32_t VAR_16, VAR_17;
 int VAR_18;

 if (VAR_14 == 0)
  VAR_14 = 1;
 if (VAR_12->r_ctl.rc_tlp_threshold)
  VAR_16 = VAR_14 + (VAR_14 / VAR_12->r_ctl.rc_tlp_threshold);
 else
  VAR_16 = (VAR_14 * 2);


 VAR_18 = FUNC_4(VAR_11);
 FUNC_3(VAR_5, 1);
 VAR_17 = VAR_13->r_end - VAR_13->r_start;
 if (VAR_12->rack_tlp_threshold_use == VAR_0) {

  if (((VAR_11->snd_max - VAR_11->snd_una) - VAR_12->r_ctl.rc_sacked + VAR_12->r_ctl.rc_holes_rxt) <= VAR_18) {
   uint32_t VAR_19;



   FUNC_3(VAR_9, 1);
   VAR_19 = VAR_14 + (VAR_14 / 2) + VAR_4;
   if (VAR_19 > VAR_16)
    VAR_16 = VAR_19;
  }
 } else if (VAR_12->rack_tlp_threshold_use == VAR_1) {

  VAR_15 = FUNC_0(VAR_13, VAR_6, VAR_3);
  if (VAR_15 && (VAR_17 <= VAR_18)) {




   uint32_t VAR_20 = 0;
   int VAR_21, VAR_22;

   FUNC_3(VAR_9, 1);
   VAR_21 = VAR_13->r_rtr_cnt - 1;
   VAR_22 = VAR_15->r_rtr_cnt - 1;
   if (FUNC_2(VAR_13->r_tim_lastsent[VAR_22], VAR_15->r_tim_lastsent[VAR_21])) {

    VAR_20 = VAR_13->r_tim_lastsent[VAR_21] - VAR_15->r_tim_lastsent[VAR_22];
   }
   VAR_16 += VAR_20;
  } else if (VAR_17 <= VAR_18) {



   uint32_t VAR_23;

   FUNC_3(VAR_10, 1);
   VAR_23 = VAR_14 + (VAR_14 / 2) + VAR_4;
   if (VAR_23 > VAR_16)
    VAR_16 = VAR_23;
  }
 } else if (VAR_12->rack_tlp_threshold_use == VAR_2) {

  if (VAR_17 <= VAR_18) {
   uint32_t VAR_24;



   FUNC_3(VAR_9, 1);
   VAR_24 = VAR_14 + (VAR_14 / 2) + VAR_4;
   if (VAR_24 > VAR_16)
    VAR_16 = VAR_24;
  }
 }

 if (VAR_16 > FUNC_1(VAR_11->t_rxtcur)) {
  VAR_16 = FUNC_1(VAR_11->t_rxtcur);
 }

 if (VAR_16 > VAR_7) {
  VAR_16 = VAR_7;
 }

 if (VAR_16 < VAR_8) {
  VAR_16 = VAR_8;
 }
 return (VAR_16);
}
