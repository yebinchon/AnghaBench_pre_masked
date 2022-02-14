
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int sa_mask; int sa_sigaction; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,struct sigaction*,int *) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_3(void)
{
 struct sigaction VAR_7;
 int VAR_8;

 VAR_7.sa_sigaction = VAR_6;
 VAR_7.sa_flags = VAR_1 | VAR_0 | VAR_2;
 VAR_8 = FUNC_2(&VAR_7.sa_mask);
 FUNC_0(VAR_8 != -1);
 VAR_8 = FUNC_1(VAR_4, &VAR_7, ((void*)0));
 FUNC_0(VAR_8 != -1);
 VAR_8 = FUNC_1(VAR_3, &VAR_7, ((void*)0));
 FUNC_0(VAR_8 != -1);
 VAR_8 = FUNC_1(VAR_5, &VAR_7, ((void*)0));
 FUNC_0(VAR_8 != -1);
}
