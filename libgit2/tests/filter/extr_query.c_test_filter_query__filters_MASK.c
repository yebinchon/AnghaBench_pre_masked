
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,char*) ;

void FUNC_2(void)
{
 FUNC_0(1, FUNC_1("text.txt", "crlf"));
 FUNC_0(0, FUNC_1("binary.bin", "crlf"));

 FUNC_0(1, FUNC_1("foo.lf", "crlf"));
 FUNC_0(0, FUNC_1("foo.lf", "ident"));

 FUNC_0(1, FUNC_1("id.ident", "crlf"));
 FUNC_0(1, FUNC_1("id.ident", "ident"));

 FUNC_0(0, FUNC_1("id.binident", "crlf"));
 FUNC_0(1, FUNC_1("id.binident", "ident"));
}
