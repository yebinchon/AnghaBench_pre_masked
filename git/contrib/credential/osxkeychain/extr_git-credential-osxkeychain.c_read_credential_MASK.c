
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,int,int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 void* VAR_13 ;
 void* FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
 char VAR_14[1024];

 while (FUNC_3(VAR_14, sizeof(VAR_14), VAR_12)) {
  char *VAR_15;

  if (!FUNC_5(VAR_14, "\n"))
   break;
  VAR_14[FUNC_6(VAR_14)-1] = '\0';

  VAR_15 = FUNC_4(VAR_14, '=');
  if (!VAR_15)
   FUNC_1("bad input: %s", VAR_14);
  *VAR_15++ = '\0';

  if (!FUNC_5(VAR_14, "protocol")) {
   if (!FUNC_5(VAR_15, "imap"))
    VAR_11 = VAR_5;
   else if (!FUNC_5(VAR_15, "imaps"))
    VAR_11 = VAR_6;
   else if (!FUNC_5(VAR_15, "ftp"))
    VAR_11 = VAR_1;
   else if (!FUNC_5(VAR_15, "ftps"))
    VAR_11 = VAR_2;
   else if (!FUNC_5(VAR_15, "https"))
    VAR_11 = VAR_4;
   else if (!FUNC_5(VAR_15, "http"))
    VAR_11 = VAR_3;
   else if (!FUNC_5(VAR_15, "smtp"))
    VAR_11 = VAR_7;
   else
    FUNC_2(0);
  }
  else if (!FUNC_5(VAR_14, "host")) {
   char *VAR_16 = FUNC_4(VAR_15, ':');
   if (VAR_16) {
    *VAR_16++ = '\0';
    VAR_10 = FUNC_0(VAR_16);
   }
   VAR_0 = FUNC_7(VAR_15);
  }
  else if (!FUNC_5(VAR_14, "path"))
   VAR_9 = FUNC_7(VAR_15);
  else if (!FUNC_5(VAR_14, "username"))
   VAR_13 = FUNC_7(VAR_15);
  else if (!FUNC_5(VAR_14, "password"))
   VAR_8 = FUNC_7(VAR_15);
 }
}
