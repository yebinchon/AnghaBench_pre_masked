
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int X; int Y; double Width; double Height; scalar_t__ Descent; scalar_t__ BaselineY; scalar_t__ Ascent; } ;
typedef TYPE_1__ uiDrawTextLayoutLineMetrics ;
typedef int uiDrawTextLayout ;
typedef int uiDrawPath ;
struct TYPE_13__ {double R; double G; double B; double A; int Type; } ;
typedef TYPE_2__ uiDrawBrush ;
struct TYPE_14__ {int AreaWidth; int AreaHeight; int Context; } ;
typedef TYPE_3__ uiAreaDrawParams ;
struct TYPE_15__ {int Width; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 TYPE_6__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,TYPE_2__*) ;
 int VAR_9 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int * FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (int *,int,int,double,double) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int,scalar_t__) ;
 int FUNC_10 (int *,int,scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int *,TYPE_2__*,int *) ;
 int FUNC_14 (int ,int *,int,int) ;
 int FUNC_15 (int *,double*,double*) ;
 int FUNC_16 (int *,int,TYPE_1__*) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static void FUNC_18(uiAreaDrawParams *VAR_10)
{
 uiDrawPath *VAR_11;
 uiDrawTextLayout *VAR_12;
 uiDrawBrush VAR_13;

 VAR_13.Type = VAR_8;


 FUNC_12(VAR_10->Context);

 VAR_11 = FUNC_5(VAR_9);
 FUNC_7(VAR_11, VAR_1, VAR_1,
  VAR_10->AreaWidth - 2 * VAR_1,
  VAR_10->AreaHeight - 2 * VAR_1);
 FUNC_8(VAR_11);
 FUNC_1(VAR_10->Context, VAR_11);
 FUNC_3(VAR_11);
 VAR_2.Width = VAR_10->AreaWidth - 2 * VAR_1;
 VAR_12 = FUNC_6(&VAR_2);
 FUNC_14(VAR_10->Context, VAR_12, VAR_1, VAR_1);

 FUNC_11(VAR_10->Context);

 if (FUNC_0(VAR_3)) {
  double VAR_14, VAR_15;

  FUNC_15(VAR_12, &VAR_14, &VAR_15);
  VAR_11 = FUNC_5(VAR_9);
  FUNC_7(VAR_11, VAR_1, VAR_1,
   VAR_14, VAR_15);
  FUNC_8(VAR_11);
  VAR_13.R = 1.0;
  VAR_13.G = 0.0;
  VAR_13.B = 1.0;
  VAR_13.A = 0.5;
  FUNC_13(VAR_10->Context, VAR_11, &VAR_13, &VAR_7);
  FUNC_3(VAR_11);
 }

 if (FUNC_0(VAR_4) || FUNC_0(VAR_5)) {
  uiDrawTextLayoutLineMetrics VAR_16;
  int VAR_17, VAR_18;
  int VAR_19 = 0;

  VAR_18 = FUNC_17(VAR_12);
  for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++) {
   FUNC_16(VAR_12, VAR_17, &VAR_16);

   if (FUNC_0(VAR_4)) {
    VAR_11 = FUNC_5(VAR_9);
    FUNC_7(VAR_11, VAR_1 + VAR_16.X, VAR_1 + VAR_16.Y,
     VAR_16.Width, VAR_16.Height);
    FUNC_8(VAR_11);
    FUNC_2(VAR_10->Context, VAR_11, VAR_0 + VAR_19);
    FUNC_3(VAR_11);
    VAR_19 = (VAR_19 + 1) % 4;
   }
   if (FUNC_0(VAR_5)) {

    VAR_11 = FUNC_5(VAR_9);
    FUNC_10(VAR_11,
     VAR_1 + VAR_16.X,
     VAR_1 + VAR_16.BaselineY);
    FUNC_9(VAR_11,
     VAR_1 + VAR_16.X + VAR_16.Width,
     VAR_1 + VAR_16.BaselineY);
    FUNC_8(VAR_11);
    FUNC_13(VAR_10->Context, VAR_11, &(VAR_6[0]), &VAR_7);
    FUNC_3(VAR_11);


    VAR_11 = FUNC_5(VAR_9);
    FUNC_10(VAR_11,
     VAR_1 + VAR_16.X,
     VAR_1 + VAR_16.BaselineY - VAR_16.Ascent);
    FUNC_9(VAR_11,
     VAR_1 + VAR_16.X + VAR_16.Width,
     VAR_1 + VAR_16.BaselineY - VAR_16.Ascent);
    FUNC_8(VAR_11);
    FUNC_13(VAR_10->Context, VAR_11, &(VAR_6[1]), &VAR_7);
    FUNC_3(VAR_11);


    VAR_11 = FUNC_5(VAR_9);
    FUNC_10(VAR_11,
     VAR_1 + VAR_16.X,
     VAR_1 + VAR_16.BaselineY + VAR_16.Descent);
    FUNC_9(VAR_11,
     VAR_1 + VAR_16.X + VAR_16.Width,
     VAR_1 + VAR_16.BaselineY + VAR_16.Descent);
    FUNC_8(VAR_11);
    FUNC_13(VAR_10->Context, VAR_11, &(VAR_6[2]), &VAR_7);
    FUNC_3(VAR_11);
   }
  }
 }

 FUNC_4(VAR_12);
}
