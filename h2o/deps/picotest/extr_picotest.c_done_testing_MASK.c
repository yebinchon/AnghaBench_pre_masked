
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_tests; int failed; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;

int FUNC_2(void)
{
    FUNC_0();
    FUNC_1("1..%d\n", VAR_0->num_tests);
    return VAR_0->failed;
}
