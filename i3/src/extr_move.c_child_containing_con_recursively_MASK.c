
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* parent; } ;
typedef TYPE_1__ Con ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static Con *FUNC_1(Con *VAR_0, Con *VAR_1) {
    Con *VAR_2 = VAR_1;
    while (VAR_2 && VAR_2->parent != VAR_0) {
        VAR_2 = VAR_2->parent;
        FUNC_0(VAR_2->parent);
    }
    return VAR_2;
}
