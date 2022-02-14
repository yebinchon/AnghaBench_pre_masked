
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;

void FUNC_3(void)
{
 FUNC_1(FUNC_2("*.example.org", "www.example.org"));
 FUNC_1(FUNC_2("*.foo.example.org", "www.foo.example.org"));
 FUNC_0(FUNC_2("*.foo.example.org", "foo.example.org"));
 FUNC_0(FUNC_2("*.foo.example.org", "www.example.org"));
 FUNC_0(FUNC_2("*.example.org", "example.org"));
 FUNC_0(FUNC_2("*.example.org", "www.foo.example.org"));
 FUNC_0(FUNC_2("*.example.org", "blah.www.www.example.org"));
}
