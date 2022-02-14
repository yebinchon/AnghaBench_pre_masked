
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct tcp_hpts_entry {int p_hpts_active; int p_hpts_sleep_time; int overidden_sleep; int p_on_min_sleep; int p_mtx; scalar_t__ p_direct_wake; int p_cpu; int co; scalar_t__ p_hpts_wake_scheduled; } ;
struct epoch_tracker {int dummy; } ;
typedef int sbintime_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tcp_hpts_entry*) ;
 int VAR_1 ;
 int FUNC_2 (struct epoch_tracker) ;
 int FUNC_3 (struct epoch_tracker) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ,int ,struct tcp_hpts_entry*,int ,int) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (struct tcp_hpts_entry*) ;
 int VAR_6 ;
 int FUNC_12 (struct timeval) ;

__attribute__((used)) static void
FUNC_13(void *VAR_7)
{
 struct tcp_hpts_entry *VAR_8;
 struct epoch_tracker VAR_9;
 struct timeval VAR_10;
 sbintime_t VAR_11;

 VAR_8 = (struct tcp_hpts_entry *)VAR_7;
 FUNC_9(&VAR_8->p_mtx);
 if (VAR_8->p_direct_wake) {

  FUNC_8(&VAR_8->co);
 } else {

  if (FUNC_6(&VAR_8->co) ||
      !FUNC_4(&VAR_8->co)) {
   FUNC_10(&VAR_8->p_mtx);
   return;
  }
  FUNC_5(&VAR_8->co);
 }
 VAR_8->p_hpts_wake_scheduled = 0;
 VAR_8->p_hpts_active = 1;
 FUNC_2(VAR_9);
 FUNC_11(VAR_8);
 FUNC_3(VAR_9);
 FUNC_1(VAR_8);
 VAR_10.tv_sec = 0;
 VAR_10.tv_usec = VAR_8->p_hpts_sleep_time * VAR_1;
 if (VAR_6 && (VAR_10.tv_usec < VAR_6)) {
  VAR_8->overidden_sleep = VAR_10.tv_usec;
  VAR_10.tv_usec = VAR_6;
  VAR_8->p_on_min_sleep = 1;
 } else {

  VAR_8->overidden_sleep = 0;
  VAR_8->p_on_min_sleep = 0;
 }
 VAR_8->p_hpts_active = 0;
 VAR_11 = FUNC_12(VAR_10);
 if (VAR_4 == 0) {
  FUNC_7(&VAR_8->co, VAR_11, 0,
      VAR_3, VAR_8, VAR_8->p_cpu,
      (VAR_0 | FUNC_0(VAR_5)));
 } else {
  FUNC_7(&VAR_8->co, VAR_11, 0,
      VAR_2, VAR_8,
      VAR_8->p_cpu,
      FUNC_0(VAR_5));
 }
 VAR_8->p_direct_wake = 0;
 FUNC_10(&VAR_8->p_mtx);
}
