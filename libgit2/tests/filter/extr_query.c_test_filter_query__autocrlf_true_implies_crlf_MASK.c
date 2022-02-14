
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,char*) ;
 int VAR_0 ;

void FUNC_3(void)
{
 FUNC_1(VAR_0, "core.autocrlf", 1);
 FUNC_0(1, FUNC_2("not_in_gitattributes", "crlf"));
 FUNC_0(1, FUNC_2("foo.txt", "crlf"));
 FUNC_0(0, FUNC_2("foo.bin", "crlf"));
 FUNC_0(1, FUNC_2("foo.lf", "crlf"));

 FUNC_1(VAR_0, "core.autocrlf", 0);
 FUNC_0(0, FUNC_2("not_in_gitattributes", "crlf"));
 FUNC_0(1, FUNC_2("foo.txt", "crlf"));
 FUNC_0(0, FUNC_2("foo.bin", "crlf"));
 FUNC_0(1, FUNC_2("foo.lf", "crlf"));
}
