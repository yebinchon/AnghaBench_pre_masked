
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int *,size_t) ;

__attribute__((used)) static void FUNC_5(uint8_t *VAR_4, size_t VAR_5)
{
    int VAR_6;

    if ((VAR_6 = FUNC_2("/dev/urandom", VAR_2 | VAR_1)) == -1) {
        if ((VAR_6 = FUNC_2("/dev/random", VAR_2 | VAR_1)) == -1) {
            FUNC_3("ptls_minicrypto_random_bytes: could not open neither /dev/random or /dev/urandom");
            FUNC_0();
        }
    }

    while (VAR_5 != 0) {
        ssize_t VAR_7;
        while ((VAR_7 = FUNC_4(VAR_6, VAR_4, VAR_5)) == -1 && VAR_3 == VAR_0)
            ;
        if (VAR_7 < 0) {
            FUNC_3("ptls_minicrypto_random_bytes");
            FUNC_0();
        }
        VAR_4 += VAR_7;
        VAR_5 -= VAR_7;
    }

    FUNC_1(VAR_6);
}
