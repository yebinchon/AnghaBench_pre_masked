
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,...) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_3 (char*,char*,char*) ;
 scalar_t__ VAR_5 ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*) ;
 char* VAR_6 ;
 char* FUNC_7 () ;

void
FUNC_8(void)
{
 char *VAR_7;

 if ((VAR_6 = FUNC_1("TMPDIR")) == ((void*)0) || *VAR_6 == '\0')
  VAR_6 = VAR_1;
 if ((VAR_6 = FUNC_5(VAR_6)) == ((void*)0))
  FUNC_0(1, "Out of memory");

 VAR_7 = VAR_6 + FUNC_6(VAR_6) - 1;
 while (VAR_7 > VAR_6 && *VAR_7 == '/') {
  *VAR_7 = '\0';
  VAR_7--;
 }





 if (VAR_4 != ((void*)0)) {
  if (FUNC_2(VAR_4) < 0)
   FUNC_0(1, "\"%s\" is not a user of this system", VAR_4);
 } else {
  if ((VAR_7 = FUNC_7()) == ((void*)0)) {
   VAR_4 = "ubluit";
   if (VAR_5)
    FUNC_0(1, "Who are you!?");
  } else
   VAR_4 = FUNC_4(VAR_7);
 }
 if ((VAR_7 = FUNC_1("HOME")) == ((void*)0) || *VAR_7 == '\0' ||
     FUNC_6(VAR_7) >= VAR_0)
  VAR_3 = ((void*)0);
 else
  VAR_3 = FUNC_4(VAR_7);
 if (VAR_2)
  FUNC_3("user = %s, homedir = %s\n", VAR_4,
      VAR_3 ? VAR_3 : "NONE");
}
