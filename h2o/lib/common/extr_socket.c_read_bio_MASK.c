
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* ssl; } ;
typedef TYPE_3__ h2o_socket_t ;
struct TYPE_9__ {int size; int bytes; } ;
struct TYPE_6__ {TYPE_4__* encrypted; } ;
struct TYPE_7__ {TYPE_1__ input; } ;
typedef int BIO ;


 TYPE_3__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__**,int) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static int FUNC_4(BIO *VAR_0, char *VAR_1, int VAR_2)
{
    h2o_socket_t *VAR_3 = FUNC_0(VAR_0);

    if (VAR_2 == 0)
        return 0;

    if (VAR_3->ssl->input.encrypted->size == 0) {
        FUNC_1(VAR_0);
        return -1;
    }

    if (VAR_3->ssl->input.encrypted->size < VAR_2) {
        VAR_2 = (int)VAR_3->ssl->input.encrypted->size;
    }
    FUNC_3(VAR_1, VAR_3->ssl->input.encrypted->bytes, VAR_2);
    FUNC_2(&VAR_3->ssl->input.encrypted, VAR_2);

    return VAR_2;
}
