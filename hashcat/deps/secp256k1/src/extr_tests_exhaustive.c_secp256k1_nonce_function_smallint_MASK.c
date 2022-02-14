
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *,int) ;

int FUNC_2(unsigned char *VAR_1, const unsigned char *VAR_2,
                                      const unsigned char *VAR_3, const unsigned char *VAR_4,
                                      void *VAR_5, unsigned int VAR_6) {
    secp256k1_scalar VAR_7;
    int *VAR_8 = VAR_5;
    (void)VAR_2;
    (void)VAR_3;
    (void)VAR_4;




    if (VAR_6 > 0) {
        *VAR_8 = (*VAR_8 + 1) % VAR_0;
    }
    FUNC_1(&VAR_7, *VAR_8);
    FUNC_0(VAR_1, &VAR_7);
    return 1;
}
