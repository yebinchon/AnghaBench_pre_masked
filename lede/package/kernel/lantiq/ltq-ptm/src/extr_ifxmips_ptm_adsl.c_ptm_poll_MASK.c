
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vlddes; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,int) ;
 TYPE_1__* FUNC_2 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static unsigned int FUNC_4(int VAR_1, unsigned int VAR_2)
{
    unsigned int VAR_3 = 0;

    FUNC_1(VAR_1 >= 0 && VAR_1 < FUNC_0(VAR_0), "ndev = %d (wrong value)", VAR_1);

    while ( VAR_3 < VAR_2 && FUNC_2(VAR_1)->vlddes > 0 ) {
        if ( FUNC_3(VAR_1) < 0 )
            break;

        VAR_3++;
    }

    return VAR_3;
}
