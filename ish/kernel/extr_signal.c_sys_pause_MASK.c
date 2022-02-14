
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int_t ;
struct TYPE_4__ {TYPE_1__* sighand; int pause; } ;
struct TYPE_3__ {int lock; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;

int_t FUNC_3() {
    FUNC_0(&VAR_1->sighand->lock);
    while (FUNC_2(&VAR_1->pause, &VAR_1->sighand->lock, ((void*)0)) != VAR_0)
        continue;
    FUNC_1(&VAR_1->sighand->lock);
    return VAR_0;
}
