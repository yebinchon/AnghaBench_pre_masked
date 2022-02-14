
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int speed ;
typedef int int64_t ;
struct TYPE_6__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_8__ {int size; int is_full_speed; int io_bytes; int elapsed_milli; int member_0; } ;
struct TYPE_7__ {scalar_t__ app_ctx; } ;
typedef TYPE_2__ Context ;
typedef TYPE_3__ AVAppAsyncReadSpeed ;


 int FUNC_0 (scalar_t__,TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(URLContext *VAR_0, int VAR_1, int64_t VAR_2, int64_t VAR_3)
{
    Context *VAR_4 = VAR_0->priv_data;
    int64_t VAR_5 = VAR_3 / 1000;

    if (VAR_4->app_ctx && VAR_2 > 0 && VAR_5 > 0) {
        AVAppAsyncReadSpeed VAR_6 = {0};
        VAR_6.size = sizeof(VAR_6);
        VAR_6.is_full_speed = VAR_1;
        VAR_6.io_bytes = VAR_2;
        VAR_6.elapsed_milli = VAR_5;
        FUNC_0(VAR_4->app_ctx, &VAR_6);
    }
}
