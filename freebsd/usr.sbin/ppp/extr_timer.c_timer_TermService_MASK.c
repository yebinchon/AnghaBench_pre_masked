
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_3__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct itimerval {TYPE_2__ it_value; TYPE_1__ it_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,struct itimerval*,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(void)
{
  struct itimerval VAR_5;

  VAR_5.it_interval.tv_usec = VAR_5.it_interval.tv_sec = 0;
  VAR_5.it_value.tv_usec = VAR_5.it_value.tv_sec = 0;
  if (FUNC_1(VAR_0, &VAR_5, ((void*)0)) == -1)
    FUNC_0(VAR_1, "Unable to set itimer (%s)\n", FUNC_3(VAR_4));
  FUNC_2(VAR_2, VAR_3);
}
