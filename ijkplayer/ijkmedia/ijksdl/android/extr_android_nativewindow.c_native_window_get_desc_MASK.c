
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fcc_or_hal; } ;
typedef TYPE_1__ AndroidHalFourccDescriptor ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

AndroidHalFourccDescriptor *FUNC_1(int VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); ++VAR_2) {
        AndroidHalFourccDescriptor *VAR_3 = &VAR_0[VAR_2];
        if (VAR_3->fcc_or_hal == VAR_1)
            return VAR_3;
    }

    return ((void*)0);
}
