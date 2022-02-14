
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ssl; } ;
typedef TYPE_2__ h2o_socket_t ;
struct TYPE_5__ {int* did_write_in_read; } ;
typedef int BIO ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,char const*,int) ;

__attribute__((used)) static int FUNC_2(BIO *VAR_0, const char *VAR_1, int VAR_2)
{
    h2o_socket_t *VAR_3 = FUNC_0(VAR_0);


    if (VAR_3->ssl->did_write_in_read != ((void*)0)) {
        *VAR_3->ssl->did_write_in_read = 1;
        return -1;
    }

    FUNC_1(VAR_3, VAR_1, VAR_2);
    return VAR_2;
}
