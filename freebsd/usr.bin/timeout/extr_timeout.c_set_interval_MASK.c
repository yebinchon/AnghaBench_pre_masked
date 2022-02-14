
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int tim ;
typedef scalar_t__ suseconds_t ;
struct TYPE_2__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct itimerval {TYPE_1__ it_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct itimerval*,int ,int) ;
 int FUNC_2 (int ,struct itimerval*,int *) ;

__attribute__((used)) static void
FUNC_3(double VAR_2)
{
 struct itimerval VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.it_value.tv_sec = (time_t)VAR_2;
 VAR_2 -= (time_t)VAR_2;
 VAR_3.it_value.tv_usec = (suseconds_t)(VAR_2 * 1000000UL);

 if (FUNC_2(VAR_1, &VAR_3, ((void*)0)) == -1)
  FUNC_0(VAR_0, "setitimer()");
}
