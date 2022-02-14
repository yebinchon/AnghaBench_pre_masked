
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_ctx {int ts_type; } ;
typedef int clockid_t ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 () ;

__attribute__((used)) static clockid_t
FUNC_1(struct test_ctx *VAR_2)
{
    switch (VAR_2->ts_type) {
    case 129:
    case 133:
    case 130:
    case 128:
    case 131:
        return (VAR_1);

    case 132:
        return (VAR_0);
    }
    FUNC_0();
}
