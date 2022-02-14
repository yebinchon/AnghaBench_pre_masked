
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long krint64_t ;
struct TYPE_3__ {unsigned long long* mt; int mti; } ;
typedef TYPE_1__ krand_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(krint64_t VAR_1, krand_t *VAR_2)
{
 VAR_2->mt[0] = VAR_1;
 for (VAR_2->mti = 1; VAR_2->mti < VAR_0; ++VAR_2->mti)
  VAR_2->mt[VAR_2->mti] = 6364136223846793005ULL * (VAR_2->mt[VAR_2->mti - 1] ^ (VAR_2->mt[VAR_2->mti - 1] >> 62)) + VAR_2->mti;
}
