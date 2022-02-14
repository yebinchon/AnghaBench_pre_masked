
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siginfo {int dummy; } ;
typedef int mcontext_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct siginfo*,int *) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_3(int VAR_4, struct siginfo *VAR_5, mcontext_t *VAR_6)
{
 int VAR_7;

 VAR_7 = VAR_2;
 if (!VAR_7 && (VAR_4 == VAR_0)) {
  VAR_3 |= VAR_1;
  return;
 }

 FUNC_0();

 FUNC_2(VAR_4, VAR_5, VAR_6);

 FUNC_1(VAR_7);
}
