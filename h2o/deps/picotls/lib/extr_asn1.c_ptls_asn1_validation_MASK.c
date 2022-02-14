
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int ctx; int (* fn ) (int ,char*,int,int) ;} ;
typedef TYPE_1__ ptls_minicrypto_log_ctx_t ;


 int VAR_0 ;
 size_t FUNC_0 (int const*,size_t,int*,int ,TYPE_1__*) ;
 int FUNC_1 (int ,char*,int,int) ;

int FUNC_2(const uint8_t *VAR_1, size_t VAR_2, ptls_minicrypto_log_ctx_t *VAR_3)
{
    int VAR_4 = 0;
    size_t VAR_5 = FUNC_0(VAR_1, VAR_2, &VAR_4, 0, VAR_3);

    if (VAR_4 == 0 && VAR_5 < VAR_2) {
        VAR_4 = VAR_0;
        if (VAR_3 != ((void*)0)) {
            VAR_3->fn(VAR_3->ctx, "Type too short, %d bytes only out of %d\n", (int)VAR_5, (int)VAR_2);
        }
    }

    return VAR_4;
}
