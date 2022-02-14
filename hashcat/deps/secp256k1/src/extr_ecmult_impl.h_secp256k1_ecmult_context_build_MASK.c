
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int secp256k1_gej ;
typedef int secp256k1_ge_storage ;
struct TYPE_3__ {int ** pre_g_128; int ** pre_g; } ;
typedef TYPE_1__ secp256k1_ecmult_context ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (void**,int,void* const,size_t const) ;
 int FUNC_3 (int,int *,int *) ;
 int VAR_2 ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void FUNC_6(secp256k1_ecmult_context *VAR_3, void **VAR_4) {
    secp256k1_gej VAR_5;
    void* const VAR_6 = *VAR_4;
    size_t const VAR_7 = VAR_0;

    if (VAR_3->pre_g != ((void*)0)) {
        return;
    }


    FUNC_5(&VAR_5, &VAR_2);

    {
        size_t VAR_8 = sizeof((*VAR_3->pre_g)[0]) * ((size_t)FUNC_0(VAR_1));

        FUNC_1(VAR_8 / sizeof((*VAR_3->pre_g)[0]) == ((size_t)FUNC_0(VAR_1)));
        VAR_3->pre_g = (secp256k1_ge_storage (*)[])FUNC_2(VAR_4, sizeof((*VAR_3->pre_g)[0]) * FUNC_0(VAR_1), VAR_6, VAR_7);
    }


    FUNC_3(FUNC_0(VAR_1), *VAR_3->pre_g, &VAR_5);
}
