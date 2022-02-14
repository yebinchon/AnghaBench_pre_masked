
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {double Thickness; int MiterLimit; int Join; int Cap; scalar_t__ DashPhase; scalar_t__ NumDashes; int * Dashes; } ;
typedef TYPE_1__ uiDrawStrokeParams ;
typedef int uiDrawPath ;
typedef int uiDrawBrush ;
struct TYPE_7__ {int AreaWidth; int AreaHeight; int Context; } ;
typedef TYPE_2__ uiAreaDrawParams ;


 int FUNC_0 (TYPE_2__*,int ,double) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,double) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int *,int *) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,double,double,double,double) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int ,int *,int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_10(uiAreaDrawParams *VAR_7)
{
 uiDrawPath *VAR_8;
 uiDrawBrush VAR_9;
 uiDrawBrush VAR_10;
 uiDrawStrokeParams VAR_11;
 int VAR_12, VAR_13;

 VAR_11.Dashes = ((void*)0);
 VAR_11.NumDashes = 0;
 VAR_11.DashPhase = 0;

 FUNC_1(&VAR_9, VAR_1, 1.0);
 FUNC_1(&VAR_10, VAR_0, 1.0);

 FUNC_0(VAR_7, VAR_2, 1.0);

 VAR_11.Thickness = 0.5;
 VAR_11.Cap = VAR_5;
 VAR_11.Join = VAR_6;
 VAR_11.MiterLimit = VAR_3;

 for (VAR_12 = 0; VAR_12 < VAR_7->AreaWidth; VAR_12 += 10) {
  VAR_8 = FUNC_4(VAR_4);
  FUNC_8(VAR_8, VAR_12, 0);
  FUNC_7(VAR_8, VAR_12, VAR_7->AreaHeight);
  FUNC_6(VAR_8);
  FUNC_9(VAR_7->Context, VAR_8, &VAR_9, &VAR_11);
  FUNC_3(VAR_8);
 }

 for (VAR_13 = 0; VAR_13 < VAR_7->AreaHeight; VAR_13 += 10) {
  VAR_8 = FUNC_4(VAR_4);
  FUNC_8(VAR_8, 0, VAR_13);
  FUNC_7(VAR_8, VAR_7->AreaWidth, VAR_13);
  FUNC_6(VAR_8);
  FUNC_9(VAR_7->Context, VAR_8, &VAR_9, &VAR_11);
  FUNC_3(VAR_8);
 }

 double VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_14 = VAR_7->AreaWidth / 2.0 - 50.0;
 VAR_16 = VAR_7->AreaWidth / 2.0 + 50.0;
 VAR_15 = VAR_7->AreaHeight / 2.0 - 50.0;
 VAR_17 = VAR_7->AreaHeight / 2.0 + 50.0;
 VAR_8 = FUNC_4(VAR_4);
 FUNC_5(VAR_8, VAR_14, VAR_15, VAR_16 - VAR_14, VAR_17 - VAR_15);
 FUNC_6(VAR_8);
 FUNC_2(VAR_7->Context, VAR_8, &VAR_9);
 FUNC_3(VAR_8);

 VAR_14 = VAR_7->AreaWidth / 2.0 - 100.0;
 VAR_16 = VAR_7->AreaWidth / 2.0 + 100.0;
 VAR_15 = VAR_7->AreaHeight / 2.0 - 100.0;
 VAR_17 = VAR_7->AreaHeight / 2.0 + 100.0;
 VAR_8 = FUNC_4(VAR_4);
 FUNC_5(VAR_8, VAR_14, VAR_15, VAR_16 - VAR_14, VAR_17 - VAR_15);
 FUNC_6(VAR_8);
 VAR_11.Thickness = 1.0;
 FUNC_9(VAR_7->Context, VAR_8, &VAR_10, &VAR_11);
 FUNC_3(VAR_8);
}
