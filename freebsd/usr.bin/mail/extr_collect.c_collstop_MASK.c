
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;
typedef int sig_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int *,int *) ;

void
FUNC_6(int VAR_6)
{
 sig_t VAR_7 = FUNC_4(VAR_6, VAR_1);
 sigset_t VAR_8;

 (void)FUNC_3(&VAR_8);
 (void)FUNC_2(&VAR_8, VAR_6);
 (void)FUNC_5(VAR_2, &VAR_8, ((void*)0));
 (void)FUNC_0(0, VAR_6);
 (void)FUNC_5(VAR_0, &VAR_8, ((void*)0));
 (void)FUNC_4(VAR_6, VAR_7);
 if (VAR_4) {
  VAR_4 = 0;
  VAR_5 = 0;
  FUNC_1(VAR_3, 1);
 }
}
