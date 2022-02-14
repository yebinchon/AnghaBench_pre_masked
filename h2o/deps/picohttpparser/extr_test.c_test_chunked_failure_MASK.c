
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phr_chunked_decoder {int member_0; } ;
typedef int ssize_t ;
typedef int dec ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct phr_chunked_decoder*,int ,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct phr_chunked_decoder*,char*,size_t*) ;
 char* FUNC_5 (char const*) ;
 size_t FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(int VAR_0, const char *VAR_1, ssize_t VAR_2)
{
    struct phr_chunked_decoder VAR_3 = {0};
    char *VAR_4 = FUNC_5(VAR_1);
    size_t VAR_5, VAR_6;
    ssize_t VAR_7;

    FUNC_2("testing failure at-once, source at line %d", VAR_0);
    VAR_5 = FUNC_6(VAR_4);
    VAR_7 = FUNC_4(&VAR_3, VAR_4, &VAR_5);
    FUNC_3(VAR_7 == VAR_2);

    FUNC_2("testing failure per-byte, source at line %d", VAR_0);
    FUNC_1(&VAR_3, 0, sizeof(VAR_3));
    for (VAR_6 = 0; VAR_1[VAR_6] != '\0'; ++VAR_6) {
        VAR_4[0] = VAR_1[VAR_6];
        VAR_5 = 1;
        VAR_7 = FUNC_4(&VAR_3, VAR_4, &VAR_5);
        if (VAR_7 == -1) {
            FUNC_3(VAR_7 == VAR_2);
            goto cleanup;
        } else if (VAR_7 == -2) {

        } else {
            FUNC_3(0);
            goto cleanup;
        }
    }
    FUNC_3(VAR_7 == VAR_2);

cleanup:
    FUNC_0(VAR_4);
}
