
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {double M12; double M21; double M31; double M32; } ;
typedef TYPE_1__ uiDrawMatrix ;


 double FUNC_0 (double) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(uiDrawMatrix *VAR_0, double VAR_1, double VAR_2, double VAR_3, double VAR_4)
{
 uiDrawMatrix VAR_5;

 FUNC_2(&VAR_5);

 VAR_5.M12 = FUNC_0(VAR_4);
 VAR_5.M21 = FUNC_0(VAR_3);
 VAR_5.M31 = -VAR_2 * FUNC_0(VAR_3);
 VAR_5.M32 = -VAR_1 * FUNC_0(VAR_4);
 FUNC_1(VAR_0, &VAR_5);
}
