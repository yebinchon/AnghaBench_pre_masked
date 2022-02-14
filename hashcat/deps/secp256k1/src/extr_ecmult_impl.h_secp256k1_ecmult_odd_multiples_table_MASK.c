
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int z; scalar_t__ infinity; int y; int x; } ;
typedef TYPE_1__ secp256k1_gej ;
struct TYPE_13__ {int y; int x; scalar_t__ infinity; } ;
typedef TYPE_2__ secp256k1_ge ;
typedef int secp256k1_fe ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__ const*,int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__ const*,int *) ;

__attribute__((used)) static void FUNC_5(int VAR_0, secp256k1_gej *VAR_1, secp256k1_fe *VAR_2, const secp256k1_gej *VAR_3) {
    secp256k1_gej VAR_4;
    secp256k1_ge VAR_5, VAR_6;
    int VAR_7;

    FUNC_0(!VAR_3->infinity);

    FUNC_4(&VAR_4, VAR_3, ((void*)0));





    VAR_6.x = VAR_4.x;
    VAR_6.y = VAR_4.y;
    VAR_6.infinity = 0;

    FUNC_2(&VAR_5, VAR_3, &VAR_4.z);
    VAR_1[0].x = VAR_5.x;
    VAR_1[0].y = VAR_5.y;
    VAR_1[0].z = VAR_3->z;
    VAR_1[0].infinity = 0;

    VAR_2[0] = VAR_4.z;
    for (VAR_7 = 1; VAR_7 < VAR_0; VAR_7++) {
        FUNC_3(&VAR_1[VAR_7], &VAR_1[VAR_7-1], &VAR_6, &VAR_2[VAR_7]);
    }





    FUNC_1(&VAR_1[VAR_0-1].z, &VAR_1[VAR_0-1].z, &VAR_4.z);
}
