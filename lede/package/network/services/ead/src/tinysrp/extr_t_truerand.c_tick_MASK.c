
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_3__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct itimerval {TYPE_2__ it_value; TYPE_1__ it_interval; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,struct itimerval*,struct itimerval*) ;

__attribute__((used)) static void
FUNC_2()
{
 struct itimerval VAR_1, VAR_2;

 VAR_1.it_interval.tv_sec = 0;
 VAR_1.it_interval.tv_usec = 0;
 VAR_1.it_value.tv_sec = 0;
 VAR_1.it_value.tv_usec = 16665;
 if (FUNC_1(VAR_0, &VAR_1, &VAR_2) < 0)
  FUNC_0("tick");
}
