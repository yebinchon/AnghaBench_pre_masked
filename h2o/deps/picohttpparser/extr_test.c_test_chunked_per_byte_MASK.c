
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phr_chunked_decoder {int consume_trailer; int member_0; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int,char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct phr_chunked_decoder*,char*,size_t*) ;
 int FUNC_6 (char*,char const*) ;
 size_t FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(int VAR_0, int VAR_1, const char *VAR_2, const char *VAR_3, ssize_t VAR_4)
{
    struct phr_chunked_decoder VAR_5 = {0};
    char *VAR_6 = FUNC_2(FUNC_7(VAR_2) + 1);
    size_t VAR_7 = FUNC_7(VAR_2) - (VAR_4 >= 0 ? VAR_4 : 0), VAR_8 = 0, VAR_9, VAR_10;
    ssize_t VAR_11;

    VAR_5.consume_trailer = VAR_1;

    FUNC_3("testing per-byte, source at line %d", VAR_0);

    for (VAR_10 = 0; VAR_10 < VAR_7 - 1; ++VAR_10) {
        VAR_6[VAR_8] = VAR_2[VAR_10];
        VAR_9 = 1;
        VAR_11 = FUNC_5(&VAR_5, VAR_6 + VAR_8, &VAR_9);
        if (VAR_11 != -2) {
            FUNC_4(0);
            goto cleanup;
        }
        VAR_8 += VAR_9;
    }
    FUNC_6(VAR_6 + VAR_8, VAR_2 + VAR_7 - 1);
    VAR_9 = FUNC_7(VAR_6 + VAR_8);
    VAR_11 = FUNC_5(&VAR_5, VAR_6 + VAR_8, &VAR_9);
    FUNC_4(VAR_11 == VAR_4);
    VAR_8 += VAR_9;
    FUNC_4(VAR_8 == FUNC_7(VAR_3));
    FUNC_4(FUNC_0(VAR_6, VAR_8, VAR_3));
    if (VAR_4 >= 0) {
        if (VAR_11 == VAR_4)
            FUNC_4(FUNC_0(VAR_6 + VAR_8, VAR_4, VAR_2 + VAR_7));
        else
            FUNC_4(0);
    }

cleanup:
    FUNC_1(VAR_6);
}
