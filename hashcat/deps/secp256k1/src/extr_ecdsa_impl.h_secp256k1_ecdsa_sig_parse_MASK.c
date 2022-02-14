
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;


 int FUNC_0 (int *,unsigned char const**,unsigned char const*) ;
 scalar_t__ FUNC_1 (size_t*,unsigned char const**,unsigned char const*) ;

__attribute__((used)) static int FUNC_2(secp256k1_scalar *VAR_0, secp256k1_scalar *VAR_1, const unsigned char *VAR_2, size_t VAR_3) {
    const unsigned char *VAR_4 = VAR_2 + VAR_3;
    size_t VAR_5;
    if (VAR_2 == VAR_4 || *(VAR_2++) != 0x30) {

        return 0;
    }
    if (FUNC_1(&VAR_5, &VAR_2, VAR_4) == 0) {
        return 0;
    }
    if (VAR_5 != (size_t)(VAR_4 - VAR_2)) {

        return 0;
    }

    if (!FUNC_0(VAR_0, &VAR_2, VAR_4)) {
        return 0;
    }
    if (!FUNC_0(VAR_1, &VAR_2, VAR_4)) {
        return 0;
    }

    if (VAR_2 != VAR_4) {

        return 0;
    }

    return 1;
}
