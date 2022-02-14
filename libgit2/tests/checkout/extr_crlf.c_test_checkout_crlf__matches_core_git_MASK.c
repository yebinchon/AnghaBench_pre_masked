
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char const*) ;

void FUNC_2(void)
{
 const char *VAR_0[] = { "true", "false", "input", ((void*)0) };
 const char *VAR_1[] = { "", "-crlf", "-text", "eol=crlf", "eol=lf",
  "text", "text eol=crlf", "text eol=lf",
  "text=auto", "text=auto eol=crlf", "text=auto eol=lf",
  ((void*)0) };
 const char **VAR_2, **VAR_3;

 for (VAR_2 = VAR_0; *VAR_2; VAR_2++) {
  for (VAR_3 = VAR_1; *VAR_3; VAR_3++) {
   FUNC_0("crlf");
   FUNC_1(*VAR_2, *VAR_3);
  }
 }
}
