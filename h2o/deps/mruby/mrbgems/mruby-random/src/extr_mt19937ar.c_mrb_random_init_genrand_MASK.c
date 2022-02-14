
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long* mt; int mti; } ;
typedef TYPE_1__ mt_state ;


 int VAR_0 ;

void FUNC_0(mt_state *VAR_1, unsigned long VAR_2)
{
    VAR_1->mt[0]= VAR_2 & 0xffffffffUL;
    for (VAR_1->mti=1; VAR_1->mti<VAR_0; VAR_1->mti++) {
        VAR_1->mt[VAR_1->mti] = (1812433253UL * (VAR_1->mt[VAR_1->mti-1] ^ (VAR_1->mt[VAR_1->mti-1] >> 30)) + VAR_1->mti);
        VAR_1->mt[VAR_1->mti] &= 0xffffffffUL;
    }
}
