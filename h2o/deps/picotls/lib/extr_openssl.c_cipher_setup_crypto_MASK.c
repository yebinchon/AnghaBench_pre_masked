
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void (* do_transform ) (int *,void*,void const*,size_t) ;int do_init; int do_dispose; } ;
struct cipher_context_t {int * evp; TYPE_1__ super; } ;
typedef int ptls_cipher_context_t ;
typedef int EVP_CIPHER ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int const*,int *,void const*,int *) ;
 int FUNC_4 (int *,int const*,int *,void const*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(ptls_cipher_context_t *VAR_4, int VAR_5, const void *VAR_6, const EVP_CIPHER *VAR_7,
                               void (*VAR_8)(ptls_cipher_context_t *, void *, const void *, size_t))
{
    struct cipher_context_t *VAR_9 = (struct cipher_context_t *)VAR_4;

    VAR_9->super.do_dispose = VAR_2;
    VAR_9->super.do_init = VAR_3;
    VAR_9->super.do_transform = VAR_8;

    if ((VAR_9->evp = FUNC_1()) == ((void*)0))
        return VAR_1;

    if (VAR_5) {
        if (!FUNC_4(VAR_9->evp, VAR_7, ((void*)0), VAR_6, ((void*)0)))
            goto Error;
    } else {
        if (!FUNC_3(VAR_9->evp, VAR_7, ((void*)0), VAR_6, ((void*)0)))
            goto Error;
        FUNC_2(VAR_9->evp, 0);
    }

    return 0;
Error:
    FUNC_0(VAR_9->evp);
    return VAR_0;
}
