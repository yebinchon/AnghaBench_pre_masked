
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct RClass {int dummy; } ;
typedef int mrb_value ;
struct TYPE_5__ {TYPE_2__* ud; } ;
typedef TYPE_1__ mrb_state ;
struct TYPE_6__ {int constants; } ;
typedef TYPE_2__ h2o_mruby_shared_context_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct RClass* FUNC_1 (TYPE_1__*,struct RClass*,char const*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static struct RClass *FUNC_3(mrb_state *VAR_1, const char *VAR_2)
{
    h2o_mruby_shared_context_t *VAR_3 = VAR_1->ud;
    mrb_value VAR_4 = FUNC_0(VAR_3->constants, VAR_0);
    struct RClass *VAR_5 = FUNC_1(VAR_1, (struct RClass *)FUNC_2(VAR_4), "Redis");
    struct RClass *VAR_6 = FUNC_1(VAR_1, VAR_5, VAR_2);
    return VAR_6;
}
