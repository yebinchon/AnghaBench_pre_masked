
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int Z; int T; int X; int Y; } ;
typedef TYPE_1__ ge25519_p3 ;
struct TYPE_8__ {int T; int Z; int Y; int X; } ;
typedef TYPE_2__ ge25519_p1p1 ;
struct TYPE_9__ {int Z; int T2d; int YminusX; int YplusX; } ;
typedef TYPE_3__ ge25519_cached ;
typedef int fe25519 ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

void
FUNC_3(ge25519_p1p1 *VAR_0, const ge25519_p3 *VAR_1, const ge25519_cached *VAR_2)
{
    fe25519 VAR_3;

    FUNC_0(VAR_0->X, VAR_1->Y, VAR_1->X);
    FUNC_2(VAR_0->Y, VAR_1->Y, VAR_1->X);
    FUNC_1(VAR_0->Z, VAR_0->X, VAR_2->YplusX);
    FUNC_1(VAR_0->Y, VAR_0->Y, VAR_2->YminusX);
    FUNC_1(VAR_0->T, VAR_2->T2d, VAR_1->T);
    FUNC_1(VAR_0->X, VAR_1->Z, VAR_2->Z);
    FUNC_0(VAR_3, VAR_0->X, VAR_0->X);
    FUNC_2(VAR_0->X, VAR_0->Z, VAR_0->Y);
    FUNC_0(VAR_0->Y, VAR_0->Z, VAR_0->Y);
    FUNC_0(VAR_0->Z, VAR_3, VAR_0->T);
    FUNC_2(VAR_0->T, VAR_3, VAR_0->T);
}
