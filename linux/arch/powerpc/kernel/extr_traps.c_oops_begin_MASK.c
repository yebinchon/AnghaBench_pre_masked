
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_3 ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 () ;

__attribute__((used)) static unsigned long FUNC_9(struct pt_regs *VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;

 FUNC_5();


 FUNC_7(VAR_6);
 VAR_5 = FUNC_8();
 if (!FUNC_1(&VAR_0)) {
  if (VAR_5 == VAR_2)
                                            ;
  else
   FUNC_0(&VAR_0);
 }
 VAR_1++;
 VAR_2 = VAR_5;
 FUNC_3();
 FUNC_2(1);
 if (FUNC_4(VAR_3))
  FUNC_6();
 return VAR_6;
}
