
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


 int FUNC_0 (int *,int,double,double,double) ;
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
 double VAR_5=25.6, VAR_6=128.0;
 double VAR_7=102.4, VAR_8=230.4,
  VAR_9=153.6, VAR_10=25.6,
  VAR_11=230.4, VAR_12=128.0;
 uiDrawBrush VAR_13;
 uiDrawStrokeParams VAR_14;
 uiDrawPath *VAR_15;

 FUNC_0(&VAR_13, 0, 0, 0, 1);
 VAR_14.Cap = VAR_2;
 VAR_14.Join = VAR_3;
 VAR_14.MiterLimit = VAR_0;
 VAR_14.Dashes = ((void*)0);
 VAR_14.NumDashes = 0;
 VAR_14.DashPhase = 0;

 VAR_15 = FUNC_2(VAR_1);

 FUNC_6(VAR_15, VAR_5, VAR_6);
 FUNC_3(VAR_15, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
 FUNC_4(VAR_15);
 VAR_14.Thickness = 10.0;
 FUNC_7(VAR_4->Context, VAR_15, &VAR_13, &VAR_14);
 FUNC_1(VAR_15);

 FUNC_0(&VAR_13, 1, 0.2, 0.2, 0.6);
 VAR_14.Thickness = 6.0;
 VAR_15 = FUNC_2(VAR_1);
 FUNC_6(VAR_15, VAR_5, VAR_6);
 FUNC_5(VAR_15, VAR_7, VAR_8);
 FUNC_6(VAR_15, VAR_9, VAR_10);
 FUNC_5(VAR_15, VAR_11, VAR_12);
 FUNC_4(VAR_15);
 FUNC_7(VAR_4->Context, VAR_15, &VAR_13, &VAR_14);
 FUNC_1(VAR_15);
}
