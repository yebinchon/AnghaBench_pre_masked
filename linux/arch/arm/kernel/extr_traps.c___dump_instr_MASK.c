
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pt_regs {int dummy; } ;


 unsigned int FUNC_0 (unsigned int,int *) ;
 unsigned long FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (char*,char const*,char*) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (struct pt_regs*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_0, struct pt_regs *VAR_1)
{
 unsigned long VAR_2 = FUNC_1(VAR_1);
 const int VAR_3 = FUNC_4(VAR_1);
 const int VAR_4 = VAR_3 ? 4 : 8;
 char VAR_5[sizeof("00000000 ") * 5 + 2 + 1], *VAR_6 = VAR_5;
 int VAR_7;






 for (VAR_7 = -4; VAR_7 < 1 + !!VAR_3; VAR_7++) {
  unsigned int VAR_8, VAR_9;

  if (VAR_3)
   VAR_9 = FUNC_0(VAR_8, &((u16 *)VAR_2)[VAR_7]);
  else
   VAR_9 = FUNC_0(VAR_8, &((u32 *)VAR_2)[VAR_7]);

  if (!VAR_9)
   VAR_6 += FUNC_3(VAR_6, VAR_7 == 0 ? "(%0*x) " : "%0*x ",
     VAR_4, VAR_8);
  else {
   VAR_6 += FUNC_3(VAR_6, "bad PC value");
   break;
  }
 }
 FUNC_2("%sCode: %s\n", VAR_0, VAR_5);
}
