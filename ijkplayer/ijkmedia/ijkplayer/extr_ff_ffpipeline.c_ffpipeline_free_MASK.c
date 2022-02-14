
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* opaque; int (* func_destroy ) (TYPE_1__*) ;} ;
typedef TYPE_1__ IJKFF_Pipeline ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(IJKFF_Pipeline *VAR_0)
{
    if (!VAR_0)
        return;

    if (VAR_0->func_destroy) {
        VAR_0->func_destroy(VAR_0);
    }

    FUNC_0(VAR_0->opaque);
    FUNC_1(VAR_0, 0, sizeof(IJKFF_Pipeline));
    FUNC_0(VAR_0);
}
