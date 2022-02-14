
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int crypto_auth_hmacsha512_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,unsigned char*,size_t,unsigned char*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (int *,unsigned char*) ;
 int FUNC_3 (int *,unsigned char*,size_t) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (int *,unsigned char*,size_t) ;
 scalar_t__ FUNC_6 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_7 (unsigned char*,size_t) ;
 size_t FUNC_8 (int ) ;
 int FUNC_9 (unsigned char*) ;
 scalar_t__ FUNC_10 (size_t) ;

__attribute__((used)) static void
FUNC_11(void)
{
    crypto_auth_hmacsha512_state VAR_4;
    unsigned char *VAR_5, *VAR_6;
    unsigned char *VAR_7;
    unsigned char *VAR_8;
    size_t VAR_9;
    size_t VAR_10, VAR_11;
    int VAR_12;

    for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
        VAR_9 = FUNC_8(VAR_0);
        VAR_8 = (unsigned char *) FUNC_10(VAR_9);
        VAR_7 = (unsigned char *) FUNC_10(VAR_3);
        VAR_5 = (unsigned char *) FUNC_10(VAR_2);
        VAR_6 = (unsigned char *) FUNC_10(VAR_2);

        FUNC_4(VAR_7);
        FUNC_7(VAR_8, VAR_9);

        FUNC_3(&VAR_4, VAR_7, VAR_3);
        VAR_10 = FUNC_8((uint32_t) VAR_9);
        VAR_11 = FUNC_8((uint32_t) (VAR_9 - VAR_10));
        FUNC_5(&VAR_4, VAR_8, VAR_10);
        FUNC_5(&VAR_4, VAR_8 + VAR_10, VAR_11);
        FUNC_5(&VAR_4, VAR_8 + VAR_10 + VAR_11, VAR_9 - VAR_10 - VAR_11);
        FUNC_2(&VAR_4, VAR_5);

        FUNC_1(VAR_6, VAR_8, VAR_9, VAR_7);

        FUNC_0(FUNC_6(VAR_5, VAR_6, VAR_2) == 0);

        FUNC_9(VAR_6);
        FUNC_9(VAR_5);
        FUNC_9(VAR_7);
        FUNC_9(VAR_8);
    }
}
