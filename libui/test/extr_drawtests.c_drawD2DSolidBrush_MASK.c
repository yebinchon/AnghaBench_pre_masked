
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double Thickness; int MiterLimit; int Join; int Cap; scalar_t__ DashPhase; scalar_t__ NumDashes; int * Dashes; } ;
typedef TYPE_1__ uiDrawStrokeParams ;
typedef int uiDrawPath ;
typedef int uiDrawBrush ;
struct TYPE_6__ {int Context; } ;
typedef TYPE_2__ uiAreaDrawParams ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,double) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int *) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,int,int,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(uiAreaDrawParams *VAR_6)
{
 uiDrawPath *VAR_7;
 uiDrawBrush VAR_8;
 uiDrawBrush VAR_9;
 uiDrawStrokeParams VAR_10;

 VAR_10.Dashes = ((void*)0);
 VAR_10.NumDashes = 0;
 VAR_10.DashPhase = 0;

 FUNC_0(&VAR_8, VAR_0, 1.0);
 FUNC_0(&VAR_9, VAR_1, 1.0);

 VAR_7 = FUNC_3(VAR_3);


 FUNC_4(VAR_7, 25, 25, 150, 150);
 FUNC_5(VAR_7);

 FUNC_1(VAR_6->Context, VAR_7, &VAR_9);
 VAR_10.Thickness = 1.0;
 VAR_10.Cap = VAR_4;
 VAR_10.Join = VAR_5;
 VAR_10.MiterLimit = VAR_2;
 FUNC_6(VAR_6->Context, VAR_7, &VAR_8, &VAR_10);

 FUNC_2(VAR_7);
}
