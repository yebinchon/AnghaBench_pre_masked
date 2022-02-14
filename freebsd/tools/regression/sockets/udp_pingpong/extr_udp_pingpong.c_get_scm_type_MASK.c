
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_ctx {int ts_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(struct test_ctx *VAR_4)
{
    switch (VAR_4->ts_type) {
    case 129:
    case 130:
        return (VAR_3);

    case 133:
    case 128:
        return (VAR_0);

    case 131:
        return (VAR_2);

    case 132:
        return (VAR_1);
    }
    FUNC_0();
}
