
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int dummy; } ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,int,struct thread_info*,struct pt_regs*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 struct thread_info* FUNC_4 () ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(const char *VAR_6, struct pt_regs *VAR_7, int VAR_8)
{
 struct thread_info *VAR_9 = FUNC_4();
 int VAR_10;

 FUNC_7();

 FUNC_10(&VAR_4);
 FUNC_3();
 FUNC_2(1);
 VAR_10 = FUNC_0(VAR_6, VAR_8, VAR_9, VAR_7);

 FUNC_2(0);
 FUNC_1(VAR_3, VAR_0);
 FUNC_11(&VAR_4);
 FUNC_8();

 if (FUNC_6())
  FUNC_9("Fatal exception in interrupt");
 if (VAR_5)
  FUNC_9("Fatal exception");
 if (VAR_10 != VAR_1)
  FUNC_5(VAR_2);
}
