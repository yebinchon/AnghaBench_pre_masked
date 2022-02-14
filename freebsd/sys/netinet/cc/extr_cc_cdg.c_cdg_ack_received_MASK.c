
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct ertt {int flags; int rtt; } ;
struct cdg {scalar_t__ sample_q_size; long max_qtrend; long min_qtrend; scalar_t__ consec_cong_cnt; scalar_t__ shadow_w; scalar_t__ maxrtt_in_prevrtt; scalar_t__ maxrtt_in_rtt; scalar_t__ minrtt_in_rtt; scalar_t__ minrtt_in_prevrtt; int queue_state; } ;
struct cc_var {struct cdg* cc_data; } ;


 scalar_t__ FUNC_0 (struct cc_var*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (struct cdg*,long,long) ;
 int FUNC_3 (struct cc_var*,int ) ;
 int FUNC_4 (struct cc_var*,int) ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 int VAR_12 ;
 int FUNC_8 (long) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_10(struct cc_var *VAR_16, uint16_t VAR_17)
{
 struct cdg *VAR_18;
 struct ertt *VAR_19;
 long VAR_20, VAR_21;
 int VAR_22, VAR_23, VAR_24;

 VAR_18 = VAR_16->cc_data;
 VAR_19 = (struct ertt *)FUNC_7(FUNC_0(VAR_16, VAR_12), VAR_11);
 VAR_23 = VAR_19->flags & VAR_7;
 VAR_22 = 0;
 VAR_18->maxrtt_in_rtt = FUNC_5(VAR_19->rtt, VAR_18->maxrtt_in_rtt);
 VAR_18->minrtt_in_rtt = FUNC_6(VAR_19->rtt, VAR_18->minrtt_in_rtt);

 if (VAR_23) {
  VAR_24 = (FUNC_0(VAR_16, VAR_13) <= FUNC_0(VAR_16, VAR_14));






  if (VAR_18->maxrtt_in_prevrtt) {
   VAR_20 = ((long)(VAR_18->maxrtt_in_rtt -
       VAR_18->maxrtt_in_prevrtt) << VAR_6 );
   VAR_21 = ((long)(VAR_18->minrtt_in_rtt -
       VAR_18->minrtt_in_prevrtt) << VAR_6 );

   if (VAR_18->sample_q_size == 0) {
    VAR_18->max_qtrend = VAR_20;
    VAR_18->min_qtrend = VAR_21;
   } else
    FUNC_2(VAR_18, VAR_20, VAR_21);


   if (VAR_24 && VAR_21 > 0)
    VAR_22 = FUNC_8(VAR_21);
   else if (VAR_18->min_qtrend > 0)
    VAR_22 = FUNC_8(VAR_18->min_qtrend);
   else if (VAR_24 && VAR_20 > 0)
    VAR_22 = FUNC_8(VAR_20);
   else if (VAR_18->max_qtrend > 0)
    VAR_22 = FUNC_8(VAR_18->max_qtrend);


   if (VAR_18->min_qtrend > 0 &&
       VAR_18->max_qtrend <= 0) {
    VAR_18->queue_state = VAR_4;
   } else if (VAR_18->min_qtrend >= 0 &&
       VAR_18->max_qtrend < 0) {
    VAR_18->queue_state = VAR_2;
    VAR_18->shadow_w = 0;
   } else if (VAR_18->min_qtrend > 0 &&
       VAR_18->max_qtrend > 0) {
    VAR_18->queue_state = VAR_5;
   } else if (VAR_18->min_qtrend < 0 &&
       VAR_18->max_qtrend < 0) {
    VAR_18->queue_state = VAR_3;
   }

   if (VAR_18->min_qtrend < 0 ||
       VAR_18->max_qtrend < 0)
    VAR_18->consec_cong_cnt = 0;
  }

  VAR_18->minrtt_in_prevrtt = VAR_18->minrtt_in_rtt;
  VAR_18->minrtt_in_rtt = VAR_8;
  VAR_18->maxrtt_in_prevrtt = VAR_18->maxrtt_in_rtt;
  VAR_18->maxrtt_in_rtt = 0;
  VAR_19->flags &= ~VAR_7;
 }

 if (VAR_22) {
  VAR_18->consec_cong_cnt++;
  if (!FUNC_1(FUNC_0(VAR_16, VAR_15))) {
   if (VAR_18->consec_cong_cnt <= VAR_9)
    FUNC_3(VAR_16, VAR_1);
   else






    if (VAR_18->consec_cong_cnt >=
        VAR_9 + VAR_10)
     VAR_18->consec_cong_cnt = 0;


   VAR_18->maxrtt_in_prevrtt = 0;




   VAR_18->shadow_w = FUNC_9(FUNC_0(VAR_16, VAR_13),
       VAR_18->shadow_w);
  }
 } else if (VAR_17 == VAR_0)
  FUNC_4(VAR_16, VAR_23);
}
