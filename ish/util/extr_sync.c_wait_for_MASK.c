
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
typedef int lock_t ;
typedef int cond_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,struct timespec*) ;

int FUNC_2(cond_t *VAR_2, lock_t *VAR_3, struct timespec *VAR_4) {
    if (FUNC_0(VAR_3))
        return VAR_0;
    int VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
    if (VAR_5 < 0)
        return VAR_1;
    if (FUNC_0(VAR_3))
        return VAR_0;
    return 0;
}
