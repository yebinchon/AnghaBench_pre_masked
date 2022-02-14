
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int member_1; int member_0; } ;
struct smi_info {int need_watch; scalar_t__ in_maintenance_mode; int si_lock; int timer_running; } ;
typedef enum si_sm_result { ____Placeholder_si_sm_result } si_sm_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_6 ;
 int FUNC_2 (struct timespec*) ;
 int FUNC_3 (int,struct smi_info*,struct timespec*) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct smi_info*,int ) ;
 int FUNC_9 (struct smi_info*,scalar_t__) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int,int) ;

__attribute__((used)) static int FUNC_13(void *VAR_8)
{
 struct smi_info *VAR_9 = VAR_8;
 unsigned long VAR_10;
 enum si_sm_result VAR_11;
 struct timespec VAR_12 = { 0, 0 };

 FUNC_2(&VAR_12);
 FUNC_7(VAR_6, VAR_0);
 while (!FUNC_4()) {
  int VAR_13;

  FUNC_10(&(VAR_9->si_lock), VAR_10);
  VAR_11 = FUNC_8(VAR_9, 0);
  if (VAR_11 != VAR_3 && !VAR_9->timer_running)
   FUNC_9(VAR_9, VAR_7 + VAR_4);

  FUNC_11(&(VAR_9->si_lock), VAR_10);
  VAR_13 = FUNC_3(VAR_11, VAR_9,
        &VAR_12);
  if (VAR_11 == VAR_1) {
   ;
  } else if (VAR_11 == VAR_2 && VAR_13) {






   if (VAR_9->in_maintenance_mode)
    FUNC_5();
   else
    FUNC_12(100, 200);
  } else if (VAR_11 == VAR_3) {
   if (FUNC_1(&VAR_9->need_watch)) {
    FUNC_6(100);
   } else {

    FUNC_0(VAR_5);
    FUNC_5();
   }
  } else {
   FUNC_6(1);
  }
 }
 return 0;
}
