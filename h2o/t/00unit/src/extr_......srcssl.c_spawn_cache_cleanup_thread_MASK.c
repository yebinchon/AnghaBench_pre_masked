
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int pthread_attr_t ;
typedef int SSL_CTX ;


 int VAR_0 ;
 int ** FUNC_0 (int) ;
 int FUNC_1 (int **,int **,int) ;
 int FUNC_2 (int *,int *,int ,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(SSL_CTX **VAR_1, size_t VAR_2)
{

    SSL_CTX **VAR_3 = FUNC_0(sizeof(*VAR_3) * (VAR_2 + 1));
    FUNC_1(VAR_3, VAR_1, sizeof(*VAR_3) * VAR_2);
    VAR_3[VAR_2] = ((void*)0);


    pthread_t VAR_4;
    pthread_attr_t VAR_5;
    FUNC_3(&VAR_5);
    FUNC_4(&VAR_5, 1);
    FUNC_2(&VAR_4, &VAR_5, VAR_0, VAR_3);
}
