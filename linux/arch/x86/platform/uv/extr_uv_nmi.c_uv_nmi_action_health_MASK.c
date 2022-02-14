
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(int VAR_3, struct pt_regs *VAR_4, int VAR_5)
{
 if (VAR_5) {
  int VAR_6 = FUNC_0(&VAR_1);
  int VAR_7 = FUNC_3() - VAR_6;

  FUNC_4("UV: NMI CPU health check (non-responding:%d)\n", VAR_7);
  FUNC_1(&VAR_2, VAR_0);
 } else {
  while (!FUNC_0(&VAR_2))
   FUNC_2();
 }
 FUNC_5(VAR_5);
}
