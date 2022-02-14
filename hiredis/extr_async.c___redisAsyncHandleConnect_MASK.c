
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int flags; } ;
typedef TYPE_1__ redisContext ;
struct TYPE_10__ {int (* onConnect ) (TYPE_2__*,int) ;TYPE_1__ c; } ;
typedef TYPE_2__ redisAsyncContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_5(redisAsyncContext *VAR_3) {
    int VAR_4 = 0;
    redisContext *VAR_5 = &(VAR_3->c);
    if (FUNC_1(VAR_5, &VAR_4) == VAR_1) {

        FUNC_2(VAR_5);
        if (VAR_3->onConnect) VAR_3->onConnect(VAR_3, VAR_1);
        FUNC_0(VAR_3);
        return VAR_1;
    } else if (VAR_4 == 1) {

        if (VAR_3->onConnect) VAR_3->onConnect(VAR_3, VAR_2);
        VAR_5->flags |= VAR_0;
        return VAR_2;
    } else {
        return VAR_2;
    }
}
