
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint128_t ;
struct TYPE_3__ {int* t; } ;
typedef TYPE_1__ blake2b_state ;



__attribute__((used)) static inline int
FUNC_0(blake2b_state *VAR_0, const uint64_t VAR_1)
{






    VAR_0->t[0] += VAR_1;
    VAR_0->t[1] += (VAR_0->t[0] < VAR_1);

    return 0;
}
