
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double Thickness; scalar_t__ DashPhase; scalar_t__ NumDashes; int * Dashes; int MiterLimit; int Join; int Cap; } ;
typedef TYPE_1__ uiDrawStrokeParams ;
typedef int uiDrawPath ;
typedef int uiDrawBrush ;
struct TYPE_6__ {int Context; } ;
typedef TYPE_2__ uiAreaDrawParams ;


 int FUNC_0 (int *,int ,int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,double,double,double,double,double,double) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,double,double) ;
 int FUNC_8 (int *,double,double) ;
 int FUNC_9 (int ,int *,int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_10(uiAreaDrawParams *VAR_4)
{
 uiDrawBrush VAR_5;
 uiDrawStrokeParams VAR_6;
 uiDrawPath *VAR_7;

 FUNC_0(&VAR_5, 0, 0, 0, 1);
 VAR_6.Cap = VAR_2;
 VAR_6.Join = VAR_3;
 VAR_6.MiterLimit = VAR_0;
 VAR_6.Dashes = ((void*)0);
 VAR_6.NumDashes = 0;
 VAR_6.DashPhase = 0;

 VAR_7 = FUNC_3(VAR_1);

 FUNC_8(VAR_7, 128.0, 25.6);
 FUNC_7(VAR_7, 230.4, 230.4);
 FUNC_7(VAR_7, 230.4 - 102.4, 230.4 + 0.0);
 FUNC_4(VAR_7, 51.2, 230.4, 51.2, 128.0, 128.0, 128.0);
 FUNC_5(VAR_7);

 FUNC_8(VAR_7, 64.0, 25.6);
 FUNC_7(VAR_7, 64.0 + 51.2, 25.6 + 51.2);
 FUNC_7(VAR_7, 64.0 + 51.2 -51.2, 25.6 + 51.2 + 51.2);
 FUNC_7(VAR_7, 64.0 + 51.2 -51.2 -51.2, 25.6 + 51.2 + 51.2 -51.2);
 FUNC_5(VAR_7);

 FUNC_6(VAR_7);

 VAR_6.Thickness = 10.0;
 FUNC_0(&VAR_5, 0, 0, 1, 1);
 FUNC_1(VAR_4->Context, VAR_7, &VAR_5);
 FUNC_0(&VAR_5, 0, 0, 0, 1);
 FUNC_9(VAR_4->Context, VAR_7, &VAR_5, &VAR_6);
 FUNC_2(VAR_7);
}
