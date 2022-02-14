
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int statistic ;
struct TYPE_6__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_8__ {int size; scalar_t__ buf_capacity; int buf_backwards; int buf_forwards; int member_0; } ;
struct TYPE_7__ {scalar_t__ app_ctx; scalar_t__ backwards_capacity; scalar_t__ forwards_capacity; int ring; } ;
typedef TYPE_2__ Context ;
typedef TYPE_3__ AVAppAsyncStatistic ;


 int FUNC_0 (scalar_t__,TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(URLContext *VAR_0)
{
    Context *VAR_1 = VAR_0->priv_data;

    if (VAR_1->app_ctx) {
        AVAppAsyncStatistic VAR_2 = {0};
        VAR_2.size = sizeof(VAR_2);
        VAR_2.buf_forwards = FUNC_1(&VAR_1->ring);
        VAR_2.buf_backwards = FUNC_2(&VAR_1->ring);
        VAR_2.buf_capacity = VAR_1->forwards_capacity + VAR_1->backwards_capacity;
        FUNC_0(VAR_1->app_ctx, &VAR_2);
    }
}
