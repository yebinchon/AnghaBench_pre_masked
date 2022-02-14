
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phr_chunked_decoder {int consume_trailer; int member_0; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (char*,scalar_t__,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct phr_chunked_decoder*,char*,size_t*) ;
 char* FUNC_5 (char const*) ;
 size_t FUNC_6 (char const*) ;

__attribute__((used)) static void FUNC_7(int VAR_0, int VAR_1, const char *VAR_2, const char *VAR_3, ssize_t VAR_4)
{
    struct phr_chunked_decoder VAR_5 = {0};
    char *VAR_6;
    size_t VAR_7;
    ssize_t VAR_8;

    VAR_5.consume_trailer = VAR_1;

    FUNC_2("testing at-once, source at line %d", VAR_0);

    VAR_6 = FUNC_5(VAR_2);
    VAR_7 = FUNC_6(VAR_6);

    VAR_8 = FUNC_4(&VAR_5, VAR_6, &VAR_7);

    FUNC_3(VAR_8 == VAR_4);
    FUNC_3(VAR_7 == FUNC_6(VAR_3));
    FUNC_3(FUNC_0(VAR_6, VAR_7, VAR_3));
    if (VAR_4 >= 0) {
        if (VAR_8 == VAR_4)
            FUNC_3(FUNC_0(VAR_6 + VAR_7, VAR_8, VAR_2 + FUNC_6(VAR_2) - VAR_8));
        else
            FUNC_3(0);
    }

    FUNC_1(VAR_6);
}
