
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int inflight; } ;
struct TYPE_7__ {int final_sent; } ;
struct st_h2o_mruby_http_sender_t {TYPE_5__ sending; TYPE_1__ super; } ;
struct TYPE_8__ {scalar_t__ sender; } ;
typedef TYPE_2__ h2o_mruby_generator_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_2__*,int *,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(h2o_mruby_generator_t *VAR_1)
{
    struct st_h2o_mruby_http_sender_t *VAR_2 = (void *)VAR_1->sender;

    FUNC_2(VAR_1);

    if (!VAR_2->super.final_sent && !VAR_2->sending.inflight) {
        FUNC_0(&VAR_2->sending);
        FUNC_1(VAR_1, ((void*)0), 0, VAR_0);
    }
}
