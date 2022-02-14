
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;

void FUNC_1(void)
{
 FUNC_0("", "");
 FUNC_0(" ", "%20");
 FUNC_0("a", "a");
 FUNC_0(" a", "%20a");
 FUNC_0("a ", "a%20");
 FUNC_0("github.com", "github.com");
 FUNC_0("github.com", "githu%62.com");
 FUNC_0("github.com", "github%2ecom");
 FUNC_0("foo bar baz", "foo%20bar%20baz");
 FUNC_0("foo bar baz", "foo%20bar%20baz");
 FUNC_0("foo bar ", "foo%20bar%20");
}
