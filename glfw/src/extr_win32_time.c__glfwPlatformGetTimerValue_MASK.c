
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {scalar_t__ hasPC; } ;
struct TYPE_5__ {TYPE_1__ win32; } ;
struct TYPE_6__ {TYPE_2__ timer; } ;
typedef int LARGE_INTEGER ;


 int FUNC_0 (int *) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 () ;

uint64_t FUNC_2(void)
{
    if (VAR_0.timer.win32.hasPC)
    {
        uint64_t VAR_1;
        FUNC_0((LARGE_INTEGER*) &VAR_1);
        return VAR_1;
    }
    else
        return (uint64_t) FUNC_1();
}
