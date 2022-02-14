
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* type; scalar_t__ items; int array; } ;
typedef TYPE_2__ Vector ;
struct TYPE_5__ {int compare; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;

void FUNC_3(Vector* VAR_0) {
   FUNC_1(VAR_0->type->compare);
   FUNC_1(FUNC_0(VAR_0));
   FUNC_2(VAR_0->array, 0, VAR_0->items - 1, VAR_0->type->compare);
   FUNC_1(FUNC_0(VAR_0));
}
