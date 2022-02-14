
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
typedef TYPE_1__ redisReply ;


 TYPE_1__* FUNC_0 (int,int) ;

__attribute__((used)) static redisReply *FUNC_1(int VAR_0) {
    redisReply *VAR_1 = FUNC_0(1,sizeof(*VAR_1));

    if (VAR_1 == ((void*)0))
        return ((void*)0);

    VAR_1->type = VAR_0;
    return VAR_1;
}
