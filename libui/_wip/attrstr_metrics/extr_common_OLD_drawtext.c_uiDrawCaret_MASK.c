
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Height; scalar_t__ Y; } ;
typedef TYPE_1__ uiDrawTextLayoutLineMetrics ;
typedef int uiDrawTextLayout ;
typedef int uiDrawPath ;
typedef int uiDrawContext ;
struct TYPE_6__ {int A; int B; int G; int R; int Type; } ;
typedef TYPE_2__ uiDrawBrush ;
struct caretDrawParams {double xoff; int a; int b; int g; int r; int width; } ;


 int FUNC_0 (int *,int ,struct caretDrawParams*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,double,scalar_t__,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 double FUNC_8 (int *,size_t,int) ;
 int FUNC_9 (int *,int,size_t*,size_t*) ;
 int FUNC_10 (int *,int,TYPE_1__*) ;
 int FUNC_11 (int *) ;

void FUNC_12(uiDrawContext *VAR_2, double VAR_3, double VAR_4, uiDrawTextLayout *VAR_5, size_t VAR_6, int *VAR_7)
{
 double VAR_8;
 uiDrawTextLayoutLineMetrics VAR_9;
 struct caretDrawParams VAR_10;
 uiDrawPath *VAR_11;
 uiDrawBrush VAR_12;

 if (*VAR_7 < 0)
  *VAR_7 = 0;
 if (*VAR_7 > (FUNC_11(VAR_5) - 1))
  *VAR_7 = (FUNC_11(VAR_5) - 1);

 VAR_8 = FUNC_8(VAR_5, VAR_6, *VAR_7);
 while (VAR_8 < 0) {
  size_t VAR_13, VAR_14;

  FUNC_9(VAR_5, *VAR_7, &VAR_13, &VAR_14);
  if (VAR_14 < VAR_6)
   (*VAR_7)++;
  else
   (*VAR_7)--;
  VAR_8 = FUNC_8(VAR_5, VAR_6, *VAR_7);
 }
 FUNC_10(VAR_5, *VAR_7, &VAR_9);

 FUNC_0(VAR_2, VAR_9.Height, &VAR_10);

 FUNC_7(VAR_2);

 VAR_11 = FUNC_3(VAR_1);
 FUNC_4(VAR_11,

  VAR_3 + VAR_8 - VAR_10.xoff, VAR_4 + VAR_9.Y,
  VAR_10.width, VAR_9.Height);
 FUNC_5(VAR_11);
 VAR_12.Type = VAR_0;
 VAR_12.R = VAR_10.r;
 VAR_12.G = VAR_10.g;
 VAR_12.B = VAR_10.b;
 VAR_12.A = VAR_10.a;
 FUNC_1(VAR_2, VAR_11, &VAR_12);
 FUNC_2(VAR_11);

 FUNC_6(VAR_2);
}
