
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fd {int * ops; } ;
struct TYPE_3__ {scalar_t__ count; int listen; } ;
struct TYPE_4__ {TYPE_1__ sockrestart; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;

void FUNC_3(struct fd *VAR_4) {
    if (VAR_4->ops != &VAR_2)
        return;
    FUNC_1(&VAR_3);
    if (VAR_0->sockrestart.count == 0)
        FUNC_0(&VAR_1, &VAR_0->sockrestart.listen);
    VAR_0->sockrestart.count++;
    FUNC_2(&VAR_3);
}
