
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
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(int VAR_3)
{
 struct sigaction VAR_4;
 struct itimerval VAR_5;
 int VAR_6;

 if (VAR_3 <= 0) {
  FUNC_1("session timeout disabled");
  return;
 }

 FUNC_0(&VAR_4, sizeof(VAR_4));
 VAR_4.sa_handler = VAR_2;
 FUNC_5(&VAR_4.sa_mask);
 VAR_6 = FUNC_4(VAR_1, &VAR_4, ((void*)0));
 if (VAR_6 != 0)
  FUNC_2(1, "sigaction");





 FUNC_0(&VAR_5, sizeof(VAR_5));
 VAR_5.it_interval.tv_sec = 1;
 VAR_5.it_value.tv_sec = VAR_3;

 FUNC_1("setting session timeout to %d seconds",
     VAR_3);
 VAR_6 = FUNC_3(VAR_0, &VAR_5, ((void*)0));
 if (VAR_6 != 0)
  FUNC_2(1, "setitimer");
}
