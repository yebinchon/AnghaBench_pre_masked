
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct double_bits {scalar_t__ exp; scalar_t__ signif; int sign; } ;
struct TYPE_5__ {int signif; int sign; void* exp; } ;
typedef TYPE_1__ float80 ;
typedef int db ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* FUNC_0 (int) ;
 TYPE_1__ FUNC_1 (TYPE_1__) ;
 int FUNC_2 (struct double_bits*,double*,int) ;

float80 FUNC_3(double VAR_4) {
    struct double_bits VAR_5;
    FUNC_2(&VAR_5, &VAR_4, sizeof(VAR_5));
    float80 VAR_6;

    if (VAR_5.exp == VAR_2)
        VAR_6.exp = VAR_3;
    else if (VAR_5.exp == VAR_1)




        VAR_6.exp = VAR_5.signif == 0 ? 0 : FUNC_0(1 - 0x3ff);
    else
        VAR_6.exp = FUNC_0((int) VAR_5.exp - 0x3ff);

    VAR_6.signif = (uint64_t) VAR_5.signif << 11;
    if (VAR_5.exp != VAR_1)
        VAR_6.signif |= VAR_0;
    VAR_6.sign = VAR_5.sign;
    return FUNC_1(VAR_6);
}
