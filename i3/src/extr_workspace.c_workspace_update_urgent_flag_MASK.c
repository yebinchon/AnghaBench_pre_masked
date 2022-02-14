
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int urgent; } ;
typedef TYPE_1__ Con ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,TYPE_1__*,int *) ;

void FUNC_3(Con *VAR_0) {
    bool VAR_1 = VAR_0->urgent;
    VAR_0->urgent = FUNC_1(VAR_0);
    FUNC_0("Workspace urgency flag changed from %d to %d\n", VAR_1, VAR_0->urgent);

    if (VAR_1 != VAR_0->urgent)
        FUNC_2("urgent", VAR_0, ((void*)0));
}
