
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* parent; int name; } ;
struct TYPE_7__ {int floating_head; } ;
typedef TYPE_2__ Con ;


 int FUNC_0 (char*,TYPE_2__*,int ) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int VAR_0 ;

void FUNC_3(Con *VAR_1) {
    FUNC_0("Raising floating con %p / %s\n", VAR_1, VAR_1->name);
    FUNC_2(&(VAR_1->parent->floating_head), VAR_1, VAR_0);
    FUNC_1(&(VAR_1->parent->floating_head), VAR_1, VAR_0);
}
