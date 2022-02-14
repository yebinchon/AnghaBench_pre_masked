
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;
 double FUNC_1 (struct timespec*) ;

double
FUNC_2(void)
{
    struct timespec VAR_1;

    if (FUNC_0(VAR_0, &VAR_1) == -1)
        return (-1);

    return FUNC_1(&VAR_1);
}
