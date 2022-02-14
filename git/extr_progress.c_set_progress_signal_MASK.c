
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigaction {int sa_flags; int sa_mask; int sa_handler; } ;
struct TYPE_2__ {int tv_sec; scalar_t__ tv_usec; } ;
struct itimerval {TYPE_1__ it_interval; TYPE_1__ it_value; } ;
typedef int sa ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sigaction*,int ,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,struct itimerval*,int *) ;
 int FUNC_2 (int ,struct sigaction*,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void)
{
 struct sigaction VAR_6;
 struct itimerval VAR_7;

 if (VAR_4)
  return;

 VAR_5 = 0;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.sa_handler = VAR_3;
 FUNC_3(&VAR_6.sa_mask);
 VAR_6.sa_flags = VAR_1;
 FUNC_2(VAR_2, &VAR_6, ((void*)0));

 VAR_7.it_interval.tv_sec = 1;
 VAR_7.it_interval.tv_usec = 0;
 VAR_7.it_value = VAR_7.it_interval;
 FUNC_1(VAR_0, &VAR_7, ((void*)0));
}
