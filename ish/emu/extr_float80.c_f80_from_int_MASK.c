
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int sign; int signif; scalar_t__ exp; } ;
typedef TYPE_1__ float80 ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_1__ FUNC_1 (TYPE_1__) ;

float80 FUNC_2(int64_t VAR_0) {


    float80 VAR_1 = {
        .signif = VAR_0,
        .exp = FUNC_0(63),
        .sign = 0,
    };
    if (VAR_0 == 0)
        VAR_1.exp = 0;
    if (VAR_0 < 0) {
        VAR_1.sign = 1;
        VAR_1.signif = -VAR_0;
    }
    return FUNC_1(VAR_1);
}
