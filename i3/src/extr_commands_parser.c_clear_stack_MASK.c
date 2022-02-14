
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ num; int * str; } ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ val; int * identifier; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_1(void) {
    for (int VAR_2 = 0; VAR_2 < 10; VAR_2++) {
        if (VAR_1[VAR_2].type == VAR_0)
            FUNC_0(VAR_1[VAR_2].val.str);
        VAR_1[VAR_2].identifier = ((void*)0);
        VAR_1[VAR_2].val.str = ((void*)0);
        VAR_1[VAR_2].val.num = 0;
    }
}
