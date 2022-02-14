
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* ucs2; struct TYPE_4__* utf8; } ;
typedef TYPE_1__ i3String ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(i3String *VAR_0) {
    if (VAR_0 == ((void*)0))
        return;
    FUNC_0(VAR_0->utf8);
    FUNC_0(VAR_0->ucs2);
    FUNC_0(VAR_0);
}
