
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int BIO ;


 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (int *,int **,int *,int *) ;
 int * FUNC_2 () ;

X509* FUNC_3(char* VAR_0)
{

    X509* VAR_1 = FUNC_2();
    BIO* VAR_2 = FUNC_0(VAR_0, "rb");
    FUNC_1(VAR_2, &VAR_1, ((void*)0), ((void*)0));
    return VAR_1;
}
