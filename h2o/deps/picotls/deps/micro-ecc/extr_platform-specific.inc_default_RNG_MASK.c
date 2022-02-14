
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int,char*,size_t) ;

__attribute__((used)) static int FUNC_3(uint8_t *VAR_2, unsigned VAR_3) {
    int VAR_4 = FUNC_1("/dev/urandom", VAR_1 | VAR_0);
    if (VAR_4 == -1) {
        VAR_4 = FUNC_1("/dev/random", VAR_1 | VAR_0);
        if (VAR_4 == -1) {
            return 0;
        }
    }

    char *VAR_5 = (char *)VAR_2;
    size_t VAR_6 = VAR_3;
    while (VAR_6 > 0) {
        ssize_t VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_6);
        if (VAR_7 <= 0) {
            FUNC_0(VAR_4);
            return 0;
        }
        VAR_6 -= VAR_7;
        VAR_5 += VAR_7;
    }

    FUNC_0(VAR_4);
    return 1;
}
