
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int,int,int,int) ;

void FUNC_1(void)
{
 FUNC_0("a1B", "[[:alpha:]][[:digit:]][[:upper:]]", 1, 1, 1, 1);
 FUNC_0("a", "[[:digit:][:upper:][:space:]]", 0, 1, 0, 1);
 FUNC_0("A", "[[:digit:][:upper:][:space:]]", 1, 1, 1, 1);
 FUNC_0("1", "[[:digit:][:upper:][:space:]]", 1, 1, 1, 1);
 FUNC_0("1", "[[:digit:][:upper:][:spaci:]]", 0, 0, 0, 0);
 FUNC_0(" ", "[[:digit:][:upper:][:space:]]", 1, 1, 1, 1);
 FUNC_0(".", "[[:digit:][:upper:][:space:]]", 0, 0, 0, 0);
 FUNC_0(".", "[[:digit:][:punct:][:space:]]", 1, 1, 1, 1);
 FUNC_0("5", "[[:xdigit:]]", 1, 1, 1, 1);
 FUNC_0("f", "[[:xdigit:]]", 1, 1, 1, 1);
 FUNC_0("D", "[[:xdigit:]]", 1, 1, 1, 1);
 FUNC_0("_", "[[:alnum:][:alpha:][:blank:][:cntrl:][:digit:][:graph:][:lower:][:print:][:punct:][:space:][:upper:][:xdigit:]]", 1, 1, 1, 1);
 FUNC_0(".", "[^[:alnum:][:alpha:][:blank:][:cntrl:][:digit:][:lower:][:space:][:upper:][:xdigit:]]", 1, 1, 1, 1);
 FUNC_0("5", "[a-c[:digit:]x-z]", 1, 1, 1, 1);
 FUNC_0("b", "[a-c[:digit:]x-z]", 1, 1, 1, 1);
 FUNC_0("y", "[a-c[:digit:]x-z]", 1, 1, 1, 1);
 FUNC_0("q", "[a-c[:digit:]x-z]", 0, 0, 0, 0);
}
