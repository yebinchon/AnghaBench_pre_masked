
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int FUNC_5 (char*,char*,size_t) ;
 int FUNC_6 (char*,char**) ;
 char* FUNC_7 (char*,char**,char**) ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 size_t FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14(void)
{
 char *VAR_1 = (char *)FUNC_2();
 size_t VAR_2 = FUNC_11((char *)VAR_1);
 char *VAR_3;
 char *VAR_4, *VAR_5;
 u64 VAR_6;

 if (!FUNC_12(VAR_1, "memmap=") && !FUNC_12(VAR_1, "mem=") &&
  !FUNC_12(VAR_1, "hugepages"))
  return;

 VAR_3 = FUNC_3(VAR_2 + 1);
 if (!VAR_3)
  FUNC_0("Failed to allocate space for tmp_cmdline");

 FUNC_5(VAR_3, VAR_1, VAR_2);
 VAR_3[VAR_2] = 0;
 VAR_1 = VAR_3;


 VAR_1 = FUNC_9(VAR_1);

 while (*VAR_1) {
  VAR_1 = FUNC_7(VAR_1, &VAR_4, &VAR_5);

  if (!VAR_5 && FUNC_10(VAR_4, "--") == 0) {
   FUNC_13("Only '--' specified in cmdline");
   goto out;
  }

  if (!FUNC_10(VAR_4, "memmap")) {
   FUNC_4(VAR_5);
  } else if (FUNC_12(VAR_4, "hugepages")) {
   FUNC_8(VAR_4, VAR_5);
  } else if (!FUNC_10(VAR_4, "mem")) {
   char *VAR_7 = VAR_5;

   if (!FUNC_10(VAR_7, "nopentium"))
    continue;
   VAR_6 = FUNC_6(VAR_7, &VAR_7);
   if (VAR_6 == 0)
    goto out;

   VAR_0 = VAR_6;
  }
 }

out:
 FUNC_1(VAR_3);
 return;
}
