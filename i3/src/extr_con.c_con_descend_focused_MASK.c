
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int focus_head; } ;
typedef TYPE_1__ Con ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;

Con *FUNC_2(Con *VAR_1) {
    Con *VAR_2 = VAR_1;
    while (VAR_2 != VAR_0 && !FUNC_0(&(VAR_2->focus_head)))
        VAR_2 = FUNC_1(&(VAR_2->focus_head));
    return VAR_2;
}
