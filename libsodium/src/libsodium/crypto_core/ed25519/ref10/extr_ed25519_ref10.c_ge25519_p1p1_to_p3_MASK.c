
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int T; int Z; int Y; int X; } ;
typedef TYPE_1__ ge25519_p3 ;
struct TYPE_6__ {int Y; int X; int T; int Z; } ;
typedef TYPE_2__ ge25519_p1p1 ;


 int FUNC_0 (int ,int ,int ) ;

void
FUNC_1(ge25519_p3 *VAR_0, const ge25519_p1p1 *VAR_1)
{
    FUNC_0(VAR_0->X, VAR_1->X, VAR_1->T);
    FUNC_0(VAR_0->Y, VAR_1->Y, VAR_1->Z);
    FUNC_0(VAR_0->Z, VAR_1->Z, VAR_1->T);
    FUNC_0(VAR_0->T, VAR_1->X, VAR_1->Y);
}
