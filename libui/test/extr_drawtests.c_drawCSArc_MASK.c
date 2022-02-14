
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
 int FUNC_1 (int ,int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,double,double) ;
 int FUNC_6 (int *,double,double,double,double,int,int ) ;
 int FUNC_7 (int ,int *,int *,TYPE_1__*) ;
 double VAR_4 ;

__attribute__((used)) static void FUNC_8(uiAreaDrawParams *VAR_5)
{
 double VAR_6 = 128.0;
 double VAR_7 = 128.0;
 double VAR_8 = 100.0;
 double VAR_9 = 45.0 * (VAR_4 / 180.0);
 double VAR_10 = 180.0 * (VAR_4 / 180.0);
 uiDrawBrush VAR_11;
 uiDrawStrokeParams VAR_12;
 uiDrawPath *VAR_13;

 FUNC_0(&VAR_11, 0, 0, 0, 1);
 VAR_12.Cap = VAR_2;
 VAR_12.Join = VAR_3;
 VAR_12.MiterLimit = VAR_0;
 VAR_12.Dashes = ((void*)0);
 VAR_12.NumDashes = 0;
 VAR_12.DashPhase = 0;

 VAR_12.Thickness = 10.0;
 VAR_13 = FUNC_3(VAR_1);
 FUNC_6(VAR_13,
  VAR_6, VAR_7,
  VAR_8,
  VAR_9,
  VAR_10 - VAR_9,
  0);
 FUNC_4(VAR_13);
 FUNC_7(VAR_5->Context, VAR_13, &VAR_11, &VAR_12);
 FUNC_2(VAR_13);

 FUNC_0(&VAR_11, 1, 0.2, 0.2, 0.6);
 VAR_12.Thickness = 6.0;

 VAR_13 = FUNC_3(VAR_1);
 FUNC_6(VAR_13,
  VAR_6, VAR_7,
  10.0,
  0, 2 * VAR_4,
  0);
 FUNC_4(VAR_13);
 FUNC_1(VAR_5->Context, VAR_13, &VAR_11);
 FUNC_2(VAR_13);

 VAR_13 = FUNC_3(VAR_1);
 FUNC_6(VAR_13,
  VAR_6, VAR_7,
  VAR_8,
  VAR_9, 0,
  0);
 FUNC_5(VAR_13, VAR_6, VAR_7);
 FUNC_6(VAR_13,
  VAR_6, VAR_7,
  VAR_8,
  VAR_10, 0,
  0);
 FUNC_5(VAR_13, VAR_6, VAR_7);
 FUNC_4(VAR_13);
 FUNC_7(VAR_5->Context, VAR_13, &VAR_11, &VAR_12);
 FUNC_2(VAR_13);
}
