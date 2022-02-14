
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ orientation_t ;
struct TYPE_5__ {scalar_t__ type; struct TYPE_5__* parent; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

Con *FUNC_2(Con *VAR_2, orientation_t VAR_3) {
    FUNC_0("Searching for parent of Con %p with orientation %d\n", VAR_2, VAR_3);
    Con *VAR_4 = VAR_2->parent;
    if (VAR_4->type == VAR_0)
        return ((void*)0);
    while (FUNC_1(VAR_4) != VAR_3) {
        FUNC_0("Need to go one level further up\n");
        VAR_4 = VAR_4->parent;

        if (VAR_4 &&
            (VAR_4->type == VAR_0 ||
             VAR_4->type == VAR_1 ||
             (VAR_4->parent && VAR_4->parent->type == VAR_1)))
            VAR_4 = ((void*)0);
        if (VAR_4 == ((void*)0))
            break;
    }
    FUNC_0("Result: %p\n", VAR_4);
    return VAR_4;
}
