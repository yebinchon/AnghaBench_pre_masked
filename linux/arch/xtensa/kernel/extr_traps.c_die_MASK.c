
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {scalar_t__* areg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (long) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (char*,char const*,long,int,char*) ;
 int FUNC_7 (struct pt_regs*) ;
 int FUNC_8 (int *,unsigned long*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct pt_regs*) ;

void FUNC_12(const char * VAR_5, struct pt_regs * VAR_6, long VAR_7)
{
 static int VAR_8;

 FUNC_2();
 FUNC_9(&VAR_3);

 FUNC_6("%s: sig: %ld [#%d]%s\n", VAR_5, VAR_7, ++VAR_8,
  FUNC_0(VAR_0) ? " PREEMPT" : "");
 FUNC_7(VAR_6);
 if (!FUNC_11(VAR_6))
  FUNC_8(((void*)0), (unsigned long*)VAR_6->areg[1]);

 FUNC_1(VAR_2, VAR_1);
 FUNC_10(&VAR_3);

 if (FUNC_4())
  FUNC_5("Fatal exception in interrupt");

 if (VAR_4)
  FUNC_5("Fatal exception");

 FUNC_3(VAR_7);
}
