
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int ) ;

__attribute__((used)) static inline void __attribute__ ((noreturn)) FUNC_7(void)
{
 sigset_t VAR_2;

 FUNC_1(((void*)0));

 if (!FUNC_5(&VAR_2) && !FUNC_4(&VAR_2, VAR_0))
  FUNC_6(VAR_1, &VAR_2, 0);

 for (;;)
  if (FUNC_3(FUNC_2(), VAR_0) < 0)
   FUNC_0(127);
}
