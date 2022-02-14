
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_t {int failed; } ;


 int FUNC_0 (int,char*,char const*) ;
 struct test_t* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char const*) ;
 int VAR_1 ;

void FUNC_3(const char *VAR_2, void (*VAR_3)(void))
{
    struct test_t VAR_4 = {}, *VAR_5;

    VAR_5 = VAR_0;
    VAR_0 = &VAR_4;
    ++VAR_1;

    FUNC_2("Subtest: %s", VAR_2);

    VAR_3();

    FUNC_1();

    --VAR_1;
    VAR_0 = VAR_5;
    if (VAR_4.failed)
        VAR_0->failed = 1;
    FUNC_0(! VAR_4.failed, "%s", VAR_2);
}
