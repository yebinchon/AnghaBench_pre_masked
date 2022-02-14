
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;
typedef int mrb_float ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*,int*) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_1, mrb_value VAR_2)
{
    time_t VAR_3 = FUNC_4(0);
    time_t VAR_4;

    mrb_float VAR_5;

    FUNC_1(VAR_1, "f", &VAR_5);
    if (VAR_5 >= 0) {
        FUNC_5(VAR_5 * 1000000);
    }
    else {
        FUNC_2(VAR_1, VAR_0, "time interval must not be negative");
    }
    VAR_4 = FUNC_4(0) - VAR_3;

    return FUNC_0(VAR_4);
}
