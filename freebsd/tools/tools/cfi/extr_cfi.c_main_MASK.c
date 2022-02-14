
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 char* VAR_0 ;
 int FUNC_0 (int,char*) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int) ;
 char* VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char*,int *,int ) ;
 int FUNC_11 () ;

int
FUNC_12(int VAR_2, char *VAR_3[])
{
 VAR_0 = FUNC_1("CFI");
 if (VAR_0 == ((void*)0))
  VAR_0 = "/dev/cfi0";
 VAR_1 = VAR_3[0];
 if (VAR_2 > 1) {
  if (FUNC_9(VAR_3[1], "-f") == 0) {
   if (VAR_2 < 2)
    FUNC_0(1, "missing device name for -f option");
   VAR_0 = VAR_3[2];
   VAR_2 -= 2, VAR_3 += 2;
  } else if (FUNC_9(VAR_3[1], "-?") == 0)
   FUNC_11();
 }
 for (; VAR_2 > 1; VAR_2--, VAR_3++) {
  if (FUNC_8(VAR_3[1], "fact") == 0) {
   FUNC_5("0x%llx\n", (unsigned long long) FUNC_2());
  } else if (FUNC_8(VAR_3[1], "oem") == 0) {
   FUNC_5("0x%llx\n", (unsigned long long) FUNC_3());
  } else if (FUNC_8(VAR_3[1], "woem") == 0) {
   if (VAR_2 < 2)
    FUNC_0(1, "missing value for woem");
   FUNC_6((uint64_t) FUNC_10(VAR_3[2], ((void*)0), 0));
   VAR_2--, VAR_3++;
  } else if (FUNC_8(VAR_3[1], "plr") == 0) {
   FUNC_5("0x%x\n", FUNC_4());
  } else if (FUNC_8(VAR_3[1], "wplr") == 0) {
   FUNC_7();
  } else
   FUNC_11();
 }
}
