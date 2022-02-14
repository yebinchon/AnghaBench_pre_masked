
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tcpcb {int t_maxseg; scalar_t__ t_srtt; int t_rxtcur; } ;
struct tcp_bbr {int rc_tlp_threshold; int rc_last_options; scalar_t__ rc_max_rto_sec; } ;
struct bbr_sendmap {int r_end; int r_start; int r_rtr_cnt; int* r_tim_lastsent; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bbr_sendmap* FUNC_0 (struct bbr_sendmap*,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct tcp_bbr*,int,int,int,int,struct bbr_sendmap*,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static uint32_t
FUNC_4(struct tcpcb *VAR_7, struct tcp_bbr *VAR_8,
    struct bbr_sendmap *VAR_9, uint32_t VAR_10,
    uint32_t VAR_11)
{
 uint32_t VAR_12, VAR_13, VAR_14, VAR_15;
 struct bbr_sendmap *VAR_16;

 if (VAR_10 == 0)
  VAR_10 = 1;
 if (VAR_8->rc_tlp_threshold)
  VAR_12 = VAR_10 + (VAR_10 / VAR_8->rc_tlp_threshold);
 else
  VAR_12 = (VAR_10 * 2);
 VAR_14 = VAR_7->t_maxseg - VAR_8->rc_last_options;

 VAR_13 = VAR_9->r_end - VAR_9->r_start;


 VAR_16 = FUNC_0(VAR_9, VAR_4, VAR_6);
 if (VAR_16 && (VAR_13 <= VAR_14)) {




  uint32_t VAR_17 = 0;
  int VAR_18, VAR_19;

  VAR_18 = VAR_9->r_rtr_cnt - 1;
  VAR_19 = VAR_16->r_rtr_cnt - 1;
  if (FUNC_2(VAR_9->r_tim_lastsent[VAR_19], VAR_16->r_tim_lastsent[VAR_18])) {

   VAR_17 = VAR_9->r_tim_lastsent[VAR_18] - VAR_16->r_tim_lastsent[VAR_19];
  }
  VAR_12 += VAR_17;
 } else if (VAR_13 <= VAR_14) {



  uint32_t VAR_20;

  VAR_20 = VAR_10 + (VAR_10 / 2) + VAR_3;
  if (VAR_20 > VAR_12)
   VAR_12 = VAR_20;
 }

 if (VAR_7->t_srtt == 0)
  VAR_15 = VAR_0;
 else
  VAR_15 = FUNC_1(VAR_7->t_rxtcur);

 FUNC_3(VAR_8, VAR_11, VAR_12, VAR_15, VAR_10, VAR_9, VAR_1);

 if (VAR_12 > VAR_15) {
  VAR_12 = VAR_15;
 }

 if (VAR_12 > (((uint32_t)VAR_8->rc_max_rto_sec) * VAR_2)) {
  VAR_12 = (((uint32_t)VAR_8->rc_max_rto_sec) * VAR_2);
 }

 if (VAR_12 < VAR_5) {
  VAR_12 = VAR_5;
 }
 return (VAR_12);
}
