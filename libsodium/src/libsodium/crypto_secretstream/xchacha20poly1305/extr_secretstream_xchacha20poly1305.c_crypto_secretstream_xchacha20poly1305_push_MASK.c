
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int k; int nonce; } ;
typedef TYPE_1__ crypto_secretstream_xchacha20poly1305_state ;
typedef unsigned char crypto_onetimeauth_poly1305_state ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (int ,unsigned char*,scalar_t__) ;
 unsigned char* VAR_0 ;
 unsigned long long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (unsigned char*,unsigned char*) ;
 int FUNC_6 (unsigned char*,unsigned char*) ;
 int FUNC_7 (unsigned char*,unsigned char const*,int) ;
 unsigned long long VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned char VAR_7 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (unsigned char*,int,int ,int ) ;
 int FUNC_10 (unsigned char*,unsigned char const*,unsigned long long,int ,unsigned int,int ) ;
 int FUNC_11 (unsigned char*,int ,int) ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (unsigned char*,int) ;
 int FUNC_15 () ;

int
FUNC_16
   (crypto_secretstream_xchacha20poly1305_state *VAR_8,
    unsigned char *VAR_9, unsigned long long *VAR_10,
    const unsigned char *VAR_11, unsigned long long VAR_12,
    const unsigned char *VAR_13, unsigned long long VAR_14, unsigned char VAR_15)
{
    crypto_onetimeauth_poly1305_state VAR_16;
    unsigned char VAR_17[64U];
    unsigned char VAR_18[8U];
    unsigned char *VAR_19;
    unsigned char *VAR_20;

    if (VAR_10 != ((void*)0)) {
        *VAR_10 = 0U;
    }
    FUNC_0(VAR_6
                    <= VAR_1);
    if (VAR_12 > VAR_6) {
        FUNC_15();
    }
    FUNC_9(VAR_17, sizeof VAR_17, VAR_8->nonce, VAR_8->k);
    FUNC_6(&VAR_16, VAR_17);
    FUNC_14(VAR_17, sizeof VAR_17);

    FUNC_7(&VAR_16, VAR_13, VAR_14);
    FUNC_7(&VAR_16, VAR_0,
                                       (0x10 - VAR_14) & 0xf);
    FUNC_11(VAR_17, 0, sizeof VAR_17);
    VAR_17[0] = VAR_15;

    FUNC_10(VAR_17, VAR_17, sizeof VAR_17,
                                       VAR_8->nonce, 1U, VAR_8->k);
    FUNC_7(&VAR_16, VAR_17, sizeof VAR_17);
    VAR_9[0] = VAR_17[0];

    VAR_19 = VAR_9 + (sizeof VAR_15);
    FUNC_10(VAR_19, VAR_11, VAR_12, VAR_8->nonce, 2U, VAR_8->k);
    FUNC_7(&VAR_16, VAR_19, VAR_12);
    FUNC_7
        (&VAR_16, VAR_0, (0x10 - (sizeof VAR_17) + VAR_12) & 0xf);

    FUNC_3(VAR_18, (uint64_t) VAR_14);
    FUNC_7(&VAR_16, VAR_18, sizeof VAR_18);
    FUNC_3(VAR_18, (sizeof VAR_17) + VAR_12);
    FUNC_7(&VAR_16, VAR_18, sizeof VAR_18);

    VAR_20 = VAR_19 + VAR_12;
    FUNC_5(&VAR_16, VAR_20);
    FUNC_14(&VAR_16, sizeof VAR_16);

    FUNC_0(VAR_2 >=
                    VAR_5);
    FUNC_4(FUNC_2(VAR_8), VAR_20,
            VAR_5);
    FUNC_12(FUNC_1(VAR_8),
                     VAR_4);
    if ((VAR_15 & VAR_7) != 0 ||
        FUNC_13(FUNC_1(VAR_8),
                       VAR_4)) {
        FUNC_8(VAR_8);
    }
    if (VAR_10 != ((void*)0)) {
        *VAR_10 = VAR_3 + VAR_12;
    }
    return 0;
}
