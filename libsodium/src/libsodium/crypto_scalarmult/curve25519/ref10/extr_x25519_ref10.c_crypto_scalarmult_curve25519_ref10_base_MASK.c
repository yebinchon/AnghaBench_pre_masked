
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Z; int Y; } ;
typedef TYPE_1__ ge25519_p3 ;
typedef int fe25519 ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (unsigned char*,int ) ;
 int FUNC_2 (TYPE_1__*,unsigned char*) ;

__attribute__((used)) static int
FUNC_3(unsigned char *VAR_0,
                                        const unsigned char *VAR_1)
{
    unsigned char *VAR_2 = VAR_0;
    ge25519_p3 VAR_3;
    fe25519 VAR_4;
    unsigned int VAR_5;

    for (VAR_5 = 0; VAR_5 < 32; VAR_5++) {
        VAR_2[VAR_5] = VAR_1[VAR_5];
    }
    VAR_2[0] &= 248;
    VAR_2[31] &= 127;
    VAR_2[31] |= 64;
    FUNC_2(&VAR_3, VAR_2);
    FUNC_0(VAR_4, VAR_3.Y, VAR_3.Z);
    FUNC_1(VAR_0, VAR_4);

    return 0;
}
