
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Thickness; scalar_t__ DashPhase; scalar_t__ NumDashes; int * Dashes; int MiterLimit; int Join; int Cap; } ;
typedef TYPE_1__ uiDrawStrokeParams ;
typedef int uiDrawPath ;
typedef int uiDrawMatrix ;
typedef int uiDrawBrush ;
struct TYPE_6__ {int Context; } ;
typedef TYPE_2__ uiAreaDrawParams ;


 int FUNC_0 (int *,int ,double,double,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int,int,int,int ,int,int) ;
 int FUNC_9 (int ,int *,int *,TYPE_1__*) ;
 int FUNC_10 (int ,int *) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_11(uiAreaDrawParams *VAR_6)
{
 uiDrawBrush VAR_7;
 uiDrawStrokeParams VAR_8;
 uiDrawPath *VAR_9;
 uiDrawMatrix VAR_10;

 FUNC_0(&VAR_7, 0, 0, 0, 1);
 VAR_8.Cap = VAR_3;
 VAR_8.Join = VAR_4;
 VAR_8.MiterLimit = VAR_0;
 VAR_8.Dashes = ((void*)0);
 VAR_8.NumDashes = 0;
 VAR_8.DashPhase = 0;

 VAR_8.Thickness = 6;

 VAR_9 = FUNC_5(VAR_1);
 FUNC_6(VAR_9, 12, 12, 232, 70);
 FUNC_8(VAR_9,
  64, 64,
  40,
  0, 2*VAR_5,
  0);
 FUNC_8(VAR_9,
  192, 64,
  40,
  0, -2*VAR_5,
  1);
 FUNC_7(VAR_9);

 FUNC_0(&VAR_7, 0, 0.7, 0, 1);
 FUNC_1(VAR_6->Context, VAR_9, &VAR_7);
 FUNC_0(&VAR_7, 0, 0, 0, 1);
 FUNC_9(VAR_6->Context, VAR_9, &VAR_7, &VAR_8);
 FUNC_2(VAR_9);

 FUNC_3(&VAR_10);
 FUNC_4(&VAR_10, 0, 128);
 FUNC_10(VAR_6->Context, &VAR_10);

 VAR_9 = FUNC_5(VAR_2);
 FUNC_6(VAR_9, 12, 12, 232, 70);
 FUNC_8(VAR_9,
  64, 64,
  40,
  0, 2*VAR_5,
  0);
 FUNC_8(VAR_9,
  192, 64,
  40,
  0, -2*VAR_5,
  1);
 FUNC_7(VAR_9);

 FUNC_0(&VAR_7, 0, 0, 0.9, 1);
 FUNC_1(VAR_6->Context, VAR_9, &VAR_7);
 FUNC_0(&VAR_7, 0, 0, 0, 1);
 FUNC_9(VAR_6->Context, VAR_9, &VAR_7, &VAR_8);
 FUNC_2(VAR_9);
}
