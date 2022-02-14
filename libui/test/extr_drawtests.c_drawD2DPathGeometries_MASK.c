
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {double Thickness; int MiterLimit; int Join; int Cap; scalar_t__ DashPhase; scalar_t__ NumDashes; int * Dashes; } ;
typedef TYPE_1__ uiDrawStrokeParams ;
typedef int uiDrawPath ;
struct TYPE_12__ {double Pos; double A; int B; int G; int R; } ;
typedef TYPE_2__ uiDrawBrushGradientStop ;
struct TYPE_13__ {int X0; int Y0; int X1; int Y1; int OuterRadius; int NumStops; TYPE_2__* Stops; int Type; } ;
typedef TYPE_3__ uiDrawBrush ;
struct TYPE_14__ {int Context; } ;
typedef TYPE_4__ uiAreaDrawParams ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,double) ;
 int FUNC_1 (int ,int *,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*,int ,double) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int *,TYPE_3__*) ;
 int VAR_9 ;
 int FUNC_4 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int,int,int,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (int *,int,int) ;
 int FUNC_11 (int *,double,int,int,int ,int ,int ) ;
 int FUNC_12 (int ,int *,TYPE_3__*,TYPE_1__*) ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_13(uiAreaDrawParams *VAR_13)
{
 uiDrawPath *VAR_14;
 uiDrawPath *VAR_15;
 uiDrawPath *VAR_16;
 uiDrawPath *VAR_17;
 uiDrawPath *VAR_18;
 uiDrawBrush VAR_19;
 uiDrawBrush VAR_20;
 uiDrawStrokeParams VAR_21;
 uiDrawBrushGradientStop VAR_22[2];

 VAR_21.Dashes = ((void*)0);
 VAR_21.NumDashes = 0;
 VAR_21.DashPhase = 0;


 VAR_19.Type = VAR_7;
 VAR_19.X0 = 75;
 VAR_19.Y0 = 75;
 VAR_19.X1 = 75;
 VAR_19.Y1 = 75;
 VAR_19.OuterRadius = 75;
 VAR_22[0].Pos = 0.0;
 FUNC_1(VAR_5, &(VAR_22[0].R), &(VAR_22[0].G), &(VAR_22[0].B));
 VAR_22[0].A = 1.0;
 VAR_22[1].Pos = 1.0;
 FUNC_1(VAR_1, &(VAR_22[1].R), &(VAR_22[1].G), &(VAR_22[1].B));
 VAR_22[1].A = 1.0;
 VAR_19.Stops = VAR_22;
 VAR_19.NumStops = 2;

 VAR_14 = FUNC_5(VAR_9);
 FUNC_10(VAR_14, 346, 255);
 FUNC_9(VAR_14, 267, 177);
 FUNC_9(VAR_14, 236, 192);
 FUNC_9(VAR_14, 212, 160);
 FUNC_9(VAR_14, 156, 255);
 FUNC_9(VAR_14, 346, 255);
 FUNC_7(VAR_14);
 FUNC_8(VAR_14);

 VAR_15 = FUNC_5(VAR_9);
 FUNC_10(VAR_15, 575, 263);
 FUNC_9(VAR_15, 481, 146);
 FUNC_9(VAR_15, 449, 181);
 FUNC_9(VAR_15, 433, 159);
 FUNC_9(VAR_15, 401, 214);
 FUNC_9(VAR_15, 381, 199);
 FUNC_9(VAR_15, 323, 263);
 FUNC_9(VAR_15, 575, 263);
 FUNC_7(VAR_15);
 FUNC_8(VAR_15);

 VAR_16 = FUNC_5(VAR_9);
 FUNC_11(VAR_16,
  (440.0 - 270.0) / 2 + 270.0, 255,
  85,
  VAR_12, VAR_12,
  0);
 FUNC_7(VAR_16);
 FUNC_8(VAR_16);



 VAR_17 = FUNC_5(VAR_9);
 FUNC_10(VAR_17, 299, 182);
 FUNC_6(VAR_17,
  299, 182,
  294, 176,
  285, 178);
 FUNC_6(VAR_17,
  276, 179,
  272, 173,
  272, 173);
 FUNC_10(VAR_17, 354, 156);
 FUNC_6(VAR_17,
  354, 156,
  358, 149,
  354, 142);
 FUNC_6(VAR_17,
  349, 134,
  354, 127,
  354, 127);
 FUNC_10(VAR_17, 322, 164);
 FUNC_6(VAR_17,
  322, 164,
  322, 156,
  314, 152);
 FUNC_6(VAR_17,
  306, 149,
  305, 141,
  305, 141);
 FUNC_10(VAR_17, 385, 164);
 FUNC_6(VAR_17,
  385, 164,
  392, 161,
  394, 152);
 FUNC_6(VAR_17,
  395, 144,
  402, 141,
  402, 142);
 FUNC_10(VAR_17, 408, 182);
 FUNC_6(VAR_17,
  408, 182,
  416, 184,
  422, 178);
 FUNC_6(VAR_17,
  428, 171,
  435, 173,
  435, 173);
 FUNC_8(VAR_17);

 VAR_18 = FUNC_5(VAR_9);
 FUNC_10(VAR_18, 183, 392);
 FUNC_6(VAR_18,
  238, 284,
  472, 345,
  356, 303);
 FUNC_6(VAR_18,
  237, 261,
  333, 256,
  333, 256);
 FUNC_6(VAR_18,
  335, 257,
  241, 261,
  411, 306);
 FUNC_6(VAR_18,
  574, 350,
  288, 324,
  296, 392);
 FUNC_8(VAR_18);

 FUNC_0(VAR_13, VAR_4, 1.0);



 FUNC_3(VAR_13->Context, VAR_16, &VAR_19);

 FUNC_2(&VAR_20, VAR_0, 1.0);
 VAR_21.Thickness = 1.0;
 VAR_21.Cap = VAR_10;
 VAR_21.Join = VAR_11;
 VAR_21.MiterLimit = VAR_8;
 FUNC_12(VAR_13->Context, VAR_16, &VAR_20, &VAR_21);
 FUNC_12(VAR_13->Context, VAR_17, &VAR_20, &VAR_21);

 FUNC_2(&VAR_20, VAR_3, 1.0);
 FUNC_3(VAR_13->Context, VAR_14, &VAR_20);

 FUNC_2(&VAR_20, VAR_0, 1.0);
 FUNC_12(VAR_13->Context, VAR_14, &VAR_20, &VAR_21);

 FUNC_2(&VAR_20, VAR_2, 1.0);
 FUNC_3(VAR_13->Context, VAR_18, &VAR_20);

 FUNC_2(&VAR_20, VAR_0, 1.0);
 FUNC_12(VAR_13->Context, VAR_18, &VAR_20, &VAR_21);

 FUNC_2(&VAR_20, VAR_6, 1.0);
 FUNC_3(VAR_13->Context, VAR_15, &VAR_20);

 FUNC_2(&VAR_20, VAR_0, 1.0);
 FUNC_12(VAR_13->Context, VAR_15, &VAR_20, &VAR_21);

 FUNC_4(VAR_14);
 FUNC_4(VAR_15);
 FUNC_4(VAR_16);
 FUNC_4(VAR_17);
 FUNC_4(VAR_18);
}
