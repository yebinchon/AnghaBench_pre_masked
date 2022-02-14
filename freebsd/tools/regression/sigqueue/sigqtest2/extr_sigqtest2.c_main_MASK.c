
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union sigval {int sival_int; } ;
struct sigaction {int sa_sigaction; int sa_flags; int sa_mask; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int ,struct sigaction*,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int *) ;
 scalar_t__ FUNC_6 (int ,int ,union sigval) ;

int
FUNC_7()
{
 struct sigaction VAR_4;
 sigset_t VAR_5;
 union sigval VAR_6;


 FUNC_1();


 FUNC_4(&VAR_4.sa_mask);
 VAR_4.sa_flags = VAR_0;
 VAR_4.sa_sigaction = VAR_3;
 FUNC_2(VAR_1, &VAR_4, ((void*)0));
 FUNC_4(&VAR_5);
 FUNC_3(&VAR_5, VAR_1);
 FUNC_5(VAR_2, &VAR_5, ((void*)0));
 VAR_6.sival_int = 1;
 while (FUNC_6(FUNC_0(), VAR_1, VAR_6))
  ;


 FUNC_1();
 return (0);
}
