
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;

void FUNC_1(void)
{
 FUNC_0("", "\"\"");
 FUNC_0(" ", "\" \"");
 FUNC_0("foo", "\"foo\"");
 FUNC_0("foo bar", "\"foo bar\"");
 FUNC_0("foo\"bar", "\"foo\\\"bar\"");
 FUNC_0("foo\\bar", "\"foo\\\\bar\"");
 FUNC_0("foo\tbar", "\"foo\\tbar\"");
 FUNC_0("\vfoo\tbar\n", "\"\\vfoo\\tbar\\n\"");
 FUNC_0("foo\nbar", "\"foo\\012bar\"");
 FUNC_0("foo\r\nbar", "\"foo\\015\\012bar\"");
 FUNC_0("foo\r\nbar", "\"\\146\\157\\157\\015\\012\\142\\141\\162\"");
 FUNC_0("newline: \n", "\"newline: \\012\"");
 FUNC_0("0xff: \377", "\"0xff: \\377\"");
}
