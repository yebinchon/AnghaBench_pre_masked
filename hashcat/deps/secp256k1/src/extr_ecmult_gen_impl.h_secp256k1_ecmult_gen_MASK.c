
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
typedef int secp256k1_ge_storage ;
struct TYPE_7__ {scalar_t__ infinity; } ;
typedef TYPE_1__ secp256k1_ge ;
struct TYPE_8__ {int *** prec; int blind; int initial; } ;
typedef TYPE_2__ secp256k1_ecmult_gen_context ;
typedef int adds ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,TYPE_1__*) ;
 int FUNC_5 (int *,int const*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int) ;

__attribute__((used)) static void FUNC_8(const secp256k1_ecmult_gen_context *VAR_3, secp256k1_gej *VAR_4, const secp256k1_scalar *VAR_5) {
    secp256k1_ge VAR_6;
    secp256k1_ge_storage VAR_7;
    secp256k1_scalar VAR_8;
    int VAR_9;
    int VAR_10, VAR_11;
    FUNC_0(&VAR_7, 0, sizeof(VAR_7));
    *VAR_4 = VAR_3->initial;

    FUNC_5(&VAR_8, VAR_5, &VAR_3->blind);
    VAR_6.infinity = 0;
    for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
        VAR_9 = FUNC_7(&VAR_8, VAR_11 * VAR_0, VAR_0);
        for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
            FUNC_3(&VAR_7, &(*VAR_3->prec)[VAR_11][VAR_10], VAR_10 == VAR_9);
        }
        FUNC_2(&VAR_6, &VAR_7);
        FUNC_4(VAR_4, VAR_4, &VAR_6);
    }
    VAR_9 = 0;
    FUNC_1(&VAR_6);
    FUNC_6(&VAR_8);
}
