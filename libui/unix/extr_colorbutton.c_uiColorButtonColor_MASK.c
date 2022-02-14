
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cc; } ;
typedef TYPE_1__ uiColorButton ;
struct TYPE_6__ {double red; double green; double blue; double alpha; } ;
typedef TYPE_2__ GdkRGBA ;


 int FUNC_0 (int ,TYPE_2__*) ;

void FUNC_1(uiColorButton *VAR_0, double *VAR_1, double *VAR_2, double *VAR_3, double *VAR_4)
{
 GdkRGBA VAR_5;

 FUNC_0(VAR_0->cc, &VAR_5);
 *VAR_1 = VAR_5.red;
 *VAR_2 = VAR_5.green;
 *VAR_3 = VAR_5.blue;
 *VAR_4 = VAR_5.alpha;
}
