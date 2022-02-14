
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char*,int,int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 void* FUNC_5 (char*) ;
 void* VAR_5 ;

__attribute__((used)) static void FUNC_6(void)
{
 char VAR_6[1024];

 while (FUNC_1(VAR_6, sizeof(VAR_6), VAR_4)) {
  char *VAR_7;
  int VAR_8 = FUNC_4(VAR_6);

  while (VAR_8 && FUNC_2("\r\n", VAR_6[VAR_8 - 1]))
   VAR_6[--VAR_8] = 0;

  if (!*VAR_6)
   break;

  VAR_7 = FUNC_2(VAR_6, '=');
  if (!VAR_7)
   FUNC_0("bad input: %s", VAR_6);
  *VAR_7++ = '\0';

  if (!FUNC_3(VAR_6, "protocol"))
   VAR_3 = FUNC_5(VAR_7);
  else if (!FUNC_3(VAR_6, "host"))
   VAR_0 = FUNC_5(VAR_7);
  else if (!FUNC_3(VAR_6, "path"))
   VAR_2 = FUNC_5(VAR_7);
  else if (!FUNC_3(VAR_6, "username")) {
   VAR_5 = FUNC_5(VAR_7);
  } else if (!FUNC_3(VAR_6, "password"))
   VAR_1 = FUNC_5(VAR_7);
  else
   FUNC_0("unrecognized input");
 }
}
