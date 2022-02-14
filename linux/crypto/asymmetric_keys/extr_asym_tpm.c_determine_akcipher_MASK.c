
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3, const char *VAR_4,
         char VAR_5[VAR_0])
{
 if (FUNC_1(VAR_3, "pkcs1") == 0) {
  if (!VAR_4) {
   FUNC_2(VAR_5, "pkcs1pad(rsa)");
   return 0;
  }

  if (FUNC_0(VAR_5, VAR_0, "pkcs1pad(rsa,%s)",
        VAR_4) >= VAR_0)
   return -VAR_1;

  return 0;
 }

 if (FUNC_1(VAR_3, "raw") == 0) {
  FUNC_2(VAR_5, "rsa");
  return 0;
 }

 return -VAR_2;
}
