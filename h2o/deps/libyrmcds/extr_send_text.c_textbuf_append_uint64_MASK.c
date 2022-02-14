
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int textbuf_t ;
typedef char* nbuf ;


 int FUNC_0 (int *,char*,size_t) ;

__attribute__((used)) static void
FUNC_1(textbuf_t* VAR_0, uint64_t VAR_1) {

    char VAR_2[20];
    char* VAR_3 = (VAR_2) + 20;

    do {
        VAR_3--;
        uint64_t VAR_4 = VAR_1 % 10;
        VAR_1 /= 10;
        *VAR_3 = (char)('0' + VAR_4);
    } while( VAR_1 != 0 );

    FUNC_0(VAR_0, VAR_3, (size_t)(VAR_2 - VAR_3 + 20));
}
