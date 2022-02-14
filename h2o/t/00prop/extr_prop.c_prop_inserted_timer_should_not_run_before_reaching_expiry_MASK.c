
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct theft {int dummy; } ;
struct test_timer {int called; int t; } ;
struct test_input {scalar_t__ init_time; scalar_t__ first_time; int second_time; } ;
typedef int h2o_timerwheel_t ;
typedef enum theft_trial_res { ____Placeholder_theft_trial_res } theft_trial_res ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,scalar_t__) ;
 size_t FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (struct theft*,size_t) ;
 int VAR_3 ;

__attribute__((used)) static enum theft_trial_res FUNC_7(struct theft *VAR_4, void *VAR_5)
{
    struct test_input *VAR_6 = VAR_5;
    uint64_t VAR_7;
    size_t VAR_8;
    h2o_timerwheel_t *VAR_9;
    VAR_9 = FUNC_0(6, VAR_6->init_time);
    FUNC_5(VAR_9, VAR_6->init_time);
    size_t VAR_10 = 1;

    struct test_timer VAR_11;
    FUNC_3(&VAR_11.t, VAR_3);
    VAR_11.called = 0;
    FUNC_4(VAR_9, &VAR_11.t, VAR_6->first_time);

    VAR_10 = VAR_6->second_time / 100;
    for (VAR_7 = VAR_6->init_time; VAR_7 < VAR_6->first_time; VAR_7 += FUNC_6(VAR_4, VAR_10)) {
        VAR_8 = FUNC_5(VAR_9, VAR_7);
        if (VAR_8 != 0)
            return VAR_0;
        if (VAR_11.called != 0)
            return VAR_0;
        if (FUNC_2(VAR_9) == VAR_2)
            return VAR_0;
    }

    VAR_8 = FUNC_5(VAR_9, VAR_7);

    if (VAR_8 != 1)
        return VAR_0;
    if (VAR_11.called != 1)
        return VAR_0;
    if (FUNC_2(VAR_9) != VAR_2)
        return VAR_0;
    FUNC_1(VAR_9);
    return VAR_1;
}
