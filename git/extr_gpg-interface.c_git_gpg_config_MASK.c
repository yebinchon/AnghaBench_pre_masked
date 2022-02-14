
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpg_format {int program; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,char const*) ;
 struct gpg_format* FUNC_2 (char const*) ;
 int FUNC_3 (int *,char const*,char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char*) ;
 struct gpg_format* VAR_0 ;

int FUNC_6(const char *VAR_1, const char *VAR_2, void *VAR_3)
{
 struct gpg_format *VAR_4 = ((void*)0);
 char *VAR_5 = ((void*)0);

 if (!FUNC_5(VAR_1, "user.signingkey")) {
  if (!VAR_2)
   return FUNC_0(VAR_1);
  FUNC_4(VAR_2);
  return 0;
 }

 if (!FUNC_5(VAR_1, "gpg.format")) {
  if (!VAR_2)
   return FUNC_0(VAR_1);
  VAR_4 = FUNC_2(VAR_2);
  if (!VAR_4)
   return FUNC_1("unsupported value for %s: %s",
         VAR_1, VAR_2);
  VAR_0 = VAR_4;
  return 0;
 }

 if (!FUNC_5(VAR_1, "gpg.program") || !FUNC_5(VAR_1, "gpg.openpgp.program"))
  VAR_5 = "openpgp";

 if (!FUNC_5(VAR_1, "gpg.x509.program"))
  VAR_5 = "x509";

 if (VAR_5) {
  VAR_4 = FUNC_2(VAR_5);
  return FUNC_3(&VAR_4->program, VAR_1, VAR_2);
 }

 return 0;
}
