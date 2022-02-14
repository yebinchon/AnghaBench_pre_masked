
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int Thickness; int MiterLimit; int Join; int Cap; } ;
typedef TYPE_1__ uiDrawStrokeParams ;
typedef int uiDrawPath ;
typedef int uiDrawMatrix ;
struct TYPE_11__ {double R; double G; double B; double A; int Type; } ;
typedef TYPE_2__ uiDrawBrush ;
typedef int uiAreaHandler ;
struct TYPE_12__ {int Context; int AreaHeight; int AreaWidth; } ;
typedef TYPE_3__ uiAreaDrawParams ;
typedef int uiArea ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (double,double,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,double*,double*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (double,double,double*,double*) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__*,int ,double) ;
 int FUNC_5 (int ,double*,double*,double*,double*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,int *,TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__,scalar_t__) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int ,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,scalar_t__,scalar_t__) ;
 int FUNC_14 (int *,scalar_t__,scalar_t__) ;
 int FUNC_15 (int *,double,double,int ,int ,double,int ) ;
 int FUNC_16 (int ,int *,TYPE_2__*,TYPE_1__*) ;
 int FUNC_17 (int ,int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void FUNC_18(uiAreaHandler *VAR_12, uiArea *VAR_13, uiAreaDrawParams *VAR_14)
{
 uiDrawPath *VAR_15;
 uiDrawBrush VAR_16;
 uiDrawStrokeParams VAR_17;
 uiDrawMatrix VAR_18;
 double VAR_19, VAR_20;
 double VAR_21, VAR_22, VAR_23, VAR_24;


 FUNC_4(&VAR_16, VAR_2, 1.0);
 VAR_15 = FUNC_10(VAR_7);
 FUNC_11(VAR_15, 0, 0, VAR_14->AreaWidth, VAR_14->AreaHeight);
 FUNC_12(VAR_15);
 FUNC_6(VAR_14->Context, VAR_15, &VAR_16);
 FUNC_7(VAR_15);


 FUNC_1(VAR_14->AreaWidth, VAR_14->AreaHeight, &VAR_19, &VAR_20);



 FUNC_2(&VAR_17, 0, sizeof (uiDrawStrokeParams));


 VAR_17.Cap = VAR_8;
 VAR_17.Join = VAR_9;
 VAR_17.Thickness = 2;
 VAR_17.MiterLimit = VAR_6;


 FUNC_4(&VAR_16, VAR_0, 1.0);
 VAR_15 = FUNC_10(VAR_7);
 FUNC_14(VAR_15,
  VAR_10, VAR_11);
 FUNC_13(VAR_15,
  VAR_10, VAR_11 + VAR_20);
 FUNC_13(VAR_15,
  VAR_10 + VAR_19, VAR_11 + VAR_20);
 FUNC_12(VAR_15);
 FUNC_16(VAR_14->Context, VAR_15, &VAR_16, &VAR_17);
 FUNC_7(VAR_15);


 FUNC_8(&VAR_18);
 FUNC_9(&VAR_18, VAR_10, VAR_11);
 FUNC_17(VAR_14->Context, &VAR_18);


 FUNC_5(VAR_1, &VAR_21, &VAR_22, &VAR_23, &VAR_24);
 VAR_16.Type = VAR_5;
 VAR_16.R = VAR_21;
 VAR_16.G = VAR_22;
 VAR_16.B = VAR_23;



 VAR_15 = FUNC_0(VAR_19, VAR_20, 1);
 VAR_16.A = VAR_24 / 2;
 FUNC_6(VAR_14->Context, VAR_15, &VAR_16);
 FUNC_7(VAR_15);


 VAR_15 = FUNC_0(VAR_19, VAR_20, 0);
 VAR_16.A = VAR_24;
 FUNC_16(VAR_14->Context, VAR_15, &VAR_16, &VAR_17);
 FUNC_7(VAR_15);


 if (VAR_3 != -1) {
  double VAR_25[10], VAR_26[10];

  FUNC_3(VAR_19, VAR_20, VAR_25, VAR_26);
  VAR_15 = FUNC_10(VAR_7);
  FUNC_15(VAR_15,
   VAR_25[VAR_3], VAR_26[VAR_3],
   VAR_4,
   0, 6.23,
   0);
  FUNC_12(VAR_15);

  FUNC_6(VAR_14->Context, VAR_15, &VAR_16);
  FUNC_7(VAR_15);
 }
}
