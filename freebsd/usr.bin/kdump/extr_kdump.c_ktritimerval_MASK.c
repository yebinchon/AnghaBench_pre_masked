
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itimerval {int it_value; int it_interval; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;

void
FUNC_2(struct itimerval *VAR_0)
{

 FUNC_1("itimerval { .interval = ");
 FUNC_0(&VAR_0->it_interval);
 FUNC_1(", .value = ");
 FUNC_0(&VAR_0->it_value);
 FUNC_1(" }\n");
}
