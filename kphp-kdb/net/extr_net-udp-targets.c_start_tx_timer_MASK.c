
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_timer {scalar_t__ h_idx; int wakeup; scalar_t__ wakeup_time; } ;
struct udp_target {scalar_t__ tx_timeout; struct event_timer tx_timer; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct event_timer*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void FUNC_2 (struct udp_target *VAR_2) {
  struct event_timer *VAR_3 = &VAR_2->tx_timer;
  VAR_3->wakeup_time = VAR_0 + VAR_2->tx_timeout;
  VAR_3->wakeup = VAR_1;
  FUNC_0 (!VAR_3->h_idx);
  VAR_3->h_idx = 0;
  FUNC_1 (VAR_3);
}
