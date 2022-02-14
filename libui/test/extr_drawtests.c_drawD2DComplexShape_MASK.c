
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {double Thickness; int MiterLimit; int Join; int Cap; scalar_t__ DashPhase; scalar_t__ NumDashes; int * Dashes; } ;
typedef TYPE_1__ uiDrawStrokeParams ;
typedef int uiDrawPath ;
typedef int uiDrawMatrix ;
struct TYPE_11__ {double Pos; double R; double G; double B; double A; } ;
typedef TYPE_2__ uiDrawBrushGradientStop ;
struct TYPE_12__ {int X0; int X1; int Y1; int NumStops; TYPE_2__* Stops; scalar_t__ Y0; int Type; } ;
typedef TYPE_3__ uiDrawBrush ;
struct TYPE_13__ {int Context; } ;
typedef TYPE_4__ uiAreaDrawParams ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,double) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int,int,int,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int ,int *,TYPE_3__*,TYPE_1__*) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static void FUNC_13(uiAreaDrawParams *VAR_6)
{
 uiDrawPath *VAR_7;
 uiDrawBrush VAR_8;
 uiDrawBrush VAR_9;
 uiDrawBrushGradientStop VAR_10[2];
 uiDrawStrokeParams VAR_11;
 uiDrawMatrix VAR_12;

 VAR_11.Dashes = ((void*)0);
 VAR_11.NumDashes = 0;
 VAR_11.DashPhase = 0;

 VAR_7 = FUNC_5(VAR_3);
 FUNC_10(VAR_7, 0, 0);
 FUNC_9(VAR_7, 200, 0);
 FUNC_6(VAR_7,
  150, 50,
  150, 150,
  200, 200);
 FUNC_9(VAR_7, 0, 200);
 FUNC_6(VAR_7,
  50, 150,
  50, 50,
  0, 0);
 FUNC_7(VAR_7);
 FUNC_8(VAR_7);

 FUNC_0(&VAR_8, VAR_0, 1.0);

 VAR_10[0].Pos =0.0;
 VAR_10[0].R = 0.0;
 VAR_10[0].G = 1.0;
 VAR_10[0].B = 1.0;
 VAR_10[0].A = 0.25;
 VAR_10[1].Pos = 1.0;
 VAR_10[1].R = 0.0;
 VAR_10[1].G = 0.0;
 VAR_10[1].B = 1.0;
 VAR_10[1].A = 1.0;
 VAR_9.Type = VAR_1;
 VAR_9.X0 = 100;
 VAR_9.Y0 = 0;
 VAR_9.X1 = 100;
 VAR_9.Y1 = 200;
 VAR_9.Stops = VAR_10;
 VAR_9.NumStops = 2;

 FUNC_3(&VAR_12);
 FUNC_4(&VAR_12, 20, 20);
 FUNC_12(VAR_6->Context, &VAR_12);

 VAR_11.Thickness = 10.0;
 VAR_11.Cap = VAR_4;
 VAR_11.Join = VAR_5;
 VAR_11.MiterLimit = VAR_2;

 FUNC_11(VAR_6->Context, VAR_7, &VAR_8, &VAR_11);
 FUNC_1(VAR_6->Context, VAR_7, &VAR_9);

 FUNC_2(VAR_7);
}
