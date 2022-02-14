
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_h2o_mruby_http_sender_t {TYPE_1__* client; int * remaining; int sending; } ;
struct TYPE_6__ {scalar_t__ sender; } ;
typedef TYPE_2__ h2o_mruby_generator_t ;
struct TYPE_5__ {TYPE_2__* shortcut; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(h2o_mruby_generator_t *VAR_0)
{
    struct st_h2o_mruby_http_sender_t *VAR_1 = (void *)VAR_0->sender;

    FUNC_2(&VAR_1->sending);


    if (VAR_1->remaining != ((void*)0))
        FUNC_1(&VAR_1->remaining);

    if (VAR_1->client != ((void*)0)) {
        FUNC_0(VAR_1->client->shortcut == VAR_0);
        VAR_1->client->shortcut = ((void*)0);
    }

    FUNC_3(VAR_0);
}
