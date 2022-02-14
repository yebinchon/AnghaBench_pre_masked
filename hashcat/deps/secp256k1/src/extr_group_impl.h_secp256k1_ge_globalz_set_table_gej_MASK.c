
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int z; int y; int x; } ;
typedef TYPE_1__ secp256k1_gej ;
struct TYPE_8__ {scalar_t__ infinity; int y; int x; } ;
typedef TYPE_2__ secp256k1_ge ;
typedef int secp256k1_fe ;


 int FUNC_0 (int *,int *,int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__ const*,int *) ;

__attribute__((used)) static void FUNC_3(size_t VAR_0, secp256k1_ge *VAR_1, secp256k1_fe *VAR_2, const secp256k1_gej *VAR_3, const secp256k1_fe *VAR_4) {
    size_t VAR_5 = VAR_0 - 1;
    secp256k1_fe VAR_6;

    if (VAR_0 > 0) {

        VAR_1[VAR_5].x = VAR_3[VAR_5].x;
        VAR_1[VAR_5].y = VAR_3[VAR_5].y;

        FUNC_1(&VAR_1[VAR_5].y);
        *VAR_2 = VAR_3[VAR_5].z;
        VAR_1[VAR_5].infinity = 0;
        VAR_6 = VAR_4[VAR_5];


        while (VAR_5 > 0) {
            if (VAR_5 != VAR_0 - 1) {
                FUNC_0(&VAR_6, &VAR_6, &VAR_4[VAR_5]);
            }
            VAR_5--;
            FUNC_2(&VAR_1[VAR_5], &VAR_3[VAR_5], &VAR_6);
        }
    }
}
