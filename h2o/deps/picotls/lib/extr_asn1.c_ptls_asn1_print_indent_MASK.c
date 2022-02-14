
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctx; int (* fn ) (int ,char*) ;} ;
typedef TYPE_1__ ptls_minicrypto_log_ctx_t ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(int VAR_0, ptls_minicrypto_log_ctx_t *VAR_1)
{
    for (int VAR_2 = 0; VAR_2 <= VAR_0; VAR_2++) {
        VAR_1->fn(VAR_1->ctx, "   ");
    }
}
