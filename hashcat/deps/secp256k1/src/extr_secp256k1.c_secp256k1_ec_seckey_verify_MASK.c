
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;
typedef int secp256k1_context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char const*,int*) ;

int FUNC_5(const secp256k1_context* VAR_0, const unsigned char *VAR_1) {
    secp256k1_scalar VAR_2;
    int VAR_3;
    int VAR_4;
    FUNC_1(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));

    FUNC_4(&VAR_2, VAR_1, &VAR_4);
    VAR_3 = !VAR_4 && !FUNC_3(&VAR_2);
    FUNC_2(&VAR_2);
    return VAR_3;
}
