
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int t0; int t1; } ;
typedef TYPE_1__ timedelta_t ;
typedef int nstime_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

uint64_t
FUNC_3(const timedelta_t *VAR_0) {
 nstime_t VAR_1;

 FUNC_0(&VAR_1, &VAR_0->t1);
 FUNC_2(&VAR_1, &VAR_0->t0);
 return FUNC_1(&VAR_1) / 1000;
}
