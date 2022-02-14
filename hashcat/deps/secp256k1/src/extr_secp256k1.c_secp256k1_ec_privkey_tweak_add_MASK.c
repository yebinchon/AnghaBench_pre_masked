
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;
typedef int secp256k1_context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned char*,int *) ;
 int FUNC_6 (int *,unsigned char const*,int*) ;

int FUNC_7(const secp256k1_context* VAR_0, unsigned char *VAR_1, const unsigned char *VAR_2) {
    secp256k1_scalar VAR_3;
    secp256k1_scalar VAR_4;
    int VAR_5 = 0;
    int VAR_6 = 0;
    FUNC_1(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));
    FUNC_0(VAR_2 != ((void*)0));

    FUNC_6(&VAR_3, VAR_2, &VAR_6);
    FUNC_6(&VAR_4, VAR_1, ((void*)0));

    VAR_5 = !VAR_6 && FUNC_3(&VAR_4, &VAR_3);
    FUNC_2(VAR_1, 0, 32);
    if (VAR_5) {
        FUNC_5(VAR_1, &VAR_4);
    }

    FUNC_4(&VAR_4);
    FUNC_4(&VAR_3);
    return VAR_5;
}
