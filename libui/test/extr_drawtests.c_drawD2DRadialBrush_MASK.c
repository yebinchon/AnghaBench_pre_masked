
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
struct TYPE_11__ {double Pos; double A; int B; int G; int R; } ;
typedef TYPE_2__ uiDrawBrushGradientStop ;
struct TYPE_12__ {int X0; int Y0; int X1; int Y1; int OuterRadius; int NumStops; TYPE_2__* Stops; int Type; } ;
typedef TYPE_3__ uiDrawBrush ;
struct TYPE_13__ {int Context; } ;
typedef TYPE_4__ uiAreaDrawParams ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int *) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int ,double) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *,TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *,int,int,int,int ,int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (int ,int *,TYPE_3__*,TYPE_1__*) ;
 int FUNC_11 (int ,int *) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_12(uiAreaDrawParams *VAR_9)
{
 uiDrawPath *VAR_10;
 uiDrawBrush VAR_11;
 uiDrawBrush VAR_12;
 uiDrawBrushGradientStop VAR_13[2];
 uiDrawStrokeParams VAR_14;

 uiDrawMatrix VAR_15;

 VAR_14.Dashes = ((void*)0);
 VAR_14.NumDashes = 0;
 VAR_14.DashPhase = 0;


 FUNC_4(&VAR_15);
 FUNC_5(&VAR_15, 25, 25);
 FUNC_11(VAR_9->Context, &VAR_15);

 VAR_12.Type = VAR_3;
 VAR_12.X0 = 75;
 VAR_12.Y0 = 75;
 VAR_12.X1 = 75;
 VAR_12.Y1 = 75;
 VAR_12.OuterRadius = 75;
 VAR_13[0].Pos = 0.0;
 FUNC_0(VAR_2, &(VAR_13[0].R), &(VAR_13[0].G), &(VAR_13[0].B));
 VAR_13[0].A = 1.0;
 VAR_13[1].Pos = 1.0;
 FUNC_0(VAR_1, &(VAR_13[1].R), &(VAR_13[1].G), &(VAR_13[1].B));
 VAR_13[1].A = 1.0;
 VAR_12.Stops = VAR_13;
 VAR_12.NumStops = 2;

 FUNC_1(&VAR_11, VAR_0, 1.0);

 VAR_10 = FUNC_6(VAR_5);
 FUNC_9(VAR_10, 150, 75);
 FUNC_7(VAR_10,
  75, 75,
  75,
  0,
  2 * VAR_8,
  0);
 FUNC_8(VAR_10);

 FUNC_2(VAR_9->Context, VAR_10, &VAR_12);
 VAR_14.Thickness = 1.0;
 VAR_14.Cap = VAR_6;
 VAR_14.Join = VAR_7;
 VAR_14.MiterLimit = VAR_4;
 FUNC_10(VAR_9->Context, VAR_10, &VAR_11, &VAR_14);

 FUNC_3(VAR_10);
}
