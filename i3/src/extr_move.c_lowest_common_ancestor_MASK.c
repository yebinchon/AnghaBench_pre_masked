
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* parent; } ;
typedef TYPE_1__ Con ;


 int FUNC_0 (int) ;

__attribute__((used)) static Con *FUNC_1(Con *VAR_0, Con *VAR_1) {
    Con *VAR_2 = VAR_0;
    while (VAR_2) {
        Con *VAR_3 = VAR_1;
        while (VAR_3) {
            if (VAR_2 == VAR_3) {
                return VAR_2;
            }
            VAR_3 = VAR_3->parent;
        }
        VAR_2 = VAR_2->parent;
    }
    FUNC_0(0);
}
