
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint128_t ;
struct TYPE_8__ {int sign; int exp; scalar_t__ signif; } ;
typedef TYPE_1__ float80 ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (TYPE_1__) ;
 scalar_t__ FUNC_1 (TYPE_1__) ;
 TYPE_1__ FUNC_2 (int,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ) ;

float80 FUNC_4(float80 VAR_1, int VAR_2) {
    if (!FUNC_0(VAR_1) || FUNC_1(VAR_1))
        return VAR_0;
    return FUNC_2((uint128_t) VAR_1.signif << 64, FUNC_3(VAR_1.exp) + VAR_2, VAR_1.sign);
}
