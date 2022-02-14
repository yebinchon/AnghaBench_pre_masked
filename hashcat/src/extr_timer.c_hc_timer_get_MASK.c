
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tv_sec; scalar_t__ tv_nsec; scalar_t__ tv_usec; } ;
typedef TYPE_1__ hc_timer_t ;


 int FUNC_0 (TYPE_1__*) ;

double FUNC_1 (hc_timer_t VAR_0)
{
  hc_timer_t VAR_1;

  FUNC_0 (&VAR_1);




  hc_timer_t VAR_2;

  VAR_2.tv_sec = VAR_1.tv_sec - VAR_0.tv_sec;
  VAR_2.tv_nsec = VAR_1.tv_nsec - VAR_0.tv_nsec;

  if (VAR_2.tv_nsec < 0)
  {
    VAR_2.tv_sec -= 1;
    VAR_2.tv_nsec += 1000000000;
  }

  double VAR_3 = ((double) VAR_2.tv_sec * 1000) + ((double) VAR_2.tv_nsec / 1000000);

  return VAR_3;

}
