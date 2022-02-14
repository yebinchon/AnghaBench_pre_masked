
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* parent; int focus_head; } ;
typedef TYPE_1__ Con ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_2(Con *VAR_0, Con *VAR_1) {
    Con *VAR_2 = VAR_0;
    while (VAR_2 != VAR_1) {
        if (FUNC_0(&(VAR_2->parent->focus_head)) != VAR_2) {
            return 0;
        }
        VAR_2 = VAR_2->parent;
        FUNC_1(VAR_2->parent);
    }
    return 1;
}
