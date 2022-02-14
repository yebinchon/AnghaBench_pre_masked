
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(int VAR_1)
{
 static char const * const VAR_2[] = { "", "ten-", "hundred-" };

 switch(VAR_1) {
 case 1:
  (void)FUNC_0("tenths.\n");
  break;
 case 2:
  (void)FUNC_0("hundredths.\n");
  break;
 default:
  (void)FUNC_0("%s%sths.\n", VAR_2[VAR_1 % 3], VAR_0[VAR_1 / 3]);
  break;
 }
}
