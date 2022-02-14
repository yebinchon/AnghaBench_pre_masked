
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


 int FUNC_0 (int *,double,double,int,double) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,double,double,double,int,double,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,double,double,double,int,double,int ) ;
 int FUNC_8 (int ,int *,int *,TYPE_1__*) ;
 double VAR_4 ;

__attribute__((used)) static void FUNC_9(uiAreaDrawParams *VAR_5)
{
 double VAR_6 = 25.6,
  VAR_7 = 25.6,
  VAR_8 = 204.8,
  VAR_9 = 204.8,
  VAR_10 = 1.0,
  VAR_11 = VAR_9 / 10.0;

 double VAR_12 = VAR_11 / VAR_10;
 double VAR_13 = VAR_4 / 180.0;

 uiDrawBrush VAR_14;
 uiDrawStrokeParams VAR_15;
 uiDrawPath *VAR_16;

 FUNC_0(&VAR_14, 0, 0, 0, 1);
 VAR_15.Cap = VAR_2;
 VAR_15.Join = VAR_3;
 VAR_15.MiterLimit = VAR_0;
 VAR_15.Dashes = ((void*)0);
 VAR_15.NumDashes = 0;
 VAR_15.DashPhase = 0;

 VAR_16 = FUNC_3(VAR_1);


 FUNC_7(VAR_16,
  VAR_6 + VAR_8 - VAR_12, VAR_7 + VAR_12,
  VAR_12,
  -90 * VAR_13, VAR_4 / 2,
  0);

 FUNC_4(VAR_16,
  VAR_6 + VAR_8 - VAR_12, VAR_7 + VAR_9 - VAR_12,
  VAR_12,
  0 * VAR_13, VAR_4 / 2,
  0);

 FUNC_4(VAR_16,
  VAR_6 + VAR_12, VAR_7 + VAR_9 - VAR_12,
  VAR_12,
  90 * VAR_13, VAR_4 / 2,
  0);

 FUNC_4(VAR_16,
  VAR_6 + VAR_12, VAR_7 + VAR_12,
  VAR_12,
  180 * VAR_13, VAR_4 / 2,
  0);
 FUNC_5(VAR_16);
 FUNC_6(VAR_16);

 FUNC_0(&VAR_14, 0.5, 0.5, 1, 1);
 FUNC_1(VAR_5->Context, VAR_16, &VAR_14);
 FUNC_0(&VAR_14, 0.5, 0, 0, 0.5);
 VAR_15.Thickness = 10.0;
 FUNC_8(VAR_5->Context, VAR_16, &VAR_14, &VAR_15);
 FUNC_2(VAR_16);
}
