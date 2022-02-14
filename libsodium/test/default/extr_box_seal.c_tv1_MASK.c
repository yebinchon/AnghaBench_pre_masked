
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_2 (unsigned char*,unsigned char*,size_t,unsigned char*) ;
 int FUNC_3 (unsigned char*,unsigned char*,size_t,unsigned char*,unsigned char*) ;
 size_t FUNC_4 () ;
 int FUNC_5 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (unsigned char*,size_t) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (unsigned char*) ;
 scalar_t__ FUNC_10 (size_t) ;

__attribute__((used)) static
void FUNC_11(void)
{
    unsigned char VAR_3[VAR_0];
    unsigned char VAR_4[VAR_2];
    unsigned char *VAR_5;
    unsigned char *VAR_6;
    unsigned char *VAR_7;
    size_t VAR_8;
    size_t VAR_9;

    FUNC_1(VAR_3, VAR_4);
    VAR_8 = (size_t) FUNC_8(1000);
    VAR_9 = VAR_1 + VAR_8;
    VAR_6 = (unsigned char *) FUNC_10(VAR_8);
    VAR_7 = (unsigned char *) FUNC_10(VAR_8);
    VAR_5 = (unsigned char *) FUNC_10(VAR_9);
    FUNC_7(VAR_6, VAR_8);
    if (FUNC_2(VAR_5, VAR_6, VAR_8, VAR_3) != 0) {
        FUNC_6("crypto_box_seal() failure\n");
        return;
    }
    if (FUNC_3(VAR_7, VAR_5, VAR_9, VAR_3, VAR_4) != 0) {
        FUNC_6("crypto_box_seal_open() failure\n");
        return;
    }
    FUNC_6("%d\n", FUNC_5(VAR_6, VAR_7, VAR_8));

    FUNC_6("%d\n", FUNC_3(VAR_6, VAR_5, 0U, VAR_3, VAR_4));
    FUNC_6("%d\n", FUNC_3(VAR_6, VAR_5, VAR_9 - 1U, VAR_3, VAR_4));
    FUNC_6("%d\n", FUNC_3(VAR_6, VAR_5, VAR_9, VAR_4, VAR_3));

    FUNC_9(VAR_5);
    FUNC_9(VAR_6);
    FUNC_9(VAR_7);

    FUNC_0(FUNC_4() == VAR_1);
}
