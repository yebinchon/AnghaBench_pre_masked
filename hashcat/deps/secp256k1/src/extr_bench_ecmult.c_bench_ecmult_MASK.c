
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t count; int includes_g; size_t offset1; size_t offset2; int * scalars; int * output; int scratch; TYPE_1__* ctx; int (* ecmult_multi ) (int *,int *,int ,int *,int *,int ,void*,size_t) ;} ;
typedef TYPE_2__ bench_data ;
struct TYPE_3__ {int ecmult_ctx; int error_callback; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,int *,int *,int ,void*,size_t) ;

__attribute__((used)) static void FUNC_1(void* VAR_3) {
    bench_data* VAR_4 = (bench_data*)VAR_3;

    size_t VAR_5 = VAR_4->count;
    int VAR_6 = VAR_4->includes_g;
    size_t VAR_7 = 1 + VAR_0 / VAR_5;
    size_t VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_7; ++VAR_8) {
        VAR_4->ecmult_multi(&VAR_4->ctx->error_callback, &VAR_4->ctx->ecmult_ctx, VAR_4->scratch, &VAR_4->output[VAR_8], VAR_4->includes_g ? &VAR_4->scalars[VAR_4->offset1] : ((void*)0), VAR_2, VAR_3, VAR_5 - VAR_6);
        VAR_4->offset1 = (VAR_4->offset1 + VAR_5) % VAR_1;
        VAR_4->offset2 = (VAR_4->offset2 + VAR_5 - 1) % VAR_1;
    }
}
