
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;

void FUNC_1(void)
{
 FUNC_0("", "");
 FUNC_0("foo", "foo");
 FUNC_0("foo/bar/baz.c", "foo/bar/baz.c");
 FUNC_0("foo bar", "foo bar");
 FUNC_0("\"\\\"leading quote\"", "\"leading quote");
 FUNC_0("\"slash\\\\y\"", "slash\\y");
 FUNC_0("\"foo\\r\\nbar\"", "foo\r\nbar");
 FUNC_0("\"foo\\177bar\"", "foo\177bar");
 FUNC_0("\"foo\\001bar\"", "foo\001bar");
 FUNC_0("\"foo\\377bar\"", "foo\377bar");
}
