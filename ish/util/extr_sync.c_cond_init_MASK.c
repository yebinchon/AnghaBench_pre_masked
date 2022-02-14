
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pthread_condattr_t ;
struct TYPE_3__ {int cond; } ;
typedef TYPE_1__ cond_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(cond_t *VAR_1) {
    pthread_condattr_t VAR_2;
    FUNC_1(&VAR_2);

    FUNC_2(&VAR_2, VAR_0);

    FUNC_0(&VAR_1->cond, &VAR_2);
}
