
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned char*,unsigned char*,unsigned long long,unsigned char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;

int
FUNC_5(void)
{
    unsigned char VAR_5[VAR_0];
    unsigned char VAR_6[VAR_3];
    unsigned char VAR_7[VAR_4];
    size_t VAR_8;
    size_t VAR_9;

    for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8) {
        VAR_7[VAR_8] = (unsigned char) VAR_8;
    }
    for (VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8) {
        VAR_5[VAR_8] = (unsigned char) VAR_8;
        FUNC_1(VAR_6, VAR_5, (unsigned long long) VAR_8, VAR_7);
        for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9) {
            FUNC_4("%02x", (unsigned int) VAR_6[VAR_9]);
        }
        FUNC_4("\n");
    }
    FUNC_0(VAR_4 >= VAR_2);
    FUNC_0(VAR_3 > VAR_1);
    FUNC_0(FUNC_2() == VAR_3);
    FUNC_0(FUNC_3() == VAR_4);

    return 0;
}
