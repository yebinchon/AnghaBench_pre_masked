
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ctx; int (* fn ) (int ,char*,int) ;} ;
typedef TYPE_1__ ptls_minicrypto_log_ctx_t ;
struct TYPE_10__ {scalar_t__ len; } ;
struct TYPE_9__ {TYPE_7__ vec; } ;
typedef TYPE_2__ ptls_asn1_pkcs8_private_key_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,TYPE_7__*,int,size_t*) ;
 int FUNC_1 (TYPE_2__*,int*,TYPE_1__*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(char const *VAR_1, ptls_asn1_pkcs8_private_key_t *VAR_2,
                                      ptls_minicrypto_log_ctx_t *VAR_3)
{
    size_t VAR_4 = 0;
    int VAR_5 = FUNC_0(VAR_1, "PRIVATE KEY", &VAR_2->vec, 1, &VAR_4);

    if (VAR_5 == 0) {
        if (VAR_4 != 1) {
            VAR_5 = VAR_0;
        }
    }

    if (VAR_5 == 0 && VAR_4 == 1) {
        int VAR_6 = 0;

        if (VAR_3 != ((void*)0)) {
            VAR_3->fn(VAR_3->ctx, "\nFound PRIVATE KEY, length = %d bytes\n", (int)VAR_2->vec.len);
        }

        (void)FUNC_1(VAR_2, &VAR_6, VAR_3);

        if (VAR_6 != 0) {
            VAR_5 = VAR_6;
        }
    }

    return VAR_5;
}
