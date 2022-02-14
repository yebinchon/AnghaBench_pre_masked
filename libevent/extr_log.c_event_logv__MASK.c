
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,int,char*,char const*) ;
 int FUNC_3 (char*,int,char const*,int ) ;
 size_t FUNC_4 (char*) ;

void
FUNC_5(int VAR_1, const char *VAR_2, const char *VAR_3, va_list VAR_4)
{
 char VAR_5[1024];
 size_t VAR_6;

 if (VAR_1 == VAR_0 && !FUNC_0())
  return;

 if (VAR_3 != ((void*)0))
  FUNC_3(VAR_5, sizeof(VAR_5), VAR_3, VAR_4);
 else
  VAR_5[0] = '\0';

 if (VAR_2) {
  VAR_6 = FUNC_4(VAR_5);
  if (VAR_6 < sizeof(VAR_5) - 3) {
   FUNC_2(VAR_5 + VAR_6, sizeof(VAR_5) - VAR_6, ": %s", VAR_2);
  }
 }

 FUNC_1(VAR_1, VAR_5);
}
