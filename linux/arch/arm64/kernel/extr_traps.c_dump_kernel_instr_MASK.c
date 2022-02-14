
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int dummy; } ;


 unsigned int FUNC_0 (int *,unsigned int*) ;
 unsigned long FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (char*,char const*,char*) ;
 int FUNC_3 (char*,char*,...) ;
 scalar_t__ FUNC_4 (struct pt_regs*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_0, struct pt_regs *VAR_1)
{
 unsigned long VAR_2 = FUNC_1(VAR_1);
 char VAR_3[sizeof("00000000 ") * 5 + 2 + 1], *VAR_4 = VAR_3;
 int VAR_5;

 if (FUNC_4(VAR_1))
  return;

 for (VAR_5 = -4; VAR_5 < 1; VAR_5++) {
  unsigned int VAR_6, VAR_7;

  VAR_7 = FUNC_0(&((u32 *)VAR_2)[VAR_5], &VAR_6);

  if (!VAR_7)
   VAR_4 += FUNC_3(VAR_4, VAR_5 == 0 ? "(%08x) " : "%08x ", VAR_6);
  else {
   VAR_4 += FUNC_3(VAR_4, "bad PC value");
   break;
  }
 }

 FUNC_2("%sCode: %s\n", VAR_0, VAR_3);
}
