
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char*,char**) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,char*,char*,...) ;

__attribute__((used)) static void
FUNC_7(int VAR_3, char *VAR_4, char *VAR_5)
{
 char VAR_6[] = "/usr/sbin/ppp";
 char *VAR_7[] = { VAR_6, "-direct", "-quiet",
    ((void*)0), ((void*)0), ((void*)0), ((void*)0) };

 FUNC_0(0);
 if (FUNC_1(VAR_3) < 0) {
  FUNC_6(VAR_0, "Could not dup(0). %s (%d)",
   FUNC_5(VAR_2), VAR_2);
  FUNC_3(1);
 }

 FUNC_0(1);
 if (FUNC_1(VAR_3) < 0) {
  FUNC_6(VAR_0, "Could not dup(1). %s (%d)",
   FUNC_5(VAR_2), VAR_2);
  FUNC_3(1);
 }

 FUNC_0(2);
 FUNC_4("/dev/null", VAR_1);

 if (VAR_4 != ((void*)0)) {
  VAR_7[3] = "-unit";
  VAR_7[4] = VAR_4;
  VAR_7[5] = VAR_5;
 } else
  VAR_7[3] = VAR_5;

 if (FUNC_2(VAR_6, VAR_7) < 0) {
  FUNC_6(VAR_0, "Could not exec(%s -direct -quiet%s%s %s). " "%s (%d)", VAR_6, (VAR_4 != ((void*)0))? " -unit " : "",

   (VAR_4 != ((void*)0))? VAR_4 : "", VAR_5,
   FUNC_5(VAR_2), VAR_2);
  FUNC_3(1);
 }
}
