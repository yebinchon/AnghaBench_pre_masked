
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int redisConnectCallback ;
struct TYPE_4__ {int * onConnect; } ;
typedef TYPE_1__ redisAsyncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(redisAsyncContext *VAR_2, redisConnectCallback *VAR_3) {
    if (VAR_2->onConnect == ((void*)0)) {
        VAR_2->onConnect = VAR_3;




        FUNC_0(VAR_2);
        return VAR_1;
    }
    return VAR_0;
}
