
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int ro; int sysfs_action; scalar_t__ thread; int recovery; scalar_t__ sync_thread; int kobj; TYPE_1__* pers; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* start_reshape ) (struct mddev*) ;int sync_request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct mddev*) ;
 int FUNC_6 (struct mddev*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct mddev*) ;
 int FUNC_9 (int *,int *,char*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static ssize_t
FUNC_12(struct mddev *VAR_11, const char *VAR_12, size_t VAR_13)
{
 if (!VAR_11->pers || !VAR_11->pers->sync_request)
  return -VAR_1;


 if (FUNC_1(VAR_12, "idle") || FUNC_1(VAR_12, "frozen")) {
  if (FUNC_1(VAR_12, "frozen"))
   FUNC_7(VAR_3, &VAR_11->recovery);
  else
   FUNC_0(VAR_3, &VAR_11->recovery);
  if (FUNC_11(VAR_8, &VAR_11->recovery) &&
      FUNC_5(VAR_11) == 0) {
   FUNC_2(VAR_10);
   if (VAR_11->sync_thread) {
    FUNC_7(VAR_4, &VAR_11->recovery);
    FUNC_3(VAR_11);
   }
   FUNC_6(VAR_11);
  }
 } else if (FUNC_11(VAR_8, &VAR_11->recovery))
  return -VAR_0;
 else if (FUNC_1(VAR_12, "resync"))
  FUNC_0(VAR_3, &VAR_11->recovery);
 else if (FUNC_1(VAR_12, "recover")) {
  FUNC_0(VAR_3, &VAR_11->recovery);
  FUNC_7(VAR_6, &VAR_11->recovery);
 } else if (FUNC_1(VAR_12, "reshape")) {
  int VAR_14;
  if (VAR_11->pers->start_reshape == ((void*)0))
   return -VAR_1;
  VAR_14 = FUNC_5(VAR_11);
  if (!VAR_14) {
   if (FUNC_11(VAR_8, &VAR_11->recovery))
    VAR_14 = -VAR_0;
   else {
    FUNC_0(VAR_3, &VAR_11->recovery);
    VAR_14 = VAR_11->pers->start_reshape(VAR_11);
   }
   FUNC_6(VAR_11);
  }
  if (VAR_14)
   return VAR_14;
  FUNC_9(&VAR_11->kobj, ((void*)0), "degraded");
 } else {
  if (FUNC_1(VAR_12, "check"))
   FUNC_7(VAR_2, &VAR_11->recovery);
  else if (!FUNC_1(VAR_12, "repair"))
   return -VAR_1;
  FUNC_0(VAR_3, &VAR_11->recovery);
  FUNC_7(VAR_7, &VAR_11->recovery);
  FUNC_7(VAR_9, &VAR_11->recovery);
 }
 if (VAR_11->ro == 2) {



  VAR_11->ro = 0;
  FUNC_4(VAR_11->sync_thread);
 }
 FUNC_7(VAR_5, &VAR_11->recovery);
 FUNC_4(VAR_11->thread);
 FUNC_10(VAR_11->sysfs_action);
 return VAR_13;
}
