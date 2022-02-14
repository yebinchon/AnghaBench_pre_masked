
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double Thickness; void* Cap; scalar_t__ DashPhase; scalar_t__ NumDashes; int * Dashes; int MiterLimit; int Join; } ;
typedef TYPE_1__ uiDrawStrokeParams ;
typedef int uiDrawPath ;
typedef int uiDrawBrush ;
struct TYPE_6__ {int Context; } ;
typedef TYPE_2__ uiAreaDrawParams ;


 int FUNC_0 (int *,int,double,double,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,double,double) ;
 int FUNC_5 (int *,double,double) ;
 int FUNC_6 (int ,int *,int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(uiAreaDrawParams *VAR_6)
{
 uiDrawBrush VAR_7;
 uiDrawStrokeParams VAR_8;
 uiDrawPath *VAR_9;

 FUNC_0(&VAR_7, 0, 0, 0, 1);
 VAR_8.Cap = VAR_2;
 VAR_8.Join = VAR_5;
 VAR_8.MiterLimit = VAR_0;
 VAR_8.Dashes = ((void*)0);
 VAR_8.NumDashes = 0;
 VAR_8.DashPhase = 0;

 VAR_8.Thickness = 30.0;

 VAR_8.Cap = VAR_2;
 VAR_9 = FUNC_2(VAR_1);
 FUNC_5(VAR_9, 64.0, 50.0);
 FUNC_4(VAR_9, 64.0, 200.0);
 FUNC_3(VAR_9);
 FUNC_6(VAR_6->Context, VAR_9, &VAR_7, &VAR_8);
 FUNC_1(VAR_9);

 VAR_8.Cap = VAR_3;
 VAR_9 = FUNC_2(VAR_1);
 FUNC_5(VAR_9, 128.0, 50.0);
 FUNC_4(VAR_9, 128.0, 200.0);
 FUNC_3(VAR_9);
 FUNC_6(VAR_6->Context, VAR_9, &VAR_7, &VAR_8);
 FUNC_1(VAR_9);

 VAR_8.Cap = VAR_4;
 VAR_9 = FUNC_2(VAR_1);
 FUNC_5(VAR_9, 192.0, 50.0);
 FUNC_4(VAR_9, 192.0, 200.0);
 FUNC_3(VAR_9);
 FUNC_6(VAR_6->Context, VAR_9, &VAR_7, &VAR_8);
 FUNC_1(VAR_9);



 FUNC_0(&VAR_7, 1, 0.2, 0.2, 1);
 VAR_8.Thickness = 2.56;
 VAR_9 = FUNC_2(VAR_1);
 FUNC_5(VAR_9, 64.0, 50.0);
 FUNC_4(VAR_9, 64.0, 200.0);
 FUNC_5(VAR_9, 128.0, 50.0);
 FUNC_4(VAR_9, 128.0, 200.0);
 FUNC_5(VAR_9, 192.0, 50.0);
 FUNC_4(VAR_9, 192.0, 200.0);
 FUNC_3(VAR_9);
 FUNC_6(VAR_6->Context, VAR_9, &VAR_7, &VAR_8);
 FUNC_1(VAR_9);
}
