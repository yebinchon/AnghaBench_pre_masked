
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int h2o_socket_t ;
struct TYPE_3__ {scalar_t__ base; int len; } ;
typedef TYPE_1__ h2o_iovec_t ;
typedef int SSL_SESSION ;
typedef int SSL ;


 int * FUNC_0 (int ) ;
 unsigned char* FUNC_1 (int *,unsigned int*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (unsigned char const*,unsigned int) ;
 int FUNC_5 (int *,unsigned char**) ;
 int FUNC_6 (int *,int ,TYPE_1__) ;

__attribute__((used)) static int FUNC_7(SSL *VAR_0, SSL_SESSION *VAR_1)
{
    h2o_socket_t *VAR_2 = FUNC_0(FUNC_2(VAR_0));

    h2o_iovec_t VAR_3;
    const unsigned char *VAR_4;
    unsigned VAR_5;
    unsigned char *VAR_6;


    VAR_3.len = FUNC_5(VAR_1, ((void*)0));
    VAR_3.base = FUNC_3(VAR_3.len);
    VAR_6 = (void *)VAR_3.base;
    FUNC_5(VAR_1, &VAR_6);

    VAR_4 = FUNC_1(VAR_1, &VAR_5);
    FUNC_6(VAR_2, FUNC_4(VAR_4, VAR_5), VAR_3);
    return 0;
}
