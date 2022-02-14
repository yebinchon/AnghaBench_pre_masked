
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int redisReply ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ redisContext ;
struct TYPE_8__ {int privdata; int (* fn ) (TYPE_3__*,int *,int ) ;} ;
typedef TYPE_2__ redisCallback ;
struct TYPE_9__ {TYPE_1__ c; } ;
typedef TYPE_3__ redisAsyncContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *,int ) ;

__attribute__((used)) static void FUNC_1(redisAsyncContext *VAR_1, redisCallback *VAR_2, redisReply *VAR_3) {
    redisContext *VAR_4 = &(VAR_1->c);
    if (VAR_2->fn != ((void*)0)) {
        VAR_4->flags |= VAR_0;
        VAR_2->fn(VAR_1,VAR_3,VAR_2->privdata);
        VAR_4->flags &= ~VAR_0;
    }
}
