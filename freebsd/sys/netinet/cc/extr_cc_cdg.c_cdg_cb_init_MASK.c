
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdg {int qdiffmax_q; int qdiffmin_q; scalar_t__ num_samples; int sample_q_size; scalar_t__ consec_cong_cnt; scalar_t__ rtt_count; scalar_t__ window_incr; scalar_t__ minrtt_in_prevrtt; int minrtt_in_rtt; scalar_t__ maxrtt_in_prevrtt; scalar_t__ maxrtt_in_rtt; int queue_state; scalar_t__ min_qtrend; scalar_t__ max_qtrend; scalar_t__ shadow_w; } ;
struct cc_var {struct cdg* cc_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 struct cdg* FUNC_1 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct cc_var *VAR_6)
{
 struct cdg *VAR_7;

 VAR_7 = FUNC_1(sizeof(struct cdg), VAR_3, VAR_4);
 if (VAR_7 == ((void*)0))
  return (VAR_1);

 VAR_7->shadow_w = 0;
 VAR_7->max_qtrend = 0;
 VAR_7->min_qtrend = 0;
 VAR_7->queue_state = VAR_0;
 VAR_7->maxrtt_in_rtt = 0;
 VAR_7->maxrtt_in_prevrtt = 0;
 VAR_7->minrtt_in_rtt = VAR_2;
 VAR_7->minrtt_in_prevrtt = 0;
 VAR_7->window_incr = 0;
 VAR_7->rtt_count = 0;
 VAR_7->consec_cong_cnt = 0;
 VAR_7->sample_q_size = VAR_5;
 VAR_7->num_samples = 0;
 FUNC_0(&VAR_7->qdiffmin_q);
 FUNC_0(&VAR_7->qdiffmax_q);

 VAR_6->cc_data = VAR_7;

 return (0);
}
