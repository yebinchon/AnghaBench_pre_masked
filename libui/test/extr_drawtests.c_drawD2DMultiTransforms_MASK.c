
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
 int FUNC_3 (int *,double,double,double) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,double,double) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *,double,double,double,double) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int *,int *,TYPE_1__*) ;
 int FUNC_12 (int ,int *) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_13(uiAreaDrawParams *VAR_8)
{
 uiDrawPath *VAR_9;
 uiDrawBrush VAR_10;
 uiDrawBrush VAR_11;
 uiDrawBrush VAR_12;
 uiDrawStrokeParams VAR_13;
 uiDrawStrokeParams VAR_14;
 uiDrawMatrix VAR_15;
 uiDrawMatrix VAR_16;

 VAR_13.Dashes = ((void*)0);
 VAR_13.NumDashes = 0;
 VAR_13.DashPhase = 0;
 VAR_14.Dashes = ((void*)0);
 VAR_14.NumDashes = 0;
 VAR_14.DashPhase = 0;

 VAR_9 = FUNC_6(VAR_4);
 FUNC_7(VAR_9, 300.0, 40.0, 360.0 - 300.0, 100.0 - 40.0);
 FUNC_8(VAR_9);


 FUNC_0(&VAR_10, VAR_0, 1.0);
 FUNC_0(&VAR_11, VAR_2, 0.5);
 FUNC_0(&VAR_12, VAR_1, 1.0);

 VAR_13.Thickness = 1.0;
 VAR_13.Cap = VAR_5;
 VAR_13.Join = VAR_6;
 VAR_13.MiterLimit = VAR_3;
 VAR_14.Thickness = 1.0;
 VAR_14.Cap = VAR_5;
 VAR_14.Join = VAR_6;
 VAR_14.MiterLimit = VAR_3;

 FUNC_4(&VAR_15);
 FUNC_5(&VAR_15, 20.0, 10.0);
 FUNC_4(&VAR_16);
 FUNC_3(&VAR_16,
  330.0, 70.0,
  45.0 * (VAR_7 / 180));


 FUNC_10(VAR_8->Context);

 FUNC_11(VAR_8->Context, VAR_9, &VAR_10, &VAR_13);

 FUNC_12(VAR_8->Context, &VAR_16);
 FUNC_12(VAR_8->Context, &VAR_15);

 FUNC_1(VAR_8->Context, VAR_9, &VAR_11);
 FUNC_11(VAR_8->Context, VAR_9, &VAR_12, &VAR_14);

 FUNC_9(VAR_8->Context);
 FUNC_2(VAR_9);

 VAR_9 = FUNC_6(VAR_4);
 FUNC_7(VAR_9, 40.0, 40.0, 100.0 - 40.0, 100.0 - 40.0);
 FUNC_8(VAR_9);

 FUNC_4(&VAR_15);
 FUNC_5(&VAR_15, 20.0, 10.0);
 FUNC_4(&VAR_16);
 FUNC_3(&VAR_16,
  70.0, 70.0,
  45.0 * (VAR_7 / 180));

 FUNC_11(VAR_8->Context, VAR_9, &VAR_10, &VAR_13);

 FUNC_12(VAR_8->Context, &VAR_15);
 FUNC_12(VAR_8->Context, &VAR_16);

 FUNC_1(VAR_8->Context, VAR_9, &VAR_11);
 FUNC_11(VAR_8->Context, VAR_9, &VAR_12, &VAR_14);

 FUNC_2(VAR_9);
}
