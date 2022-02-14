
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int *** prec; } ;
typedef TYPE_1__ secp256k1_ecmult_gen_context ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (TYPE_1__*,void**) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int * VAR_4 ;

int FUNC_9(int VAR_5, char **VAR_6) {
    secp256k1_ecmult_gen_context VAR_7;
    void *VAR_8, *VAR_9;
    int VAR_10;
    int VAR_11;
    FILE* VAR_12;

    (void)VAR_5;
    (void)VAR_6;

    VAR_12 = FUNC_3("src/ecmult_static_context.h","w");
    if (VAR_12 == ((void*)0)) {
        FUNC_4(VAR_4, "Could not open src/ecmult_static_context.h for writing!\n");
        return -1;
    }

    FUNC_4(VAR_12, "#ifndef _SECP256K1_ECMULT_STATIC_CONTEXT_\n");
    FUNC_4(VAR_12, "#define _SECP256K1_ECMULT_STATIC_CONTEXT_\n");
    FUNC_4(VAR_12, "#include \"src/group.h\"\n");
    FUNC_4(VAR_12, "#define SC SECP256K1_GE_STORAGE_CONST\n");
    FUNC_4(VAR_12, "#if ECMULT_GEN_PREC_N != %d || ECMULT_GEN_PREC_G != %d\n", VAR_1, VAR_0);
    FUNC_4(VAR_12, "   #error configuration mismatch, invalid ECMULT_GEN_PREC_N, ECMULT_GEN_PREC_G. Try deleting ecmult_static_context.h before the build.\n");
    FUNC_4(VAR_12, "#endif\n");
    FUNC_4(VAR_12, "static const secp256k1_ge_storage secp256k1_ecmult_static_context[ECMULT_GEN_PREC_N][ECMULT_GEN_PREC_G] = {\n");

    VAR_9 = FUNC_1(&VAR_3, VAR_2);
    VAR_8 = VAR_9;
    FUNC_8(&VAR_7);
    FUNC_6(&VAR_7, &VAR_8);
    for(VAR_11 = 0; VAR_11 != VAR_1; VAR_11++) {
        FUNC_4(VAR_12,"{\n");
        for(VAR_10 = 0; VAR_10 != VAR_0; VAR_10++) {
            FUNC_4(VAR_12,"    SC(%uu, %uu, %uu, %uu, %uu, %uu, %uu, %uu, %uu, %uu, %uu, %uu, %uu, %uu, %uu, %uu)", FUNC_0((*VAR_7.prec)[VAR_11][VAR_10]));
            if (VAR_10 != VAR_0 - 1) {
                FUNC_4(VAR_12,",\n");
            } else {
                FUNC_4(VAR_12,"\n");
            }
        }
        if (VAR_11 != VAR_1 - 1) {
            FUNC_4(VAR_12,"},\n");
        } else {
            FUNC_4(VAR_12,"}\n");
        }
    }
    FUNC_4(VAR_12,"};\n");
    FUNC_7(&VAR_7);
    FUNC_5(VAR_9);

    FUNC_4(VAR_12, "#undef SC\n");
    FUNC_4(VAR_12, "#endif\n");
    FUNC_2(VAR_12);

    return 0;
}
