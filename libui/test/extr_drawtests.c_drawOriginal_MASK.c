
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int Thickness; void* MiterLimit; void* Join; void* Cap; scalar_t__ DashPhase; scalar_t__ NumDashes; int * Dashes; } ;
typedef TYPE_1__ uiDrawStrokeParams ;
typedef int uiDrawPath ;
struct TYPE_9__ {int A; int R; double G; double B; int Type; } ;
typedef TYPE_2__ uiDrawBrush ;
struct TYPE_10__ {int ClipX; int ClipY; int ClipWidth; int ClipHeight; int Context; } ;
typedef TYPE_3__ uiAreaDrawParams ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,int *,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int,int,int) ;
 int FUNC_4 (int *,int,int,int,int,int,int ) ;
 int FUNC_5 (int *,int,int,int,int,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (int *,int,int,int,int,int,int ) ;
 int FUNC_11 (int ,int *,TYPE_2__*,TYPE_1__*) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_12(uiAreaDrawParams *VAR_7)
{
 uiDrawPath *VAR_8;
 uiDrawBrush VAR_9;
 uiDrawStrokeParams VAR_10;

 VAR_10.Dashes = ((void*)0);
 VAR_10.NumDashes = 0;
 VAR_10.DashPhase = 0;

 VAR_9.Type = VAR_0;
 VAR_9.A = 1;

 VAR_9.R = 1;
 VAR_9.G = 0;
 VAR_9.B = 0;
 VAR_8 = FUNC_2(VAR_2);
 FUNC_9(VAR_8, VAR_7->ClipX + 5, VAR_7->ClipY + 5);
 FUNC_8(VAR_8, (VAR_7->ClipX + VAR_7->ClipWidth) - 5, (VAR_7->ClipY + VAR_7->ClipHeight) - 5);
 FUNC_7(VAR_8);
 VAR_10.Cap = VAR_3;
 VAR_10.Join = VAR_4;
 VAR_10.Thickness = 1;
 VAR_10.MiterLimit = VAR_1;
 FUNC_11(VAR_7->Context, VAR_8, &VAR_9, &VAR_10);
 FUNC_1(VAR_8);

 VAR_9.R = 0;
 VAR_9.G = 0;
 VAR_9.B = 0.75;
 VAR_8 = FUNC_2(VAR_2);
 FUNC_9(VAR_8, VAR_7->ClipX, VAR_7->ClipY);
 FUNC_8(VAR_8, VAR_7->ClipX + VAR_7->ClipWidth, VAR_7->ClipY);
 FUNC_8(VAR_8, 50, 150);
 FUNC_8(VAR_8, 50, 50);
 FUNC_6(VAR_8);
 FUNC_7(VAR_8);
 VAR_10.Cap = VAR_3;
 VAR_10.Join = VAR_5;
 VAR_10.Thickness = 5;
 FUNC_11(VAR_7->Context, VAR_8, &VAR_9, &VAR_10);
 FUNC_1(VAR_8);

 VAR_9.R = 0;
 VAR_9.G = 0.75;
 VAR_9.B = 0;
 VAR_9.A = 0.5;
 VAR_8 = FUNC_2(VAR_2);
 FUNC_3(VAR_8, 120, 80, 50, 50);
 FUNC_7(VAR_8);
 FUNC_0(VAR_7->Context, VAR_8, &VAR_9);
 FUNC_1(VAR_8);
 VAR_9.A = 1;

 VAR_9.R = 0;
 VAR_9.G = 0.5;
 VAR_9.B = 0;
 VAR_8 = FUNC_2(VAR_2);
 FUNC_9(VAR_8, 5.5, 10.5);
 FUNC_8(VAR_8, 5.5, 50.5);
 FUNC_7(VAR_8);
 VAR_10.Cap = VAR_3;
 VAR_10.Join = VAR_4;
 VAR_10.Thickness = 1;
 VAR_10.MiterLimit = VAR_1;
 FUNC_11(VAR_7->Context, VAR_8, &VAR_9, &VAR_10);
 FUNC_1(VAR_8);

 VAR_9.R = 0.5;
 VAR_9.G = 0.75;
 VAR_9.B = 0;
 VAR_8 = FUNC_2(VAR_2);
 FUNC_9(VAR_8, 400, 100);
 FUNC_4(VAR_8,
  400, 100,
  50,
  30. * (VAR_6 / 180.),
  300. * (VAR_6 / 180.),
  0);

 FUNC_8(VAR_8, 400, 100);
 FUNC_10(VAR_8,
  510, 100,
  50,
  30. * (VAR_6 / 180.),
  300. * (VAR_6 / 180.),
  0);
 FUNC_6(VAR_8);

 FUNC_9(VAR_8, 400, 210);
 FUNC_4(VAR_8,
  400, 210,
  50,
  30. * (VAR_6 / 180.),
  330. * (VAR_6 / 180.),
  0);
 FUNC_8(VAR_8, 400, 210);
 FUNC_10(VAR_8,
  510, 210,
  50,
  30. * (VAR_6 / 180.),
  330. * (VAR_6 / 180.),
  0);
 FUNC_6(VAR_8);
 FUNC_7(VAR_8);
 VAR_10.Cap = VAR_3;
 VAR_10.Join = VAR_4;
 VAR_10.Thickness = 1;
 VAR_10.MiterLimit = VAR_1;
 FUNC_11(VAR_7->Context, VAR_8, &VAR_9, &VAR_10);
 FUNC_1(VAR_8);

 VAR_9.R = 0;
 VAR_9.G = 0.5;
 VAR_9.B = 0.75;
 VAR_8 = FUNC_2(VAR_2);
 FUNC_9(VAR_8, 300, 300);
 FUNC_5(VAR_8,
  350, 320,
  310, 390,
  435, 372);
 FUNC_7(VAR_8);
 VAR_10.Cap = VAR_3;
 VAR_10.Join = VAR_4;
 VAR_10.Thickness = 1;
 VAR_10.MiterLimit = VAR_1;
 FUNC_11(VAR_7->Context, VAR_8, &VAR_9, &VAR_10);
 FUNC_1(VAR_8);
}
