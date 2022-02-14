
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_context ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *,size_t const) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,unsigned int) ;
 size_t FUNC_4 (unsigned int) ;

secp256k1_context* FUNC_5(unsigned int VAR_1) {
    size_t const VAR_2 = FUNC_4(VAR_1);
    secp256k1_context* VAR_3 = (secp256k1_context*)FUNC_1(&VAR_0, VAR_2);
    if (FUNC_0(FUNC_3(VAR_3, VAR_1) == ((void*)0), 0)) {
        FUNC_2(VAR_3);
        return ((void*)0);
    }

    return VAR_3;
}
