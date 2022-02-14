
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ecmult_ctx; int ecmult_gen_ctx; int illegal_callback; int error_callback; } ;
typedef TYPE_1__ secp256k1_context ;


 scalar_t__ FUNC_0 (int,int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (void**,int,void* const,size_t) ;
 int FUNC_3 (int *,char*) ;
 size_t FUNC_4 (unsigned int) ;
 int FUNC_5 (int *,void**) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,void**) ;
 int FUNC_8 (int *) ;

secp256k1_context* FUNC_9(void* VAR_6, unsigned int VAR_7) {
    void* const VAR_8 = VAR_6;
    size_t VAR_9;
    secp256k1_context* VAR_10;

    FUNC_1(VAR_6 != ((void*)0));
    VAR_9 = FUNC_4(VAR_7);
    VAR_10 = (secp256k1_context*)FUNC_2(&VAR_6, sizeof(secp256k1_context), VAR_8, VAR_9);
    VAR_10->illegal_callback = VAR_5;
    VAR_10->error_callback = VAR_4;

    if (FUNC_0((VAR_7 & VAR_3) != VAR_2, 0)) {
            FUNC_3(&VAR_10->illegal_callback,
                                    "Invalid flags");
            return ((void*)0);
    }

    FUNC_6(&VAR_10->ecmult_ctx);
    FUNC_8(&VAR_10->ecmult_gen_ctx);

    if (VAR_7 & VAR_0) {
        FUNC_7(&VAR_10->ecmult_gen_ctx, &VAR_6);
    }
    if (VAR_7 & VAR_1) {
        FUNC_5(&VAR_10->ecmult_ctx, &VAR_6);
    }

    return (secp256k1_context*) VAR_10;
}
