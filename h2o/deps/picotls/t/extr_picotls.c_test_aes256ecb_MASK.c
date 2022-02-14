
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_1__* aead; } ;
typedef TYPE_2__ ptls_cipher_suite_t ;
typedef int expected ;
struct TYPE_4__ {int ecb_cipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int const*,int) ;

__attribute__((used)) static void FUNC_2(void)
{
    static const uint8_t VAR_2[] = {0x8E, 0xA2, 0xB7, 0xCA, 0x51, 0x67, 0x45, 0xBF,
                                       0xEA, 0xFC, 0x49, 0x90, 0x4B, 0x49, 0x60, 0x89};
    ptls_cipher_suite_t *VAR_3 = FUNC_0(VAR_1, VAR_0);

    if (VAR_3 != ((void*)0))
        FUNC_1(VAR_3->aead->ecb_cipher, VAR_2, sizeof(VAR_2));
}
