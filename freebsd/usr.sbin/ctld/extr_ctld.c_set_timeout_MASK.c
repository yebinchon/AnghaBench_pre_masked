
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tv_sec; } ;
struct TYPE_3__ {int tv_sec; } ;
struct sigaction {TYPE_2__ it_value; TYPE_1__ it_interval; int sa_mask; int sa_handler; } ;
struct itimerval {TYPE_2__ it_value; TYPE_1__ it_interval; int sa_mask; int sa_handler; } ;
typedef int sa ;
typedef int itv ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sigaction*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,struct sigaction*,int *) ;
 int FUNC_4 (int ,struct sigaction*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;

void
FUNC_6(int VAR_5, int VAR_6)
{
 struct sigaction VAR_7;
 struct itimerval VAR_8;
 int VAR_9;

 if (VAR_5 <= 0) {
  FUNC_1("session timeout disabled");
  FUNC_0(&VAR_8, sizeof(VAR_8));
  VAR_9 = FUNC_3(VAR_0, &VAR_8, ((void*)0));
  if (VAR_9 != 0)
   FUNC_2(1, "setitimer");
  VAR_4 = 0;
  return;
 }

 VAR_4 = 0;
 FUNC_0(&VAR_7, sizeof(VAR_7));
 if (VAR_6)
  VAR_7.sa_handler = VAR_3;
 else
  VAR_7.sa_handler = VAR_2;
 FUNC_5(&VAR_7.sa_mask);
 VAR_9 = FUNC_4(VAR_1, &VAR_7, ((void*)0));
 if (VAR_9 != 0)
  FUNC_2(1, "sigaction");





 FUNC_1("setting session timeout to %d seconds", VAR_5);
 FUNC_0(&VAR_8, sizeof(VAR_8));
 VAR_8.it_interval.tv_sec = 1;
 VAR_8.it_value.tv_sec = VAR_5;
 VAR_9 = FUNC_3(VAR_0, &VAR_8, ((void*)0));
 if (VAR_9 != 0)
  FUNC_2(1, "setitimer");
}
