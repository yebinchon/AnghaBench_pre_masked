
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int * sa_restorer; int sa_mask; int sa_sigaction; } ;
typedef int sigset_t ;


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
 int VAR_10 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int,struct sigaction*,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int ,int *,int *) ;

void FUNC_6(int VAR_11)
{
 struct sigaction VAR_12;
 int VAR_13 = VAR_3 | VAR_1;
 sigset_t VAR_14;

 VAR_12.sa_sigaction = VAR_10;


 FUNC_3(&VAR_12.sa_mask);
 FUNC_2(&VAR_12.sa_mask, VAR_5);
 FUNC_2(&VAR_12.sa_mask, VAR_7);
 FUNC_2(&VAR_12.sa_mask, VAR_4);

 if (VAR_11 == VAR_6)
  VAR_13 |= VAR_0;

 if (FUNC_4(&VAR_12.sa_mask, VAR_11))
  VAR_13 |= VAR_2;

 VAR_12.sa_flags = VAR_13;
 VAR_12.sa_restorer = ((void*)0);
 if (FUNC_1(VAR_11, &VAR_12, ((void*)0)) < 0)
  FUNC_0("sigaction failed - errno = %d\n", VAR_9);

 FUNC_3(&VAR_14);
 FUNC_2(&VAR_14, VAR_11);
 if (FUNC_5(VAR_8, &VAR_14, ((void*)0)) < 0)
  FUNC_0("sigprocmask failed - errno = %d\n", VAR_9);
}
