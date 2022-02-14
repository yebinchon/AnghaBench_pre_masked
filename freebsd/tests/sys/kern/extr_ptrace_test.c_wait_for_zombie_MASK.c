
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {scalar_t__ ki_stat; } ;
typedef int pid_t ;
typedef int kp ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int ,struct kinfo_proc*,size_t*,int *,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(pid_t VAR_6)
{
 for (;;) {
  struct kinfo_proc VAR_7;
  size_t VAR_8;
  int VAR_9[4];

  VAR_9[0] = VAR_0;
  VAR_9[1] = VAR_2;
  VAR_9[2] = VAR_3;
  VAR_9[3] = VAR_6;
  VAR_8 = sizeof(VAR_7);
  if (FUNC_2(VAR_9, FUNC_1(VAR_9), &VAR_7, &VAR_8, ((void*)0), 0) == -1) {
   FUNC_0(VAR_5 == VAR_1);
   break;
  }
  if (VAR_7.ki_stat == VAR_4)
   break;
  FUNC_3(5000);
 }
}
