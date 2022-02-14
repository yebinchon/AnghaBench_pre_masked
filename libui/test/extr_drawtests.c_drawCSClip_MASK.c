
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


 int FUNC_0 (int *,int ,int,int ,int) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,double,double,double,int ,int,int ) ;
 int FUNC_10 (int ,int *,int *,TYPE_1__*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_11(uiAreaDrawParams *VAR_5)
{
 uiDrawBrush VAR_6;
 uiDrawStrokeParams VAR_7;
 uiDrawPath *VAR_8;

 FUNC_0(&VAR_6, 0, 0, 0, 1);
 VAR_7.Cap = VAR_2;
 VAR_7.Join = VAR_3;
 VAR_7.MiterLimit = VAR_0;
 VAR_7.Dashes = ((void*)0);
 VAR_7.NumDashes = 0;
 VAR_7.DashPhase = 0;

 VAR_8 = FUNC_4(VAR_1);

 FUNC_9(VAR_8,
  128.0, 128.0,
  76.8,
  0, 2 * VAR_4,
  0);
 FUNC_6(VAR_8);
 FUNC_1(VAR_5->Context, VAR_8);
 FUNC_3(VAR_8);

 VAR_8 = FUNC_4(VAR_1);
 FUNC_5(VAR_8, 0, 0, 256, 256);
 FUNC_6(VAR_8);
 FUNC_2(VAR_5->Context, VAR_8, &VAR_6);
 FUNC_3(VAR_8);

 FUNC_0(&VAR_6, 0, 1, 0, 1);
 VAR_8 = FUNC_4(VAR_1);
 FUNC_8(VAR_8, 0, 0);
 FUNC_7(VAR_8, 256, 256);
 FUNC_8(VAR_8, 256, 0);
 FUNC_7(VAR_8, 0, 256);
 FUNC_6(VAR_8);
 VAR_7.Thickness = 10.0;
 FUNC_10(VAR_5->Context, VAR_8, &VAR_6, &VAR_7);
 FUNC_3(VAR_8);
}
