
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sival_int; } ;
struct TYPE_5__ {scalar_t__ si_code; TYPE_1__ si_value; } ;
typedef TYPE_2__ siginfo_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;

void
FUNC_1(int VAR_2, siginfo_t *VAR_3, void *VAR_4)
{
 if (VAR_3->si_code != VAR_0)
  FUNC_0(1, "si_code != SI_QUEUE");
 if (VAR_3->si_value.sival_int != VAR_1)
  FUNC_0(1, "signal is out of order");
 VAR_1++;
}
