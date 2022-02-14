
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ch_ifconf_regs {int version; int * data; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ,struct ch_ifconf_regs*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,int) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(int VAR_2, char *VAR_3[], int VAR_4, const char *VAR_5)
{
 int VAR_6;
 struct ch_ifconf_regs VAR_7;

 (void) VAR_2;
 (void) VAR_3;
 (void) VAR_4;

 VAR_7.len = VAR_1;
 if ((VAR_7.data = FUNC_3(VAR_7.len)) == ((void*)0))
  FUNC_1(1, "can't malloc");

 if (FUNC_0(VAR_5, VAR_0, &VAR_7))
  FUNC_1(1, "can't read registers");

 VAR_6 = VAR_7.version & 0x3ff;
 if (VAR_6 == 3)
  return FUNC_4((uint32_t *)VAR_7.data);

 FUNC_2(1, "unknown card type %d", VAR_6);
 return 0;
}
