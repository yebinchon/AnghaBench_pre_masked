
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct theft {int dummy; } ;
struct test_timer {int called; int t; } ;
struct test_input {int second_time; int first_time; int init_time; } ;
typedef int h2o_timerwheel_t ;
typedef enum theft_trial_res { ____Placeholder_theft_trial_res } theft_trial_res ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 size_t FUNC_5 (int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static enum theft_trial_res FUNC_6(struct theft *VAR_4, void *VAR_5)
{
    struct test_input *VAR_6 = VAR_5;
    size_t VAR_7;
    h2o_timerwheel_t *VAR_8;
    VAR_8 = FUNC_0(6, VAR_6->init_time);
    FUNC_5(VAR_8, VAR_6->init_time);

    struct test_timer VAR_9;
    FUNC_3(&VAR_9.t, VAR_3);
    VAR_9.called = 0;
    FUNC_4(VAR_8, &VAR_9.t, VAR_6->first_time);
    VAR_7 = FUNC_5(VAR_8, VAR_6->second_time);

    if (VAR_7 != 1)
        return VAR_0;
    if (VAR_9.called != 1)
        return VAR_0;
    if (FUNC_2(VAR_8) != VAR_2)
        return VAR_0;
    FUNC_1(VAR_8);
    return VAR_1;
}
