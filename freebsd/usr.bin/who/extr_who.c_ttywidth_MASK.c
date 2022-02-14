
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int ws_col; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,struct winsize*) ;
 long FUNC_2 (char*,char**,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(void)
{
 struct winsize VAR_4;
 long VAR_5;
 char *VAR_6, *VAR_7;

 if ((VAR_6 = FUNC_0("COLUMNS")) != ((void*)0) && *VAR_6 != '\0') {
  VAR_3 = 0;
  VAR_5 = FUNC_2(VAR_6, &VAR_7, 10);
  if (VAR_3 || VAR_5 <= 0 || VAR_5 > VAR_0 || VAR_7 == VAR_6 ||
      *VAR_7 != '\0')
   FUNC_3("invalid COLUMNS environment variable ignored");
  else
   return (VAR_5);
 }
 if (FUNC_1(VAR_1, VAR_2, &VAR_4) != -1)
  return (VAR_4.ws_col);

 return (80);
}
