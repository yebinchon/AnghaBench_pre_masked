
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scratch ;
typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
typedef int secp256k1_ecmult_multi_callback ;
typedef int secp256k1_ecmult_context ;
typedef int secp256k1_callback ;


 size_t VAR_0 ;
 int FUNC_0 (int const*,int *,int *,int *,int const*) ;
 int FUNC_1 (size_t*,size_t*,int ,size_t) ;
 int FUNC_2 (int const*,int *,int const*,int ,void*,size_t) ;
 int FUNC_3 (int const*,int const*,int *,int *,int const*,int ,void*,size_t,size_t) ;
 int FUNC_4 (int const*,int const*,int *,int *,int const*,int ,void*,size_t,size_t) ;
 int FUNC_5 (int *,int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int const*,int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int const*,int *) ;

__attribute__((used)) static int FUNC_10(const secp256k1_callback* VAR_1, const secp256k1_ecmult_context *VAR_2, secp256k1_scratch *VAR_3, secp256k1_gej *VAR_4, const secp256k1_scalar *VAR_5, secp256k1_ecmult_multi_callback VAR_6, void *VAR_7, size_t VAR_8) {
    size_t VAR_9;

    int (*VAR_10)(const secp256k1_callback* VAR_11, const secp256k1_ecmult_context*, secp256k1_scratch*, secp256k1_gej*, const secp256k1_scalar*, secp256k1_ecmult_multi_callback VAR_12, void*, size_t, size_t);
    size_t VAR_13;
    size_t VAR_14;

    FUNC_6(VAR_4);
    if (VAR_5 == ((void*)0) && VAR_8 == 0) {
        return 1;
    } else if (VAR_8 == 0) {
        secp256k1_scalar VAR_15;
        FUNC_8(&VAR_15, 0);
        FUNC_0(VAR_2, VAR_4, VAR_4, &VAR_15, VAR_5);
        return 1;
    }
    if (VAR_3 == ((void*)0)) {
        return FUNC_2(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
    }





    if (!FUNC_1(&VAR_13, &VAR_14, FUNC_7(VAR_1, VAR_3), VAR_8)) {
        return FUNC_2(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
    }
    if (VAR_14 >= VAR_0) {
        VAR_10 = FUNC_3;
    } else {
        if (!FUNC_1(&VAR_13, &VAR_14, FUNC_9(VAR_1, VAR_3), VAR_8)) {
            return FUNC_2(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
        }
        VAR_10 = FUNC_4;
    }
    for(VAR_9 = 0; VAR_9 < VAR_13; VAR_9++) {
        size_t VAR_16 = VAR_8 < VAR_14 ? VAR_8 : VAR_14;
        size_t VAR_17 = VAR_14*VAR_9;
        secp256k1_gej VAR_18;
        if (!VAR_10(VAR_1, VAR_2, VAR_3, &VAR_18, VAR_9 == 0 ? VAR_5 : ((void*)0), VAR_6, VAR_7, VAR_16, VAR_17)) {
            return 0;
        }
        FUNC_5(VAR_4, VAR_4, &VAR_18, ((void*)0));
        VAR_8 -= VAR_16;
    }
    return 1;
}
