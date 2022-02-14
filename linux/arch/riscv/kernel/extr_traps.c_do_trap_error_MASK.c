
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (struct pt_regs*,char const*) ;
 int FUNC_1 (struct pt_regs*,int,int,unsigned long) ;
 int FUNC_2 (struct pt_regs*) ;
 scalar_t__ FUNC_3 (struct pt_regs*) ;

__attribute__((used)) static void FUNC_4(struct pt_regs *VAR_0, int VAR_1, int VAR_2,
 unsigned long VAR_3, const char *VAR_4)
{
 if (FUNC_3(VAR_0)) {
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 } else {
  if (!FUNC_2(VAR_0))
   FUNC_0(VAR_0, VAR_4);
 }
}
