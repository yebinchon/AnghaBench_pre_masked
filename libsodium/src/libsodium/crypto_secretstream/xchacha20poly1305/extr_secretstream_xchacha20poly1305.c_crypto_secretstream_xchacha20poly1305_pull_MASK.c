
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int k; int nonce; } ;
typedef TYPE_1__ crypto_secretstream_xchacha20poly1305_state ;
typedef unsigned char crypto_onetimeauth_poly1305_state ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (int ,unsigned char*,int ) ;
 unsigned char* VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (unsigned char*,unsigned char*) ;
 int FUNC_5 (unsigned char*,unsigned char*) ;
 int FUNC_6 (unsigned char*,unsigned char const*,int) ;
 unsigned long long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (unsigned char*,int,int ,int ) ;
 int FUNC_9 (unsigned char*,unsigned char const*,unsigned long long,int ,unsigned int,int ) ;
 int FUNC_10 (unsigned char*,int ,int) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (unsigned char*,unsigned char const*,int) ;
 int FUNC_14 (unsigned char*,int) ;
 int FUNC_15 () ;

int
FUNC_16
   (crypto_secretstream_xchacha20poly1305_state *VAR_7,
    unsigned char *VAR_8, unsigned long long *VAR_9, unsigned char *VAR_10,
    const unsigned char *VAR_11, unsigned long long VAR_12,
    const unsigned char *VAR_13, unsigned long long VAR_14)
{
    crypto_onetimeauth_poly1305_state VAR_15;
    unsigned char VAR_16[64U];
    unsigned char VAR_17[8U];
    unsigned char VAR_18[VAR_1];
    const unsigned char *VAR_19;
    const unsigned char *VAR_20;
    unsigned long long VAR_21;
    unsigned char VAR_22;

    if (VAR_9 != ((void*)0)) {
        *VAR_9 = 0U;
    }
    if (VAR_10 != ((void*)0)) {
        *VAR_10 = 0xff;
    }
    if (VAR_12 < VAR_2) {
        return -1;
    }
    VAR_21 = VAR_12 - VAR_2;
    if (VAR_21 > VAR_5) {
        FUNC_15();
    }
    FUNC_8(VAR_16, sizeof VAR_16, VAR_7->nonce, VAR_7->k);
    FUNC_5(&VAR_15, VAR_16);
    FUNC_14(VAR_16, sizeof VAR_16);

    FUNC_6(&VAR_15, VAR_13, VAR_14);
    FUNC_6(&VAR_15, VAR_0,
                                       (0x10 - VAR_14) & 0xf);

    FUNC_10(VAR_16, 0, sizeof VAR_16);
    VAR_16[0] = VAR_11[0];
    FUNC_9(VAR_16, VAR_16, sizeof VAR_16,
                                       VAR_7->nonce, 1U, VAR_7->k);
    VAR_22 = VAR_16[0];
    VAR_16[0] = VAR_11[0];
    FUNC_6(&VAR_15, VAR_16, sizeof VAR_16);

    VAR_19 = VAR_11 + (sizeof VAR_22);
    FUNC_6(&VAR_15, VAR_19, VAR_21);
    FUNC_6
        (&VAR_15, VAR_0, (0x10 - (sizeof VAR_16) + VAR_21) & 0xf);

    FUNC_2(VAR_17, (uint64_t) VAR_14);
    FUNC_6(&VAR_15, VAR_17, sizeof VAR_17);
    FUNC_2(VAR_17, (sizeof VAR_16) + VAR_21);
    FUNC_6(&VAR_15, VAR_17, sizeof VAR_17);

    FUNC_4(&VAR_15, VAR_18);
    FUNC_14(&VAR_15, sizeof VAR_15);

    VAR_20 = VAR_19 + VAR_21;
    if (FUNC_13(VAR_18, VAR_20, sizeof VAR_18) != 0) {
        FUNC_14(VAR_18, sizeof VAR_18);
        return -1;
    }

    FUNC_9(VAR_8, VAR_19, VAR_21, VAR_7->nonce, 2U, VAR_7->k);
    FUNC_3(FUNC_1(VAR_7), VAR_18,
            VAR_4);
    FUNC_11(FUNC_0(VAR_7),
                     VAR_3);
    if ((VAR_22 & VAR_6) != 0 ||
        FUNC_12(FUNC_0(VAR_7),
                       VAR_3)) {
        FUNC_7(VAR_7);
    }
    if (VAR_9 != ((void*)0)) {
        *VAR_9 = VAR_21;
    }
    if (VAR_10 != ((void*)0)) {
        *VAR_10 = VAR_22;
    }
    return 0;
}
