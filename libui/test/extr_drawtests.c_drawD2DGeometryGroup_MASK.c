
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {double Thickness; int MiterLimit; int Join; int Cap; scalar_t__ DashPhase; scalar_t__ NumDashes; int * Dashes; } ;
typedef TYPE_1__ uiDrawStrokeParams ;
typedef int uiDrawPath ;
typedef int uiDrawMatrix ;
typedef int uiDrawBrush ;
struct TYPE_7__ {int Context; } ;
typedef TYPE_2__ uiAreaDrawParams ;


 int FUNC_0 (TYPE_2__*,int ,double) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,double) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int ) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int,int,int,int ,int,int ) ;
 int FUNC_9 (int ,int *,int *,TYPE_1__*) ;
 int FUNC_10 (int ,int *) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_11(uiAreaDrawParams *VAR_9)
{
 uiDrawPath *VAR_10;
 uiDrawPath *VAR_11;
 uiDrawBrush VAR_12;
 uiDrawBrush VAR_13;
 uiDrawStrokeParams VAR_14;
 uiDrawMatrix VAR_15;

 VAR_14.Dashes = ((void*)0);
 VAR_14.NumDashes = 0;
 VAR_14.DashPhase = 0;

 VAR_10 = FUNC_6(VAR_4);
 FUNC_8(VAR_10,
  105, 105,
  25,
  0, 2 * VAR_8,
  0);
 FUNC_8(VAR_10,
  105, 105,
  50,
  0, 2 * VAR_8,
  0);
 FUNC_8(VAR_10,
  105, 105,
  75,
  0, 2 * VAR_8,
  0);
 FUNC_8(VAR_10,
  105, 105,
  100,
  0, 2 * VAR_8,
  0);
 FUNC_7(VAR_10);

 VAR_11 = FUNC_6(VAR_5);
 FUNC_8(VAR_11,
  105, 105,
  25,
  0, 2 * VAR_8,
  0);
 FUNC_8(VAR_11,
  105, 105,
  50,
  0, 2 * VAR_8,
  0);
 FUNC_8(VAR_11,
  105, 105,
  75,
  0, 2 * VAR_8,
  0);
 FUNC_8(VAR_11,
  105, 105,
  100,
  0, 2 * VAR_8,
  0);
 FUNC_7(VAR_11);

 FUNC_0(VAR_9, VAR_2, 1.0);




 FUNC_1(&VAR_12, VAR_1, 1.0);
 FUNC_1(&VAR_13, VAR_0, 1.0);

 VAR_14.Thickness = 1.0;
 VAR_14.Cap = VAR_6;
 VAR_14.Join = VAR_7;
 VAR_14.MiterLimit = VAR_3;

 FUNC_2(VAR_9->Context, VAR_10, &VAR_12);
 FUNC_9(VAR_9->Context, VAR_10, &VAR_13, &VAR_14);


 FUNC_4(&VAR_15);
 FUNC_5(&VAR_15, 300, 0);
 FUNC_10(VAR_9->Context, &VAR_15);
 FUNC_2(VAR_9->Context, VAR_11, &VAR_12);
 FUNC_9(VAR_9->Context, VAR_11, &VAR_13, &VAR_14);


 FUNC_3(VAR_11);
 FUNC_3(VAR_10);
}
