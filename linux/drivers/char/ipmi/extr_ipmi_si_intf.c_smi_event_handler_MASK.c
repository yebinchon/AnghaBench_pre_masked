
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ irq; } ;
struct smi_info {scalar_t__ si_state; int got_attn; int timer_running; int si_timer; int * curr_msg; TYPE_2__ io; scalar_t__ supports_event_msg_buff; int req_events; int si_sm; TYPE_1__* handlers; } ;
typedef enum si_sm_result { ____Placeholder_si_sm_result } si_sm_result ;
struct TYPE_3__ {int (* event ) (int ,int) ;} ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_0 (struct smi_info*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct smi_info*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (struct smi_info*,int ) ;
 int FUNC_6 (struct smi_info*,int ) ;
 int FUNC_7 (struct smi_info*) ;
 int FUNC_8 (struct smi_info*) ;
 int FUNC_9 (struct smi_info*,unsigned char*,int) ;
 int FUNC_10 (struct smi_info*) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int) ;

__attribute__((used)) static enum si_sm_result FUNC_13(struct smi_info *VAR_14,
        int VAR_15)
{
 enum si_sm_result VAR_16;

restart:
 VAR_16 = VAR_14->handlers->event(VAR_14->si_sm, VAR_15);
 VAR_15 = 0;
 while (VAR_16 == VAR_6)
  VAR_16 = VAR_14->handlers->event(VAR_14->si_sm, 0);

 if (VAR_16 == VAR_9) {
  FUNC_6(VAR_14, VAR_11);

  FUNC_4(VAR_14);
  goto restart;
 } else if (VAR_16 == VAR_7) {
  FUNC_6(VAR_14, VAR_12);





  VAR_14->si_state = VAR_4;
  if (VAR_14->curr_msg != ((void*)0)) {





   FUNC_5(VAR_14, VAR_0);
  }
  goto restart;
 }





 if (VAR_16 == VAR_5 || VAR_14->got_attn) {
  unsigned char VAR_17[2];

  if (VAR_14->si_state != VAR_4) {




   VAR_14->got_attn = 1;
  } else {
   VAR_14->got_attn = 0;
   FUNC_6(VAR_14, VAR_10);
   VAR_17[0] = (VAR_2 << 2);
   VAR_17[1] = VAR_1;

   FUNC_9(VAR_14, VAR_17, 2);
   VAR_14->si_state = VAR_3;
   goto restart;
  }
 }


 if (VAR_16 == VAR_8) {
  FUNC_6(VAR_14, VAR_13);

  VAR_16 = FUNC_10(VAR_14);
  if (VAR_16 != VAR_8)
   goto restart;
 }

 if ((VAR_16 == VAR_8)
     && (FUNC_1(&VAR_14->req_events))) {




  FUNC_2(&VAR_14->req_events, 0);







  if (VAR_14->supports_event_msg_buff || VAR_14->io.irq) {
   FUNC_7(VAR_14);
  } else {
   VAR_14->curr_msg = FUNC_0(VAR_14);
   if (!VAR_14->curr_msg)
    goto out;

   FUNC_8(VAR_14);
  }
  goto restart;
 }

 if (VAR_16 == VAR_8 && VAR_14->timer_running) {

  if (FUNC_3(&VAR_14->si_timer))
   VAR_14->timer_running = 0;
 }

out:
 return VAR_16;
}
