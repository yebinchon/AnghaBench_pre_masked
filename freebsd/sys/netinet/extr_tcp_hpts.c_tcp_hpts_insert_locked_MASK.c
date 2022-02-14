
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct tcp_hpts_entry {scalar_t__ p_hpts_active; scalar_t__ p_on_min_sleep; int p_hpts_sleep_time; int p_direct_wake; int p_cpu; int co; int p_prev_slot; int * p_hptss; int p_lasttick; int p_curtick; int p_cur_slot; int p_nxt_slot; int p_runningtick; } ;
struct inpcb {scalar_t__ inp_in_hpts; int inp_hptsslot; int inp_hpts_request; } ;
struct hpts_diag {scalar_t__ p_hpts_active; int slot_req; scalar_t__ p_on_min_sleep; int hpts_sleep_time; int wheel_tick; int maxticks; int wheel_cts; int slot_remaining; int inp_hptsslot; int have_slept; int yet_to_sleep; int need_new_to; int co_ret; int p_lasttick; int p_curtick; int p_cur_slot; int p_nxt_slot; int p_runningtick; int p_prev_slot; } ;
typedef int sbintime_t ;
typedef int int8_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tcp_hpts_entry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ,int ,struct tcp_hpts_entry*,int ,int) ;
 int FUNC_3 (struct tcp_hpts_entry*,struct inpcb*,int,int) ;
 int FUNC_4 (struct tcp_hpts_entry*,struct inpcb*,int *,int,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct tcp_hpts_entry*,int,int*) ;
 int FUNC_8 (struct hpts_diag*,int ,int) ;
 int FUNC_9 (char*,struct tcp_hpts_entry*,struct inpcb*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (struct inpcb*,struct tcp_hpts_entry*,int,int ) ;
 int FUNC_11 (struct timeval*) ;
 int FUNC_12 (struct tcp_hpts_entry*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct timeval) ;

__attribute__((used)) static void
FUNC_15(struct tcp_hpts_entry *VAR_7, struct inpcb *VAR_8, uint32_t VAR_9, int32_t VAR_10,
         struct hpts_diag *VAR_11, struct timeval *VAR_12)
{
 uint32_t VAR_13 = 0;
 uint32_t VAR_14, VAR_15;
 int32_t VAR_16, VAR_17;
 int8_t VAR_18 = 0;

 FUNC_1(VAR_7);
 if (VAR_11) {
  FUNC_8(VAR_11, 0, sizeof(struct hpts_diag));
  VAR_11->p_hpts_active = VAR_7->p_hpts_active;
  VAR_11->p_prev_slot = VAR_7->p_prev_slot;
  VAR_11->p_runningtick = VAR_7->p_runningtick;
  VAR_11->p_nxt_slot = VAR_7->p_nxt_slot;
  VAR_11->p_cur_slot = VAR_7->p_cur_slot;
  VAR_11->p_curtick = VAR_7->p_curtick;
  VAR_11->p_lasttick = VAR_7->p_lasttick;
  VAR_11->slot_req = VAR_9;
  VAR_11->p_on_min_sleep = VAR_7->p_on_min_sleep;
  VAR_11->hpts_sleep_time = VAR_7->p_hpts_sleep_time;
 }
 if (VAR_8->inp_in_hpts == 0) {
  if (VAR_9 == 0) {

   FUNC_10(VAR_8, VAR_7, VAR_10, 0);
   return;
  }

  VAR_14 = FUNC_11(VAR_12);

  VAR_16 = FUNC_13(VAR_14);

  VAR_17 = FUNC_7(VAR_7, VAR_16, &VAR_15);
  if (VAR_11) {
   VAR_11->wheel_tick = VAR_16;
   VAR_11->maxticks = VAR_17;
   VAR_11->wheel_cts = VAR_14;
  }
  if (VAR_17 == 0) {

   if (VAR_9 > 1) {







    VAR_9--;
   }
   VAR_8->inp_hptsslot = VAR_15;
   VAR_8->inp_hpts_request = VAR_9;
  } else if (VAR_17 >= VAR_9) {

   VAR_8->inp_hpts_request = 0;
   VAR_8->inp_hptsslot = FUNC_5(VAR_16, VAR_9);
  } else {

   VAR_8->inp_hpts_request = VAR_9 - VAR_17;
   VAR_8->inp_hptsslot = VAR_15;
  }
  if (VAR_11) {
   VAR_11->slot_remaining = VAR_8->inp_hpts_request;
   VAR_11->inp_hptsslot = VAR_8->inp_hptsslot;
  }



  FUNC_4(VAR_7, VAR_8, &VAR_7->p_hptss[VAR_8->inp_hptsslot], VAR_10, 0);
  if ((VAR_7->p_hpts_active == 0) &&
      (VAR_8->inp_hpts_request == 0) &&
      (VAR_7->p_on_min_sleep == 0)) {






   uint32_t VAR_19, VAR_20;


   VAR_19 = FUNC_6(VAR_7->p_prev_slot, VAR_16);
   if (VAR_19 < VAR_7->p_hpts_sleep_time)
    VAR_20 = VAR_7->p_hpts_sleep_time - VAR_19;
   else {

    VAR_20 = 0;
    VAR_18 = 1;
   }
   if (VAR_11) {
    VAR_11->have_slept = VAR_19;
    VAR_11->yet_to_sleep = VAR_20;
   }
   if (VAR_20 &&
       (VAR_20 > VAR_9)) {



    VAR_7->p_hpts_sleep_time = VAR_9;
    VAR_13 = VAR_9 * VAR_1;
   }
  }





  if (VAR_18) {
   VAR_7->p_direct_wake = 1;
   FUNC_12(VAR_7);
   if (VAR_11) {
    VAR_11->need_new_to = 0;
    VAR_11->co_ret = 0xffff0000;
   }
  } else if (VAR_13) {
   int32_t VAR_21;
   struct timeval VAR_22;
   sbintime_t VAR_23;

   VAR_22.tv_sec = 0;
   VAR_22.tv_usec = 0;
   while (VAR_13 > VAR_2) {
    VAR_22.tv_sec++;
    VAR_13 -= VAR_2;
   }
   VAR_22.tv_usec = VAR_13;
   VAR_23 = FUNC_14(VAR_22);
   if (VAR_5 == 0) {
    VAR_21 = FUNC_2(&VAR_7->co, VAR_23, 0,
        VAR_4, VAR_7, VAR_7->p_cpu,
        (VAR_0 | FUNC_0(VAR_6)));
   } else {
    VAR_21 = FUNC_2(&VAR_7->co, VAR_23, 0,
        VAR_3, VAR_7,
        VAR_7->p_cpu,
        FUNC_0(VAR_6));
   }
   if (VAR_11) {
    VAR_11->need_new_to = VAR_13;
    VAR_11->co_ret = VAR_21;
   }
  }
 } else {



 }
}
