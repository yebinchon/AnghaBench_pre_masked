
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bench_inv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_0 (int,char**,char*) ;
 int FUNC_1 (char*,int ,int ,int *,int *,int,int) ;

int FUNC_2(int VAR_28, char **VAR_29) {
    bench_inv VAR_30;
    if (FUNC_0(VAR_28, VAR_29, "scalar") || FUNC_0(VAR_28, VAR_29, "add")) FUNC_1("scalar_add", VAR_18, VAR_25, ((void*)0), &VAR_30, 10, 2000000);
    if (FUNC_0(VAR_28, VAR_29, "scalar") || FUNC_0(VAR_28, VAR_29, "negate")) FUNC_1("scalar_negate", VAR_22, VAR_25, ((void*)0), &VAR_30, 10, 2000000);
    if (FUNC_0(VAR_28, VAR_29, "scalar") || FUNC_0(VAR_28, VAR_29, "sqr")) FUNC_1("scalar_sqr", VAR_24, VAR_25, ((void*)0), &VAR_30, 10, 200000);
    if (FUNC_0(VAR_28, VAR_29, "scalar") || FUNC_0(VAR_28, VAR_29, "mul")) FUNC_1("scalar_mul", VAR_21, VAR_25, ((void*)0), &VAR_30, 10, 200000);



    if (FUNC_0(VAR_28, VAR_29, "scalar") || FUNC_0(VAR_28, VAR_29, "inverse")) FUNC_1("scalar_inverse", VAR_19, VAR_25, ((void*)0), &VAR_30, 10, 2000);
    if (FUNC_0(VAR_28, VAR_29, "scalar") || FUNC_0(VAR_28, VAR_29, "inverse")) FUNC_1("scalar_inverse_var", VAR_20, VAR_25, ((void*)0), &VAR_30, 10, 2000);

    if (FUNC_0(VAR_28, VAR_29, "field") || FUNC_0(VAR_28, VAR_29, "normalize")) FUNC_1("field_normalize", VAR_6, VAR_25, ((void*)0), &VAR_30, 10, 2000000);
    if (FUNC_0(VAR_28, VAR_29, "field") || FUNC_0(VAR_28, VAR_29, "normalize")) FUNC_1("field_normalize_weak", VAR_7, VAR_25, ((void*)0), &VAR_30, 10, 2000000);
    if (FUNC_0(VAR_28, VAR_29, "field") || FUNC_0(VAR_28, VAR_29, "sqr")) FUNC_1("field_sqr", VAR_8, VAR_25, ((void*)0), &VAR_30, 10, 200000);
    if (FUNC_0(VAR_28, VAR_29, "field") || FUNC_0(VAR_28, VAR_29, "mul")) FUNC_1("field_mul", VAR_5, VAR_25, ((void*)0), &VAR_30, 10, 200000);
    if (FUNC_0(VAR_28, VAR_29, "field") || FUNC_0(VAR_28, VAR_29, "inverse")) FUNC_1("field_inverse", VAR_3, VAR_25, ((void*)0), &VAR_30, 10, 20000);
    if (FUNC_0(VAR_28, VAR_29, "field") || FUNC_0(VAR_28, VAR_29, "inverse")) FUNC_1("field_inverse_var", VAR_4, VAR_25, ((void*)0), &VAR_30, 10, 20000);
    if (FUNC_0(VAR_28, VAR_29, "field") || FUNC_0(VAR_28, VAR_29, "sqrt")) FUNC_1("field_sqrt", VAR_9, VAR_25, ((void*)0), &VAR_30, 10, 20000);

    if (FUNC_0(VAR_28, VAR_29, "group") || FUNC_0(VAR_28, VAR_29, "double")) FUNC_1("group_double_var", VAR_13, VAR_25, ((void*)0), &VAR_30, 10, 200000);
    if (FUNC_0(VAR_28, VAR_29, "group") || FUNC_0(VAR_28, VAR_29, "add")) FUNC_1("group_add_var", VAR_12, VAR_25, ((void*)0), &VAR_30, 10, 200000);
    if (FUNC_0(VAR_28, VAR_29, "group") || FUNC_0(VAR_28, VAR_29, "add")) FUNC_1("group_add_affine", VAR_10, VAR_25, ((void*)0), &VAR_30, 10, 200000);
    if (FUNC_0(VAR_28, VAR_29, "group") || FUNC_0(VAR_28, VAR_29, "add")) FUNC_1("group_add_affine_var", VAR_11, VAR_25, ((void*)0), &VAR_30, 10, 200000);
    if (FUNC_0(VAR_28, VAR_29, "group") || FUNC_0(VAR_28, VAR_29, "jacobi")) FUNC_1("group_jacobi_var", VAR_14, VAR_25, ((void*)0), &VAR_30, 10, 20000);

    if (FUNC_0(VAR_28, VAR_29, "ecmult") || FUNC_0(VAR_28, VAR_29, "wnaf")) FUNC_1("wnaf_const", VAR_27, VAR_25, ((void*)0), &VAR_30, 10, 20000);
    if (FUNC_0(VAR_28, VAR_29, "ecmult") || FUNC_0(VAR_28, VAR_29, "wnaf")) FUNC_1("ecmult_wnaf", VAR_2, VAR_25, ((void*)0), &VAR_30, 10, 20000);

    if (FUNC_0(VAR_28, VAR_29, "hash") || FUNC_0(VAR_28, VAR_29, "sha256")) FUNC_1("hash_sha256", VAR_26, VAR_25, ((void*)0), &VAR_30, 10, 20000);
    if (FUNC_0(VAR_28, VAR_29, "hash") || FUNC_0(VAR_28, VAR_29, "hmac")) FUNC_1("hash_hmac_sha256", VAR_15, VAR_25, ((void*)0), &VAR_30, 10, 20000);
    if (FUNC_0(VAR_28, VAR_29, "hash") || FUNC_0(VAR_28, VAR_29, "rng6979")) FUNC_1("hash_rfc6979_hmac_sha256", VAR_17, VAR_25, ((void*)0), &VAR_30, 10, 20000);

    if (FUNC_0(VAR_28, VAR_29, "context") || FUNC_0(VAR_28, VAR_29, "verify")) FUNC_1("context_verify", VAR_1, VAR_25, ((void*)0), &VAR_30, 10, 20);
    if (FUNC_0(VAR_28, VAR_29, "context") || FUNC_0(VAR_28, VAR_29, "sign")) FUNC_1("context_sign", VAR_0, VAR_25, ((void*)0), &VAR_30, 10, 200);


    if (FUNC_0(VAR_28, VAR_29, "num") || FUNC_0(VAR_28, VAR_29, "jacobi")) FUNC_1("num_jacobi", VAR_16, VAR_25, ((void*)0), &VAR_30, 10, 200000);

    return 0;
}
