
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double* Dashes; int NumDashes; double DashPhase; double Thickness; int MiterLimit; int Join; int Cap; } ;
typedef TYPE_1__ uiDrawStrokeParams ;
typedef int uiDrawPath ;
typedef int uiDrawBrush ;
struct TYPE_6__ {int Context; } ;
typedef TYPE_2__ uiAreaDrawParams ;
typedef int dashes ;


 int FUNC_0 (int *,int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,double,double,double,double,double,double) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,double,double) ;
 int FUNC_6 (int *,double,double) ;
 int FUNC_7 (int ,int *,int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(uiAreaDrawParams *VAR_4)
{
 double VAR_5[] = {
  50.0,
  10.0,
  10.0,
  10.0
 };
 int VAR_6 = sizeof (VAR_5)/sizeof(VAR_5[0]);
 double VAR_7 = -50.0;

 uiDrawBrush VAR_8;
 uiDrawStrokeParams VAR_9;
 uiDrawPath *VAR_10;

 FUNC_0(&VAR_8, 0, 0, 0, 1);
 VAR_9.Cap = VAR_2;
 VAR_9.Join = VAR_3;
 VAR_9.MiterLimit = VAR_0;
 VAR_9.Dashes = VAR_5;
 VAR_9.NumDashes = VAR_6;
 VAR_9.DashPhase = VAR_7;
 VAR_9.Thickness = 10.0;

 VAR_10 = FUNC_2(VAR_1);
 FUNC_6(VAR_10, 128.0, 25.6);
 FUNC_5(VAR_10, 230.4, 230.4);
 FUNC_5(VAR_10, 230.4 -102.4, 230.4 + 0.0);
 FUNC_3(VAR_10,
  51.2, 230.4,
  51.2, 128.0,
  128.0, 128.0);
 FUNC_4(VAR_10);

 FUNC_7(VAR_4->Context, VAR_10, &VAR_8, &VAR_9);
 FUNC_1(VAR_10);
}
