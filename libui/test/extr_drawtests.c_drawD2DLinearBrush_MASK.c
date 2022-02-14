
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
struct TYPE_12__ {int X1; int Y1; int NumStops; TYPE_2__* Stops; scalar_t__ Y0; scalar_t__ X0; int Type; } ;
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
 int FUNC_7 (int *,int ,int ,int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *,TYPE_3__*,TYPE_1__*) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(uiAreaDrawParams *VAR_8)
{
 uiDrawPath *VAR_9;
 uiDrawBrush VAR_10;
 uiDrawBrush VAR_11;
 uiDrawBrushGradientStop VAR_12[2];
 uiDrawStrokeParams VAR_13;

 uiDrawMatrix VAR_14;

 VAR_13.Dashes = ((void*)0);
 VAR_13.NumDashes = 0;
 VAR_13.DashPhase = 0;


 FUNC_4(&VAR_14);
 FUNC_5(&VAR_14, 25, 25);
 FUNC_10(VAR_8->Context, &VAR_14);

 VAR_11.Type = VAR_3;
 VAR_11.X0 = 0;
 VAR_11.Y0 = 0;
 VAR_11.X1 = 150;
 VAR_11.Y1 = 150;
 VAR_12[0].Pos = 0.0;
 FUNC_0(VAR_2, &(VAR_12[0].R), &(VAR_12[0].G), &(VAR_12[0].B));
 VAR_12[0].A = 1.0;
 VAR_12[1].Pos = 1.0;
 FUNC_0(VAR_1, &(VAR_12[1].R), &(VAR_12[1].G), &(VAR_12[1].B));
 VAR_12[1].A = 1.0;
 VAR_11.Stops = VAR_12;
 VAR_11.NumStops = 2;

 FUNC_1(&VAR_10, VAR_0, 1.0);

 VAR_9 = FUNC_6(VAR_5);
 FUNC_7(VAR_9, 0, 0, 150, 150);
 FUNC_8(VAR_9);

 FUNC_2(VAR_8->Context, VAR_9, &VAR_11);
 VAR_13.Thickness = 1.0;
 VAR_13.Cap = VAR_6;
 VAR_13.Join = VAR_7;
 VAR_13.MiterLimit = VAR_4;
 FUNC_9(VAR_8->Context, VAR_9, &VAR_10, &VAR_13);

 FUNC_3(VAR_9);
}
