
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;


 int FUNC_0 (unsigned char*,unsigned char const*,size_t) ;
 scalar_t__ FUNC_1 (size_t*,unsigned char const**,unsigned char const*) ;
 int FUNC_2 (int *,unsigned char*,int*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(secp256k1_scalar *VAR_0, const unsigned char **VAR_1, const unsigned char *VAR_2) {
    int VAR_3 = 0;
    unsigned char VAR_4[32] = {0};
    size_t VAR_5;

    if (*VAR_1 == VAR_2 || **VAR_1 != 0x02) {

        return 0;
    }
    (*VAR_1)++;
    if (FUNC_1(&VAR_5, VAR_1, VAR_2) == 0) {
        return 0;
    }
    if (VAR_5 == 0 || *VAR_1 + VAR_5 > VAR_2) {

        return 0;
    }
    if (**VAR_1 == 0x00 && VAR_5 > 1 && (((*VAR_1)[1]) & 0x80) == 0x00) {

        return 0;
    }
    if (**VAR_1 == 0xFF && VAR_5 > 1 && (((*VAR_1)[1]) & 0x80) == 0x80) {

        return 0;
    }
    if ((**VAR_1 & 0x80) == 0x80) {

        VAR_3 = 1;
    }



    if (VAR_5 > 0 && **VAR_1 == 0) {

        VAR_5--;
        (*VAR_1)++;
    }
    if (VAR_5 > 32) {
        VAR_3 = 1;
    }
    if (!VAR_3) {
        FUNC_0(VAR_4 + 32 - VAR_5, *VAR_1, VAR_5);
        FUNC_2(VAR_0, VAR_4, &VAR_3);
    }
    if (VAR_3) {
        FUNC_3(VAR_0, 0);
    }
    (*VAR_1) += VAR_5;
    return 1;
}
