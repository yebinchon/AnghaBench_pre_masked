
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int inflight; } ;
struct TYPE_6__ {int final_sent; } ;
struct st_h2o_mruby_http_sender_t {TYPE_4__ sending; TYPE_1__ super; int * remaining; int * client; } ;
typedef int h2o_req_t ;
struct TYPE_7__ {scalar_t__ sender; } ;
typedef TYPE_2__ h2o_mruby_generator_t ;
typedef int h2o_generator_t ;
typedef int h2o_buffer_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_4__*,int **,int) ;
 int ** FUNC_3 (int *,int*) ;

__attribute__((used)) static void FUNC_4(h2o_generator_t *VAR_0, h2o_req_t *VAR_1)
{
    h2o_mruby_generator_t *VAR_2 = (void *)VAR_0;
    struct st_h2o_mruby_http_sender_t *VAR_3 = (void *)VAR_2->sender;
    h2o_buffer_t **VAR_4;
    int VAR_5;

    FUNC_1(&VAR_3->sending);

    if (VAR_3->client != ((void*)0)) {
        VAR_4 = FUNC_3(VAR_3->client, &VAR_5);
        FUNC_0(!VAR_5);
    } else {
        VAR_4 = &VAR_3->remaining;
        VAR_5 = 1;
    }

    if (!VAR_3->super.final_sent && !VAR_3->sending.inflight)
        FUNC_2(VAR_2, &VAR_3->sending, VAR_4, VAR_5);
}
