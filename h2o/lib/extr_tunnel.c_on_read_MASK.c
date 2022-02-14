
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct st_h2o_tunnel_t {TYPE_2__** sock; } ;
struct TYPE_9__ {scalar_t__ bytes_read; TYPE_1__* input; struct st_h2o_tunnel_t* data; } ;
typedef TYPE_2__ h2o_socket_t ;
struct TYPE_10__ {int len; int base; } ;
typedef TYPE_3__ h2o_iovec_t ;
struct TYPE_8__ {int size; int bytes; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct st_h2o_tunnel_t*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,int,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct st_h2o_tunnel_t*) ;

__attribute__((used)) static void FUNC_5(h2o_socket_t *VAR_1, const char *VAR_2)
{
    struct st_h2o_tunnel_t *VAR_3 = VAR_1->data;
    h2o_socket_t *VAR_4;
    FUNC_0(VAR_3 != ((void*)0));
    FUNC_0(VAR_3->sock[0] == VAR_1 || VAR_3->sock[1] == VAR_1);

    if (VAR_2 != ((void*)0)) {
        FUNC_1(VAR_3);
        return;
    }

    if (VAR_1->bytes_read == 0)
        return;

    FUNC_2(VAR_1);
    FUNC_4(VAR_3);

    if (VAR_3->sock[0] == VAR_1)
        VAR_4 = VAR_3->sock[1];
    else
        VAR_4 = VAR_3->sock[0];

    h2o_iovec_t VAR_5;
    VAR_5.base = VAR_1->input->bytes;
    VAR_5.len = VAR_1->input->size;
    FUNC_3(VAR_4, &VAR_5, 1, VAR_0);
}
