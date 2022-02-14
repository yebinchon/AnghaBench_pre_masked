
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double Thickness; void* MiterLimit; void* Join; void* Cap; scalar_t__ DashPhase; scalar_t__ NumDashes; int * Dashes; } ;
typedef TYPE_1__ uiDrawStrokeParams ;
typedef int uiDrawPath ;
typedef int uiDrawMatrix ;
typedef int uiDrawBrush ;
struct TYPE_6__ {int Context; } ;
typedef TYPE_2__ uiAreaDrawParams ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,double) ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int ,int *,int *) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,double,double,double,double) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,int *,TYPE_1__*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(uiAreaDrawParams *VAR_7)
{
 uiDrawPath *VAR_8;
 uiDrawBrush VAR_9;
 uiDrawBrush VAR_10;
 uiDrawBrush VAR_11;
 uiDrawStrokeParams VAR_12;
 uiDrawStrokeParams VAR_13;
 uiDrawMatrix VAR_14;

 VAR_12.Dashes = ((void*)0);
 VAR_12.NumDashes = 0;
 VAR_12.DashPhase = 0;
 VAR_13.Dashes = ((void*)0);
 VAR_13.NumDashes = 0;
 VAR_13.DashPhase = 0;

 VAR_8 = FUNC_5(VAR_4);
 FUNC_6(VAR_8, 126.0, 80.5, 186.0 - 126.0, 140.5 - 80.5);
 FUNC_7(VAR_8);


 FUNC_0(&VAR_9, VAR_0, 1.0);
 FUNC_0(&VAR_10, VAR_2, 0.5);
 FUNC_0(&VAR_11, VAR_1, 1.0);

 VAR_12.Thickness = 1.0;
 VAR_12.Cap = VAR_5;
 VAR_12.Join = VAR_6;
 VAR_12.MiterLimit = VAR_3;
 VAR_13.Thickness = 1.0;
 VAR_13.Cap = VAR_5;
 VAR_13.Join = VAR_6;
 VAR_13.MiterLimit = VAR_3;

 FUNC_8(VAR_7->Context, VAR_8, &VAR_9, &VAR_12);

 FUNC_3(&VAR_14);
 FUNC_4(&VAR_14, 20, 10);
 FUNC_9(VAR_7->Context, &VAR_14);

 FUNC_1(VAR_7->Context, VAR_8, &VAR_10);
 FUNC_8(VAR_7->Context, VAR_8, &VAR_11, &VAR_13);

 FUNC_2(VAR_8);
}
