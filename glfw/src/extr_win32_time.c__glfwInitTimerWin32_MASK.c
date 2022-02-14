
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int frequency; int hasPC; } ;
struct TYPE_5__ {TYPE_1__ win32; } ;
struct TYPE_6__ {TYPE_2__ timer; } ;
typedef int LARGE_INTEGER ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_3__ VAR_2 ;

void FUNC_1(void)
{
    uint64_t VAR_3;

    if (FUNC_0((LARGE_INTEGER*) &VAR_3))
    {
        VAR_2.timer.win32.hasPC = VAR_1;
        VAR_2.timer.win32.frequency = VAR_3;
    }
    else
    {
        VAR_2.timer.win32.hasPC = VAR_0;
        VAR_2.timer.win32.frequency = 1000;
    }
}
