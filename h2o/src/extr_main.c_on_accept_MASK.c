
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int ctx; } ;
struct listener_ctx_t {TYPE_7__ accept_ctx; } ;
struct TYPE_10__ {int data; int cb; } ;
struct TYPE_12__ {TYPE_1__ on_close; struct listener_ctx_t* data; } ;
typedef TYPE_3__ h2o_socket_t ;
struct TYPE_11__ {int size; } ;
struct TYPE_14__ {int max_connections; TYPE_2__ thread_map; } ;


 TYPE_9__ VAR_0 ;
 int FUNC_0 (TYPE_7__*,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(h2o_socket_t *VAR_2, const char *VAR_3)
{
    struct listener_ctx_t *VAR_4 = VAR_2->data;
    size_t VAR_5 = VAR_0.max_connections / 16 / VAR_0.thread_map.size;
    if (VAR_5 < 8)
        VAR_5 = 8;

    if (VAR_3 != ((void*)0)) {
        return;
    }

    do {
        h2o_socket_t *VAR_6;
        if (FUNC_2(0) >= VAR_0.max_connections) {





            break;
        }
        if ((VAR_6 = FUNC_1(VAR_2)) == ((void*)0)) {
            break;
        }
        FUNC_2(1);
        FUNC_3(1);

        VAR_6->on_close.cb = VAR_1;
        VAR_6->on_close.data = VAR_4->accept_ctx.ctx;

        FUNC_0(&VAR_4->accept_ctx, VAR_6);

    } while (--VAR_5 != 0);
}
