
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_gej ;
typedef int secp256k1_ge ;


 int FUNC_0 (int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (int *,int *,int *,int *) ;

void FUNC_6(void) {
    secp256k1_gej VAR_0 = FUNC_0(
        0x8d24cd95, 0x0a355af1, 0x3c543505, 0x44238d30,
        0x0643d79f, 0x05a59614, 0x2f8ec030, 0xd58977cb,
        0x001e337a, 0x38093dcd, 0x6c0f386d, 0x0b1293a8,
        0x4d72c879, 0xd7681924, 0x44e6d2f3, 0x9190117d
    );
    secp256k1_gej VAR_1 = FUNC_0(
        0xc7b74206, 0x1f788cd9, 0xabd0937d, 0x164a0d86,
        0x95f6ff75, 0xf19a4ce9, 0xd013bd7b, 0xbf92d2a7,
        0xffe1cc85, 0xc7f6c232, 0x93f0c792, 0xf4ed6c57,
        0xb28d3786, 0x2897e6db, 0xbb192d0b, 0x6e6feab2
    );
    secp256k1_gej VAR_2 = FUNC_0(
        0x671a63c0, 0x3efdad4c, 0x389a7798, 0x24356027,
        0xb3d69010, 0x278625c3, 0x5c86d390, 0x184a8f7a,
        0x5f6409c2, 0x2ce01f2b, 0x511fd375, 0x25071d08,
        0xda651801, 0x70e95caf, 0x8f0d893c, 0xbed8fbbe
    );
    secp256k1_ge VAR_3;
    secp256k1_gej VAR_4;
    secp256k1_ge VAR_5;
    FUNC_2(&VAR_3, &VAR_1);

    FUNC_5(&VAR_4, &VAR_0, &VAR_1, ((void*)0));
    FUNC_2(&VAR_5, &VAR_4);
    FUNC_1(&VAR_5, &VAR_2);

    FUNC_3(&VAR_4, &VAR_0, &VAR_3);
    FUNC_2(&VAR_5, &VAR_4);
    FUNC_1(&VAR_5, &VAR_2);

    FUNC_4(&VAR_4, &VAR_0, &VAR_3, ((void*)0));
    FUNC_2(&VAR_5, &VAR_4);
    FUNC_1(&VAR_5, &VAR_2);
}
