
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_h2o_tunnel_t {TYPE_1__** sock; } ;
struct TYPE_5__ {TYPE_4__* input; struct st_h2o_tunnel_t* data; } ;
typedef TYPE_1__ h2o_socket_t ;
struct TYPE_6__ {int size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct st_h2o_tunnel_t*) ;
 int FUNC_2 (TYPE_4__**,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
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

    FUNC_4(VAR_3);

    if (VAR_3->sock[0] == VAR_1)
        VAR_4 = VAR_3->sock[1];
    else
        VAR_4 = VAR_3->sock[0];

    FUNC_2(&VAR_4->input, VAR_4->input->size);
    FUNC_3(VAR_4, VAR_0);
}
