
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int (* uniform ) (int const) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int const) ;

uint32_t
FUNC_3(const uint32_t VAR_1)
{
    uint32_t VAR_2;
    uint32_t VAR_3;

    FUNC_0();
    if (VAR_0->uniform != ((void*)0)) {
        return VAR_0->uniform(VAR_1);
    }
    if (VAR_1 < 2) {
        return 0;
    }
    VAR_2 = (1U + ~VAR_1) % VAR_1;
    do {
        VAR_3 = FUNC_1();
    } while (VAR_3 < VAR_2);



    return VAR_3 % VAR_1;
}
