
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ redisContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char const*,int,int *,char const*) ;
 TYPE_1__* FUNC_1 () ;

redisContext *FUNC_2(const char *VAR_2, int VAR_3,
                                                const char *VAR_4) {
    redisContext *VAR_5 = FUNC_1();
    VAR_5->flags &= ~VAR_0;
    VAR_5->flags |= VAR_1;
    FUNC_0(VAR_5,VAR_2,VAR_3,((void*)0),VAR_4);
    return VAR_5;
}
