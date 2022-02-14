
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int T2d; int Z; int YplusX; int YminusX; } ;
typedef TYPE_1__ const ge25519_cached ;


 unsigned char const FUNC_0 (unsigned char const,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (TYPE_1__ const*,TYPE_1__ const*,unsigned char const) ;
 unsigned char FUNC_5 (char const) ;

__attribute__((used)) static void
FUNC_6(ge25519_cached *VAR_0, const ge25519_cached VAR_1[8], const signed char VAR_2)
{
    ge25519_cached VAR_3;
    const unsigned char VAR_4 = FUNC_5(VAR_2);
    const unsigned char VAR_5 = VAR_2 - (((-VAR_4) & VAR_2) * ((signed char) 1 << 1));

    FUNC_3(VAR_0);
    FUNC_4(VAR_0, &VAR_1[0], FUNC_0(VAR_5, 1));
    FUNC_4(VAR_0, &VAR_1[1], FUNC_0(VAR_5, 2));
    FUNC_4(VAR_0, &VAR_1[2], FUNC_0(VAR_5, 3));
    FUNC_4(VAR_0, &VAR_1[3], FUNC_0(VAR_5, 4));
    FUNC_4(VAR_0, &VAR_1[4], FUNC_0(VAR_5, 5));
    FUNC_4(VAR_0, &VAR_1[5], FUNC_0(VAR_5, 6));
    FUNC_4(VAR_0, &VAR_1[6], FUNC_0(VAR_5, 7));
    FUNC_4(VAR_0, &VAR_1[7], FUNC_0(VAR_5, 8));
    FUNC_1(VAR_3.YplusX, VAR_0->YminusX);
    FUNC_1(VAR_3.YminusX, VAR_0->YplusX);
    FUNC_1(VAR_3.Z, VAR_0->Z);
    FUNC_2(VAR_3.T2d, VAR_0->T2d);
    FUNC_4(VAR_0, &VAR_3, VAR_4);
}
