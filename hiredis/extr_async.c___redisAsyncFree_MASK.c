
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int flags; } ;
typedef TYPE_2__ redisContext ;
typedef int redisCallback ;
struct TYPE_10__ {int patterns; int channels; int invalid; } ;
struct TYPE_12__ {scalar_t__ err; int (* onDisconnect ) (TYPE_3__*,scalar_t__) ;TYPE_1__ sub; int replies; TYPE_2__ c; } ;
typedef TYPE_3__ redisAsyncContext ;
typedef int dictIterator ;
typedef int dictEntry ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*,scalar_t__) ;
 int FUNC_10 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static void FUNC_11(redisAsyncContext *VAR_4) {
    redisContext *VAR_5 = &(VAR_4->c);
    redisCallback VAR_6;
    dictIterator *VAR_7;
    dictEntry *VAR_8;


    while (FUNC_2(&VAR_4->replies,&VAR_6) == VAR_3)
        FUNC_1(VAR_4,&VAR_6,((void*)0));


    while (FUNC_2(&VAR_4->sub.invalid,&VAR_6) == VAR_3)
        FUNC_1(VAR_4,&VAR_6,((void*)0));


    VAR_7 = FUNC_4(VAR_4->sub.channels);
    while ((VAR_8 = FUNC_5(VAR_7)) != ((void*)0))
        FUNC_1(VAR_4,FUNC_3(VAR_8),((void*)0));
    FUNC_7(VAR_7);
    FUNC_6(VAR_4->sub.channels);

    VAR_7 = FUNC_4(VAR_4->sub.patterns);
    while ((VAR_8 = FUNC_5(VAR_7)) != ((void*)0))
        FUNC_1(VAR_4,FUNC_3(VAR_8),((void*)0));
    FUNC_7(VAR_7);
    FUNC_6(VAR_4->sub.patterns);


    FUNC_0(VAR_4);



    if (VAR_4->onDisconnect && (VAR_5->flags & VAR_0)) {
        if (VAR_5->flags & VAR_2) {
            VAR_4->onDisconnect(VAR_4,VAR_3);
        } else {
            VAR_4->onDisconnect(VAR_4,(VAR_4->err == 0) ? VAR_3 : VAR_1);
        }
    }


    FUNC_8(VAR_5);
}
