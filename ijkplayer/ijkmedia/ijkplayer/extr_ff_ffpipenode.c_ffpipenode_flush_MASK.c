
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* func_flush ) (TYPE_1__*) ;} ;
typedef TYPE_1__ IJKFF_Pipenode ;


 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(IJKFF_Pipenode *VAR_0)
{
    if (!VAR_0 || !VAR_0->func_flush)
        return 0;

    return VAR_0->func_flush(VAR_0);
}
