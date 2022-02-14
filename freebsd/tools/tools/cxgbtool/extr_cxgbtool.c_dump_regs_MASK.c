
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ch_ifconf_regs {int version; int * data; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ,struct ch_ifconf_regs*) ;
 int FUNC_1 (int,char**,int,int *) ;
 int FUNC_2 (int,char**,int,int *,int) ;
 int FUNC_3 (int,char**,int,int *,int) ;
 int FUNC_4 (int,char**,int,int *,int) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int,char*,int,int) ;
 int * FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(int VAR_2, char *VAR_3[], int VAR_4, const char *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 struct ch_ifconf_regs VAR_9;

 VAR_9.len = VAR_1;


 if ((VAR_9.data = FUNC_7(VAR_9.len)) == ((void*)0))
  FUNC_5(1, "can't malloc");

 if (FUNC_0(VAR_5, VAR_0, &VAR_9))
  FUNC_5(1, "can't read registers");

 VAR_6 = VAR_9.version & 0x3ff;
 VAR_7 = (VAR_9.version >> 10) & 0x3f;
 VAR_8 = (VAR_9.version & 0x80000000) != 0;

 if (VAR_6 <= 2)
  return FUNC_1(VAR_2, VAR_3, VAR_4, (uint32_t *)VAR_9.data);
 FUNC_6(1, "unknown card type %d.%d", VAR_6, VAR_7);
 return 0;
}
