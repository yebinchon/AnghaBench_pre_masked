
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct st_h2o_mruby_callback_sender_t {int receiving; int sending; } ;
struct TYPE_4__ {scalar_t__ sender; } ;
typedef TYPE_1__ h2o_mruby_generator_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(h2o_mruby_generator_t *VAR_0)
{
    struct st_h2o_mruby_callback_sender_t *VAR_1 = (void *)VAR_0->sender;
    FUNC_1(&VAR_1->sending);
    FUNC_0(&VAR_1->receiving);
    FUNC_2(VAR_0);
}
