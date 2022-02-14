
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int array; TYPE_2__* string; int object; } ;
struct TYPE_7__ {TYPE_1__ value; } ;
typedef TYPE_2__ JSON_Value ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(JSON_Value *VAR_0) {
    switch (FUNC_2(VAR_0)) {
        case 129:
            FUNC_1(VAR_0->value.object);
            break;
        case 128:
            FUNC_3(VAR_0->value.string);
            break;
        case 130:
            FUNC_0(VAR_0->value.array);
            break;
        default:
            break;
    }
    FUNC_3(VAR_0);
}
