
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_pubkey ;
typedef int secp256k1_ge ;
typedef int secp256k1_context ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char*,int ,size_t) ;
 int FUNC_3 (int *,unsigned char*,size_t*,unsigned int) ;
 scalar_t__ FUNC_4 (int const*,int *,int const*) ;

int FUNC_5(const secp256k1_context* VAR_3, unsigned char *VAR_4, size_t *VAR_5, const secp256k1_pubkey* VAR_6, unsigned int VAR_7) {
    secp256k1_ge VAR_8;
    size_t VAR_9;
    int VAR_10 = 0;

    FUNC_1(VAR_3 != ((void*)0));
    FUNC_0(VAR_5 != ((void*)0));
    FUNC_0(*VAR_5 >= ((VAR_7 & VAR_0) ? 33 : 65));
    VAR_9 = *VAR_5;
    *VAR_5 = 0;
    FUNC_0(VAR_4 != ((void*)0));
    FUNC_2(VAR_4, 0, VAR_9);
    FUNC_0(VAR_6 != ((void*)0));
    FUNC_0((VAR_7 & VAR_2) == VAR_1);
    if (FUNC_4(VAR_3, &VAR_8, VAR_6)) {
        VAR_10 = FUNC_3(&VAR_8, VAR_4, &VAR_9, VAR_7 & VAR_0);
        if (VAR_10) {
            *VAR_5 = VAR_9;
        }
    }
    return VAR_10;
}
