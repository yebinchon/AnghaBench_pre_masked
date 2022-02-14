
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {double Leading; scalar_t__ Descent; scalar_t__ Ascent; } ;
typedef TYPE_1__ uiDrawTextFontMetrics ;
struct TYPE_9__ {int Thickness; double R; double G; double B; double A; int MiterLimit; int Join; int Cap; int Type; } ;
typedef TYPE_2__ uiDrawStrokeParams ;
typedef int uiDrawPath ;
typedef int uiDrawContext ;
typedef TYPE_2__ uiDrawBrush ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,double) ;
 int FUNC_8 (int *,int,double) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_12(uiDrawContext *VAR_6, uiDrawTextFontMetrics *VAR_7)
{
 uiDrawPath *VAR_8;
 uiDrawBrush VAR_9;
 uiDrawStrokeParams VAR_10;
 double VAR_11;
 double VAR_12;

 VAR_11 = 0;
 if (FUNC_1(VAR_0))
  VAR_11 = VAR_7->Leading;

 FUNC_0(&VAR_9, 0, sizeof (uiDrawBrush));
 VAR_9.Type = VAR_1;
 FUNC_0(&VAR_10, 0, sizeof (uiDrawStrokeParams));
 VAR_10.Cap = VAR_4;
 VAR_10.Join = VAR_5;
 VAR_10.MiterLimit = VAR_2;
 VAR_10.Thickness = 2;

 FUNC_10(VAR_6);

 VAR_8 = FUNC_4(VAR_3);
 VAR_12 = 10;
 FUNC_8(VAR_8, 8, VAR_12);
 VAR_12 += VAR_7->Ascent;
 FUNC_7(VAR_8, 8, VAR_12);
 FUNC_6(VAR_8);
 VAR_9.R = 0.94;
 VAR_9.G = 0.5;
 VAR_9.B = 0.5;
 VAR_9.A = 1.0;
 FUNC_11(VAR_6, VAR_8, &VAR_9, &VAR_10);
 FUNC_3(VAR_8);

 VAR_8 = FUNC_4(VAR_3);
 FUNC_8(VAR_8, 8, VAR_12);
 VAR_12 += VAR_7->Descent;
 FUNC_7(VAR_8, 8, VAR_12);
 FUNC_6(VAR_8);
 VAR_9.R = 0.12;
 VAR_9.G = 0.56;
 VAR_9.B = 1.0;
 VAR_9.A = 1.0;
 FUNC_11(VAR_6, VAR_8, &VAR_9, &VAR_10);
 FUNC_3(VAR_8);


 VAR_8 = FUNC_4(VAR_3);
 VAR_12 += VAR_11;
 FUNC_8(VAR_8, 8, VAR_12);
 VAR_12 += VAR_7->Ascent;
 FUNC_7(VAR_8, 8, VAR_12);
 FUNC_6(VAR_8);
 VAR_9.R = 0.94;
 VAR_9.G = 0.5;
 VAR_9.B = 0.5;
 VAR_9.A = 0.75;
 FUNC_11(VAR_6, VAR_8, &VAR_9, &VAR_10);
 FUNC_3(VAR_8);

 VAR_8 = FUNC_4(VAR_3);
 FUNC_8(VAR_8, 8, VAR_12);
 VAR_12 += VAR_7->Descent;
 FUNC_7(VAR_8, 8, VAR_12);
 FUNC_6(VAR_8);
 VAR_9.R = 0.12;
 VAR_9.G = 0.56;
 VAR_9.B = 1.0;
 VAR_9.A = 0.75;
 FUNC_11(VAR_6, VAR_8, &VAR_9, &VAR_10);
 FUNC_3(VAR_8);


 VAR_8 = FUNC_4(VAR_3);
 FUNC_5(VAR_8, 0, 0, 10, 10);
 FUNC_6(VAR_8);
 FUNC_2(VAR_6, VAR_8);
 VAR_9.R = 0.85;
 VAR_9.G = 0.65;
 VAR_9.B = 0.13;
 VAR_9.A = 1.0;
 FUNC_11(VAR_6, VAR_8, &VAR_9, &VAR_10);
 FUNC_3(VAR_8);

 FUNC_9(VAR_6);
}
