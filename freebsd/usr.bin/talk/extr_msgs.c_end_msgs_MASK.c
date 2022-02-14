
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itimerval {int it_interval; int it_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct itimerval*,struct itimerval*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(void)
{
 struct itimerval VAR_3;

 FUNC_2(&VAR_3.it_value);
 FUNC_2(&VAR_3.it_interval);
 FUNC_0(VAR_0, &VAR_3, (struct itimerval *)0);
 FUNC_1(VAR_1, VAR_2);
}
