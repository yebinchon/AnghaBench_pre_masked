
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_4__ {int frequency; int monotonic; } ;
struct TYPE_5__ {TYPE_1__ posix; } ;
struct TYPE_6__ {TYPE_2__ timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,struct timespec*) ;

void FUNC_1(void)
{
    {
        VAR_3.timer.posix.monotonic = VAR_1;
        VAR_3.timer.posix.frequency = 1000000;
    }
}
