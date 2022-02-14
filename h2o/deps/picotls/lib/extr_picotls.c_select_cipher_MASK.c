
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ id; } ;
typedef TYPE_1__ ptls_cipher_suite_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int const**,int const* const) ;

__attribute__((used)) static int FUNC_1(ptls_cipher_suite_t **VAR_1, ptls_cipher_suite_t **VAR_2, const uint8_t *VAR_3,
                         const uint8_t *const VAR_4)
{
    int VAR_5;

    while (VAR_3 != VAR_4) {
        uint16_t VAR_6;
        if ((VAR_5 = FUNC_0(&VAR_6, &VAR_3, VAR_4)) != 0)
            goto Exit;
        ptls_cipher_suite_t **VAR_7 = VAR_2;
        for (; *VAR_7 != ((void*)0); ++VAR_7) {
            if ((*VAR_7)->id == VAR_6) {
                *VAR_1 = *VAR_7;
                return 0;
            }
        }
    }

    VAR_5 = VAR_0;

Exit:
    return VAR_5;
}
