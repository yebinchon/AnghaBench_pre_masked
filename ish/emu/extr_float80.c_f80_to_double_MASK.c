
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned long uint64_t ;
struct double_bits {int exp; unsigned long signif; int sign; } ;
struct TYPE_6__ {scalar_t__ exp; int signif; int sign; } ;
typedef TYPE_1__ float80 ;
typedef int db ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 int FUNC_0 (TYPE_1__) ;
 TYPE_1__ FUNC_1 (TYPE_1__,int) ;
 int FUNC_2 (double*,struct double_bits*,int) ;
 unsigned long FUNC_3 (int,int,int ) ;
 int FUNC_4 (scalar_t__) ;

double FUNC_5(float80 VAR_5) {
    if (!FUNC_0(VAR_5))
        return VAR_4;
    struct double_bits VAR_6;
    VAR_6.sign = VAR_5.sign;
    int VAR_7 = FUNC_4(VAR_5.exp) + 0x3ff;
    if (VAR_5.exp == VAR_2)
        VAR_7 = VAR_1;
    else if (VAR_7 > VAR_0)

        return !VAR_5.sign ? VAR_3 : -VAR_3;
    if (VAR_7 <= 0) {



        VAR_5.signif >>= 1;
        VAR_5 = FUNC_1(VAR_5, -VAR_7);
        VAR_7 = FUNC_4(VAR_5.exp) + 0x3ff;
    }
    VAR_6.exp = VAR_7;
    uint64_t VAR_8 = FUNC_3(VAR_5.signif, 11, VAR_5.sign);


    if (VAR_8 & (1ul << 53)) {
        VAR_8 >>= 1;
        VAR_6.exp++;
    }
    VAR_6.signif = VAR_8;
    double VAR_9;
    FUNC_2(&VAR_9, &VAR_6, sizeof(VAR_6));
    return VAR_9;
}
