
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_3__ {int tv_sec; int tv_nsec; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 TYPE_1__ VAR_2 ;

void
FUNC_1(void)
{

 VAR_1.tv_sec = (-1) & ~((time_t)1 << ((sizeof(VAR_2.tv_sec) * 8) - 1));
 VAR_1.tv_nsec = (-1) & ~((long)1 << ((sizeof(VAR_2.tv_nsec) * 8) - 1));
 VAR_2 = VAR_1;
 FUNC_0(&VAR_0);
}
