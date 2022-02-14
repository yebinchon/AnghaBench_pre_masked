
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_timer {scalar_t__ h_idx; int wakeup; scalar_t__ wakeup_time; } ;
struct udp_target {struct event_timer confirm_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct event_timer*) ;
 scalar_t__ VAR_2 ;

void FUNC_2 (struct udp_target *VAR_3) {
  struct event_timer *VAR_4 = &VAR_3->confirm_timer;
  VAR_4->wakeup_time = VAR_2 + VAR_0;
  VAR_4->wakeup = VAR_1;
  FUNC_0 (!VAR_4->h_idx);
  VAR_4->h_idx = 0;
  FUNC_1 (VAR_4);
}
