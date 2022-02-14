
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h2o_cache_t ;
typedef int X509_STORE ;
typedef int SSL_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 () ;
 int * FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;

__attribute__((used)) static void FUNC_14(SSL_CTX **VAR_2, X509_STORE *VAR_3, int VAR_4, h2o_cache_t **VAR_5)
{
    FUNC_7(*VAR_2 != ((void*)0));


    if (VAR_3 == ((void*)0))
        VAR_3 = FUNC_1(*VAR_2);
    FUNC_6(VAR_3);
    if (VAR_4 == -1)
        VAR_4 = FUNC_2(*VAR_2);
    h2o_cache_t *VAR_6;
    if (VAR_5 == ((void*)0)) {
        h2o_cache_t *VAR_7 = FUNC_12(*VAR_2);
        VAR_6 =
            VAR_7 == ((void*)0) ? ((void*)0) : FUNC_9(FUNC_10(VAR_7), FUNC_11(VAR_7));
    } else {
        VAR_6 = *VAR_5;
    }


    if (*VAR_2 != ((void*)0))
        FUNC_0(*VAR_2);


    *VAR_2 = FUNC_8();
    FUNC_4(*VAR_2, VAR_0, VAR_1);
    FUNC_3(*VAR_2, VAR_3);
    FUNC_5(*VAR_2, VAR_4, ((void*)0));
    if (VAR_6 != ((void*)0))
        FUNC_13(*VAR_2, VAR_6);
}
