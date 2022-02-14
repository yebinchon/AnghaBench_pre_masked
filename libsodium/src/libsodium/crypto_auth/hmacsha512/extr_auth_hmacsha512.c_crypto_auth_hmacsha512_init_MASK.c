
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int octx; int ictx; } ;
typedef TYPE_1__ crypto_auth_hmacsha512_state ;


 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char const*,int) ;
 int FUNC_3 (unsigned char*,int,int) ;
 int FUNC_4 (void*,int) ;

int
FUNC_5(crypto_auth_hmacsha512_state *VAR_0,
                            const unsigned char *VAR_1, size_t VAR_2)
{
    unsigned char VAR_3[128];
    unsigned char VAR_4[64];
    size_t VAR_5;

    if (VAR_2 > 128) {
        FUNC_1(&VAR_0->ictx);
        FUNC_2(&VAR_0->ictx, VAR_1, VAR_2);
        FUNC_0(&VAR_0->ictx, VAR_4);
        VAR_1 = VAR_4;
        VAR_2 = 64;
    }
    FUNC_1(&VAR_0->ictx);
    FUNC_3(VAR_3, 0x36, 128);
    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
        VAR_3[VAR_5] ^= VAR_1[VAR_5];
    }
    FUNC_2(&VAR_0->ictx, VAR_3, 128);

    FUNC_1(&VAR_0->octx);
    FUNC_3(VAR_3, 0x5c, 128);
    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
        VAR_3[VAR_5] ^= VAR_1[VAR_5];
    }
    FUNC_2(&VAR_0->octx, VAR_3, 128);

    FUNC_4((void *) VAR_3, sizeof VAR_3);
    FUNC_4((void *) VAR_4, sizeof VAR_4);

    return 0;
}
