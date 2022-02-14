
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {TYPE_1__* sfmt; } ;
typedef TYPE_2__ sfmt_t ;
struct TYPE_4__ {int* u; } ;


 size_t FUNC_0 (int) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_1(sfmt_t *VAR_1) {
    int VAR_2 = 0;
    int VAR_3, VAR_4;
    uint32_t VAR_5;
    uint32_t *VAR_6 = &VAR_1->sfmt[0].u[0];

    for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
 VAR_2 ^= VAR_6[FUNC_0(VAR_3)] & VAR_0[VAR_3];
    for (VAR_3 = 16; VAR_3 > 0; VAR_3 >>= 1)
 VAR_2 ^= VAR_2 >> VAR_3;
    VAR_2 &= 1;

    if (VAR_2 == 1) {
 return;
    }

    for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
 VAR_5 = 1;
 for (VAR_4 = 0; VAR_4 < 32; VAR_4++) {
     if ((VAR_5 & VAR_0[VAR_3]) != 0) {
  VAR_6[FUNC_0(VAR_3)] ^= VAR_5;
  return;
     }
     VAR_5 = VAR_5 << 1;
 }
    }
}
