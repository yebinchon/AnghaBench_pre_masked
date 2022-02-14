
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uiDrawPath ;
struct TYPE_3__ {int cr; } ;
typedef TYPE_1__ uiDrawContext ;
typedef int uiDrawBrush ;
typedef int cairo_pattern_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (int *) ;


 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

void FUNC_7(uiDrawContext *VAR_2, uiDrawPath *VAR_3, uiDrawBrush *VAR_4)
{
 cairo_pattern_t *VAR_5;

 FUNC_6(VAR_3, VAR_2->cr);
 VAR_5 = FUNC_4(VAR_4);
 FUNC_3(VAR_2->cr, VAR_5);
 switch (FUNC_5(VAR_3)) {
 case 128:
  FUNC_2(VAR_2->cr, VAR_1);
  break;
 case 129:
  FUNC_2(VAR_2->cr, VAR_0);
  break;
 }
 FUNC_0(VAR_2->cr);
 FUNC_1(VAR_5);
}
