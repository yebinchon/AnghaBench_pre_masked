
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int secp256k1_scalar ;
typedef int secp256k1_ge ;
struct TYPE_2__ {size_t offset1; size_t offset2; int * pubkeys; int * scalars; scalar_t__ includes_g; } ;
typedef TYPE_1__ bench_data ;


 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(secp256k1_scalar* VAR_2, secp256k1_ge* VAR_3, size_t VAR_4, void* VAR_5) {
    bench_data* VAR_6 = (bench_data*)VAR_5;
    if (VAR_6->includes_g) ++VAR_4;
    if (VAR_4 == 0) {
        *VAR_2 = VAR_6->scalars[VAR_6->offset1];
        *VAR_3 = VAR_1;
    } else {
        *VAR_2 = VAR_6->scalars[(VAR_6->offset1 + VAR_4) % VAR_0];
        *VAR_3 = VAR_6->pubkeys[(VAR_6->offset2 + VAR_4 - 1) % VAR_0];
    }
    return 1;
}
