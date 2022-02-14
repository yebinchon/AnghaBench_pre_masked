
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int ctx; int (* fn ) (int ,char*,char const*,int,int ,int) ;} ;
typedef TYPE_1__ ptls_minicrypto_log_ctx_t ;


 int FUNC_0 (int,TYPE_1__*) ;
 int FUNC_1 (int ,char*,char const*,int,int ,int) ;

size_t FUNC_2(char const *VAR_0, size_t VAR_1, size_t VAR_2, int VAR_3,
                               ptls_minicrypto_log_ctx_t *VAR_4)
{
    if (VAR_4 != ((void*)0)) {
        FUNC_0(VAR_3, VAR_4);
        VAR_4->fn(VAR_4->ctx, "Error: %s (near position: %d (0x%x) out of %d)", VAR_0, (int)VAR_2,
                    (uint32_t)VAR_2, (int)VAR_1);
    }
    return VAR_2;
}
