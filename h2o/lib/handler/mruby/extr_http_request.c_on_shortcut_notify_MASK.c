
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int inflight; } ;
struct TYPE_11__ {scalar_t__ bytes_left; int final_sent; } ;
struct st_h2o_mruby_http_sender_t {TYPE_8__ sending; TYPE_1__ super; TYPE_5__* client; TYPE_3__* remaining; } ;
struct TYPE_12__ {scalar_t__ sender; } ;
typedef TYPE_2__ h2o_mruby_generator_t ;
struct TYPE_13__ {scalar_t__ size; } ;
typedef TYPE_3__ h2o_buffer_t ;
struct TYPE_14__ {TYPE_2__* shortcut; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__**,int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_8__*,TYPE_3__**,int) ;
 int VAR_1 ;
 TYPE_3__** FUNC_3 (TYPE_5__*,int*) ;

__attribute__((used)) static void FUNC_4(h2o_mruby_generator_t *VAR_2)
{
    struct st_h2o_mruby_http_sender_t *VAR_3 = (void *)VAR_2->sender;
    FUNC_0(VAR_3->client->shortcut == VAR_2);

    int VAR_4;
    h2o_buffer_t **VAR_5 = FUNC_3(VAR_3->client, &VAR_4);

    if (VAR_3->super.bytes_left != VAR_0 && VAR_3->super.bytes_left < (*VAR_5)->size)
        (*VAR_5)->size = VAR_3->super.bytes_left;


    if (VAR_4) {
        VAR_3->remaining = *VAR_5;
        FUNC_1(VAR_5, &VAR_1);
        VAR_5 = &VAR_3->remaining;
        VAR_3->client->shortcut = ((void*)0);
        VAR_3->client = ((void*)0);
    }

    if (!VAR_3->super.final_sent && !VAR_3->sending.inflight)
        FUNC_2(VAR_2, &VAR_3->sending, VAR_5, VAR_4);
}
