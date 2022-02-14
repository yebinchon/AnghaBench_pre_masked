
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int body_obj; int final_sent; } ;
struct st_h2o_mruby_callback_sender_t {int receiving; int sending; TYPE_1__ super; scalar_t__ has_error; } ;
typedef int h2o_req_t ;
struct TYPE_6__ {scalar_t__ sender; } ;
typedef TYPE_2__ h2o_mruby_generator_t ;
typedef int h2o_generator_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int *,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int *,int *,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(h2o_generator_t *VAR_1, h2o_req_t *VAR_2)
{
    h2o_mruby_generator_t *VAR_3 = (void *)VAR_1;
    struct st_h2o_mruby_callback_sender_t *VAR_4 = (void *)VAR_3->sender;

    FUNC_0(!VAR_4->super.final_sent);

    FUNC_1(&VAR_4->sending);

    if (VAR_4->has_error) {
        FUNC_2(VAR_3, ((void*)0), 0, VAR_0);
    } else {
        int VAR_5 = FUNC_4(VAR_4->super.body_obj);
        FUNC_3(VAR_3, &VAR_4->sending, &VAR_4->receiving, VAR_5);
    }
}
