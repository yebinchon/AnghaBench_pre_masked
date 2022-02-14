
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int serial; } ;
typedef TYPE_1__ Clock ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (double) ;
 double FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (double) ;
 int FUNC_3 (TYPE_1__*,double,int ) ;

__attribute__((used)) static void FUNC_4(Clock *VAR_1, Clock *VAR_2)
{
    double VAR_3 = FUNC_1(VAR_1);
    double VAR_4 = FUNC_1(VAR_2);
    if (!FUNC_2(VAR_4) && (FUNC_2(VAR_3) || FUNC_0(VAR_3 - VAR_4) > VAR_0))
        FUNC_3(VAR_1, VAR_4, VAR_2->serial);
}
