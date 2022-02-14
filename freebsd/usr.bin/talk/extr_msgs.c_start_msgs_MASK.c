
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tv_usec; int tv_sec; } ;
struct TYPE_3__ {scalar_t__ tv_usec; int tv_sec; } ;
struct itimerval {TYPE_2__ it_interval; TYPE_1__ it_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct itimerval*,struct itimerval*) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(void)
{
 struct itimerval VAR_5;

 FUNC_0(VAR_3);
 FUNC_2(VAR_2, VAR_4);
 VAR_5.it_value.tv_sec = VAR_5.it_interval.tv_sec = VAR_1;
 VAR_5.it_value.tv_usec = VAR_5.it_interval.tv_usec = 0;
 FUNC_1(VAR_0, &VAR_5, (struct itimerval *)0);
}
