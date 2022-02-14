
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char const*,char const*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(bool VAR_0, bool VAR_1, char *VAR_2)
{
 const char *VAR_3, *VAR_4;

 VAR_3 = VAR_2;
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_1 && *VAR_4 == '=') {
  VAR_2[VAR_4 - VAR_3] = '\0';
  VAR_4 = VAR_4 + 1;
 } else if (*VAR_4 == '\0') {
  VAR_4 = VAR_1 ? "1" : ((void*)0);
 } else {
  FUNC_2();
 }
 FUNC_0(VAR_0, VAR_3, VAR_4);
}
