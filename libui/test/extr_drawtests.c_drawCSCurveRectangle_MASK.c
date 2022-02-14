
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
 int FUNC_4 (int *,double,double,double,double,double,double) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,double,double) ;
 int FUNC_8 (int *,double,double) ;
 int FUNC_9 (int ,int *,int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_10(uiAreaDrawParams *VAR_4)
{
 double VAR_5 = 25.6,
  VAR_6 = 25.6,
  VAR_7 = 204.8,
  VAR_8 = 204.8,
  VAR_9 = 102.4;

 double VAR_10,VAR_11;

 uiDrawBrush VAR_12;
 uiDrawStrokeParams VAR_13;
 uiDrawPath *VAR_14;

 FUNC_0(&VAR_12, 0, 0, 0, 1);
 VAR_13.Cap = VAR_2;
 VAR_13.Join = VAR_3;
 VAR_13.MiterLimit = VAR_0;
 VAR_13.Dashes = ((void*)0);
 VAR_13.NumDashes = 0;
 VAR_13.DashPhase = 0;

 VAR_14 = FUNC_3(VAR_1);

 VAR_10=VAR_5+VAR_7;
 VAR_11=VAR_6+VAR_8;
 if (!VAR_7 || !VAR_8)
  return;
 if (VAR_7/2 < VAR_9) {
  if (VAR_8/2<VAR_9) {
   FUNC_8(VAR_14, VAR_5, (VAR_6 + VAR_11)/2);
   FUNC_4(VAR_14, VAR_5 ,VAR_6, VAR_5, VAR_6, (VAR_5 + VAR_10)/2, VAR_6);
   FUNC_4(VAR_14, VAR_10, VAR_6, VAR_10, VAR_6, VAR_10, (VAR_6 + VAR_11)/2);
   FUNC_4(VAR_14, VAR_10, VAR_11, VAR_10, VAR_11, (VAR_10 + VAR_5)/2, VAR_11);
   FUNC_4(VAR_14, VAR_5, VAR_11, VAR_5, VAR_11, VAR_5, (VAR_6 + VAR_11)/2);
  } else {
   FUNC_8(VAR_14, VAR_5, VAR_6 + VAR_9);
   FUNC_4(VAR_14, VAR_5 ,VAR_6, VAR_5, VAR_6, (VAR_5 + VAR_10)/2, VAR_6);
   FUNC_4(VAR_14, VAR_10, VAR_6, VAR_10, VAR_6, VAR_10, VAR_6 + VAR_9);
   FUNC_7(VAR_14, VAR_10 , VAR_11 - VAR_9);
   FUNC_4(VAR_14, VAR_10, VAR_11, VAR_10, VAR_11, (VAR_10 + VAR_5)/2, VAR_11);
   FUNC_4(VAR_14, VAR_5, VAR_11, VAR_5, VAR_11, VAR_5, VAR_11- VAR_9);
  }
 } else {
  if (VAR_8 / 2 < VAR_9) {
   FUNC_8(VAR_14, VAR_5, (VAR_6 + VAR_11)/2);
   FUNC_4(VAR_14, VAR_5 , VAR_6, VAR_5 , VAR_6, VAR_5 + VAR_9, VAR_6);
   FUNC_7(VAR_14, VAR_10 - VAR_9, VAR_6);
   FUNC_4(VAR_14, VAR_10, VAR_6, VAR_10, VAR_6, VAR_10, (VAR_6 + VAR_11)/2);
   FUNC_4(VAR_14, VAR_10, VAR_11, VAR_10, VAR_11, VAR_10 - VAR_9, VAR_11);
   FUNC_7(VAR_14, VAR_5 + VAR_9, VAR_11);
   FUNC_4(VAR_14, VAR_5, VAR_11, VAR_5, VAR_11, VAR_5, (VAR_6 + VAR_11)/2);
  } else {
   FUNC_8(VAR_14, VAR_5, VAR_6 + VAR_9);
   FUNC_4(VAR_14, VAR_5 , VAR_6, VAR_5 , VAR_6, VAR_5 + VAR_9, VAR_6);
   FUNC_7(VAR_14, VAR_10 - VAR_9, VAR_6);
   FUNC_4(VAR_14, VAR_10, VAR_6, VAR_10, VAR_6, VAR_10, VAR_6 + VAR_9);
   FUNC_7(VAR_14, VAR_10 , VAR_11 - VAR_9);
   FUNC_4(VAR_14, VAR_10, VAR_11, VAR_10, VAR_11, VAR_10 - VAR_9, VAR_11);
   FUNC_7(VAR_14, VAR_5 + VAR_9, VAR_11);
   FUNC_4(VAR_14, VAR_5, VAR_11, VAR_5, VAR_11, VAR_5, VAR_11- VAR_9);
  }
 }
 FUNC_5(VAR_14);
 FUNC_6(VAR_14);

 FUNC_0(&VAR_12, 0.5, 0.5, 1, 1.0);
 FUNC_1(VAR_4->Context, VAR_14, &VAR_12);
 FUNC_0(&VAR_12, 0.5, 0, 0, 0.5);
 VAR_13.Thickness = 10.0;
 FUNC_9(VAR_4->Context, VAR_14, &VAR_12, &VAR_13);

 FUNC_2(VAR_14);
}
