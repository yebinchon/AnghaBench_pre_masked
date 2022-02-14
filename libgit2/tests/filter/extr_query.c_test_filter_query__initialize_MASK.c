
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;

void FUNC_2(void)
{
 VAR_0 = FUNC_1("crlf");

 FUNC_0("crlf/.gitattributes",
  "*.txt text\n"
  "*.bin binary\n"
  "*.crlf text eol=crlf\n"
  "*.lf text eol=lf\n"
  "*.binident binary ident\n"
  "*.ident text ident\n"
  "*.identcrlf ident text eol=crlf\n"
  "*.identlf ident text eol=lf\n"
  "*.custom custom ident text\n");
}
