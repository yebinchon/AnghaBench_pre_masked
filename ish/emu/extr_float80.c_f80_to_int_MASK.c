
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {scalar_t__ exp; int signif; int sign; } ;
typedef TYPE_1__ float80 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__) ;
 TYPE_1__ FUNC_2 (TYPE_1__,scalar_t__) ;

int64_t FUNC_3(float80 VAR_2) {
    if (!FUNC_1(VAR_2))
        return VAR_1;


    if (VAR_2.exp > FUNC_0(63))
        return !VAR_2.sign ? VAR_0 : VAR_1;

    VAR_2 = FUNC_2(VAR_2, FUNC_0(63) - VAR_2.exp);

    return !VAR_2.sign ? VAR_2.signif : -VAR_2.signif;
}
