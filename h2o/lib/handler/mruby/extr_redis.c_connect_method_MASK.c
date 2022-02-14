
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {scalar_t__ state; } ;
struct st_h2o_mruby_redis_client_t {TYPE_1__ super; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 struct st_h2o_mruby_redis_client_t* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,char const*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,int ) ;
 char* FUNC_5 (int *,int *) ;

__attribute__((used)) static mrb_value FUNC_6(mrb_state *VAR_1, mrb_value VAR_2)
{
    struct st_h2o_mruby_redis_client_t *VAR_3 = FUNC_0(VAR_2);
    if (VAR_3->super.state != VAR_0)
        return VAR_2;

    mrb_value VAR_4 = FUNC_4(VAR_1, VAR_2, FUNC_3(VAR_1, "@host"));
    mrb_value VAR_5 = FUNC_4(VAR_1, VAR_2, FUNC_3(VAR_1, "@port"));
    const char *VAR_6 = FUNC_5(VAR_1, &VAR_4);
    uint16_t VAR_7 = FUNC_2(VAR_5);

    FUNC_1(&VAR_3->super, VAR_6, VAR_7);

    return VAR_2;
}
