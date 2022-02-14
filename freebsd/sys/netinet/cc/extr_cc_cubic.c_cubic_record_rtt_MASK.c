
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cubic {int min_rtt_ticks; int mean_rtt_ticks; int sum_rtt_ticks; int epoch_ack_count; } ;
struct cc_var {struct cubic* cc_data; } ;


 int FUNC_0 (struct cc_var*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(struct cc_var *VAR_5)
{
 struct cubic *VAR_6;
 int VAR_7;


 if (FUNC_0(VAR_5, VAR_3) >= VAR_0) {
  VAR_6 = VAR_5->cc_data;
  VAR_7 = FUNC_0(VAR_5, VAR_4) / VAR_2;
  if ((VAR_7 < VAR_6->min_rtt_ticks ||
      VAR_6->min_rtt_ticks == VAR_1)) {
   VAR_6->min_rtt_ticks = FUNC_1(1, VAR_7);







   if (VAR_6->min_rtt_ticks >
       VAR_6->mean_rtt_ticks)
    VAR_6->mean_rtt_ticks =
        VAR_6->min_rtt_ticks;
  }


  VAR_6->sum_rtt_ticks += VAR_7;
  VAR_6->epoch_ack_count++;
 }
}
