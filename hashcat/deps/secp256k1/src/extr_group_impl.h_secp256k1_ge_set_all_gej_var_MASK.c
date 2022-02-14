
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ infinity; int z; } ;
typedef TYPE_1__ secp256k1_gej ;
struct TYPE_8__ {int x; scalar_t__ infinity; } ;
typedef TYPE_2__ secp256k1_ge ;
typedef int secp256k1_fe ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__ const*,int *) ;

__attribute__((used)) static void FUNC_4(secp256k1_ge *VAR_1, const secp256k1_gej *VAR_2, size_t VAR_3) {
    secp256k1_fe VAR_4;
    size_t VAR_5;
    size_t VAR_6 = VAR_0;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        if (!VAR_2[VAR_5].infinity) {

            if (VAR_6 == VAR_0) {
                VAR_1[VAR_5].x = VAR_2[VAR_5].z;
            } else {
                FUNC_2(&VAR_1[VAR_5].x, &VAR_1[VAR_6].x, &VAR_2[VAR_5].z);
            }
            VAR_6 = VAR_5;
        }
    }
    if (VAR_6 == VAR_0) {
        return;
    }
    FUNC_1(&VAR_4, &VAR_1[VAR_6].x);

    VAR_5 = VAR_6;
    while (VAR_5 > 0) {
        VAR_5--;
        if (!VAR_2[VAR_5].infinity) {
            FUNC_2(&VAR_1[VAR_6].x, &VAR_1[VAR_5].x, &VAR_4);
            FUNC_2(&VAR_4, &VAR_4, &VAR_2[VAR_6].z);
            VAR_6 = VAR_5;
        }
    }
    FUNC_0(!VAR_2[VAR_6].infinity);
    VAR_1[VAR_6].x = VAR_4;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        VAR_1[VAR_5].infinity = VAR_2[VAR_5].infinity;
        if (!VAR_2[VAR_5].infinity) {
            FUNC_3(&VAR_1[VAR_5], &VAR_2[VAR_5], &VAR_1[VAR_5].x);
        }
    }
}
