
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int EC_KEY ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int VAR_0 ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,char*,char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(SSL_CTX *VAR_2)
{
    int VAR_3 = VAR_0;
    EC_KEY *VAR_4 = FUNC_1(VAR_3);
    if (VAR_4 == ((void*)0)) {
        FUNC_4(VAR_1, "Failed to create curve \"%s\"\n", FUNC_2(VAR_3));
        return;
    }
    FUNC_3(VAR_2, VAR_4);
    FUNC_0(VAR_4);
}
