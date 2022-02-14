
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int buf; int * reply; TYPE_1__* fn; } ;
typedef TYPE_2__ redisReader ;
struct TYPE_5__ {int (* freeObject ) (int *) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(redisReader *VAR_0) {
    if (VAR_0 == ((void*)0))
        return;
    if (VAR_0->reply != ((void*)0) && VAR_0->fn && VAR_0->fn->freeObject)
        VAR_0->fn->freeObject(VAR_0->reply);
    FUNC_1(VAR_0->buf);
    FUNC_0(VAR_0);
}
