
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (struct strbuf*,char*) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static void FUNC_6(void)
{
 char *VAR_1 = FUNC_1("TMPDIR");


 if (!VAR_1) {
  if (!(VAR_1 = FUNC_1("TMP")))
   VAR_1 = FUNC_1("TEMP");
  if (VAR_1) {
   FUNC_3("TMPDIR", VAR_1, 1);
   VAR_1 = FUNC_1("TMPDIR");
  }
 }

 if (VAR_1) {






  FUNC_0(VAR_1);
 }


 if (!FUNC_1("TERM"))
  FUNC_3("TERM", "cygwin", 1);


 if (!FUNC_1("HOME")) {





  if ((VAR_1 = FUNC_1("HOMEDRIVE"))) {
   struct strbuf VAR_2 = VAR_0;
   FUNC_4(&VAR_2, VAR_1);
   if ((VAR_1 = FUNC_1("HOMEPATH"))) {
    FUNC_4(&VAR_2, VAR_1);
    if (FUNC_2(VAR_2.buf))
     FUNC_3("HOME", VAR_2.buf, 1);
    else
     VAR_1 = ((void*)0);
   }
   FUNC_5(&VAR_2);
  }

  if (!VAR_1 && (VAR_1 = FUNC_1("USERPROFILE")))
   FUNC_3("HOME", VAR_1, 1);
 }
}
