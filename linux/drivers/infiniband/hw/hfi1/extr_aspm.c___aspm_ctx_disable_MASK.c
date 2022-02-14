
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_ctxtdata {void* aspm_ts_timer_sched; int aspm_enabled; int aspm_lock; int aspm_timer; int dd; void* aspm_ts_last_intr; int aspm_intr_enable; } ;
typedef void* ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 void* FUNC_1 () ;
 int FUNC_2 (void*,void*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void FUNC_8(struct hfi1_ctxtdata *VAR_5)
{
 bool VAR_6;
 bool VAR_7;
 unsigned long VAR_8;
 ktime_t VAR_9, VAR_10;

 FUNC_6(&VAR_5->aspm_lock, VAR_8);

 if (!VAR_5->aspm_intr_enable)
  goto unlock;

 VAR_10 = VAR_5->aspm_ts_last_intr;
 VAR_9 = FUNC_1();
 VAR_5->aspm_ts_last_intr = VAR_9;


 VAR_7 = FUNC_3(FUNC_2(VAR_9, VAR_10)) < VAR_2;


 VAR_6 = FUNC_3(FUNC_2(VAR_9, VAR_5->aspm_ts_timer_sched)) >
        VAR_0 * VAR_3;
 VAR_6 = VAR_6 && VAR_7;


 if (VAR_5->aspm_enabled && VAR_7) {
  FUNC_0(VAR_5->dd);
  VAR_5->aspm_enabled = 0;
  VAR_6 = 1;
 }

 if (VAR_6) {
  FUNC_4(&VAR_5->aspm_timer,
     VAR_4 + FUNC_5(VAR_1));
  VAR_5->aspm_ts_timer_sched = VAR_9;
 }
unlock:
 FUNC_7(&VAR_5->aspm_lock, VAR_8);
}
