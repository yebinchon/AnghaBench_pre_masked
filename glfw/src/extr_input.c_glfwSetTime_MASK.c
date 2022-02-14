
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ offset; } ;
struct TYPE_4__ {TYPE_1__ timer; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int ,char*,double) ;
 double FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

void FUNC_4(double VAR_2)
{
    FUNC_0();

    if (VAR_2 != VAR_2 || VAR_2 < 0.0 || VAR_2 > 18446744073.0)
    {
        FUNC_1(VAR_0, "Invalid time %f", VAR_2);
        return;
    }

    VAR_1.timer.offset = FUNC_3() -
        (uint64_t) (VAR_2 * FUNC_2());
}
