
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Cap; int Join; int DashPhase; int NumDashes; int Dashes; int Thickness; int MiterLimit; } ;
typedef TYPE_1__ uiDrawStrokeParams ;
typedef int uiDrawPath ;
struct TYPE_6__ {int cr; } ;
typedef TYPE_2__ uiDrawContext ;
typedef int uiDrawBrush ;
typedef int cairo_pattern_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int *) ;






 int FUNC_9 (int *,int ) ;

void FUNC_10(uiDrawContext *VAR_6, uiDrawPath *VAR_7, uiDrawBrush *VAR_8, uiDrawStrokeParams *VAR_9)
{
 cairo_pattern_t *VAR_10;

 FUNC_9(VAR_7, VAR_6->cr);
 VAR_10 = FUNC_8(VAR_8);
 FUNC_6(VAR_6->cr, VAR_10);
 switch (VAR_9->Cap) {
 case 133:
  FUNC_2(VAR_6->cr, VAR_0);
  break;
 case 132:
  FUNC_2(VAR_6->cr, VAR_1);
  break;
 case 131:
  FUNC_2(VAR_6->cr, VAR_2);
  break;
 }
 switch (VAR_9->Join) {
 case 129:
  FUNC_3(VAR_6->cr, VAR_4);
  FUNC_5(VAR_6->cr, VAR_9->MiterLimit);
  break;
 case 128:
  FUNC_3(VAR_6->cr, VAR_5);
  break;
 case 130:
  FUNC_3(VAR_6->cr, VAR_3);
  break;
 }
 FUNC_4(VAR_6->cr, VAR_9->Thickness);
 FUNC_1(VAR_6->cr, VAR_9->Dashes, VAR_9->NumDashes, VAR_9->DashPhase);
 FUNC_7(VAR_6->cr);
 FUNC_0(VAR_10);
}
