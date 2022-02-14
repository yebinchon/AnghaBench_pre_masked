
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Height; scalar_t__ Y; } ;
typedef TYPE_1__ uiDrawTextLayoutLineMetrics ;
typedef int uiDrawTextLayout ;
typedef int uiDrawPath ;
typedef int uiDrawContext ;
typedef int uiDrawBrush ;


 int FUNC_0 (int *,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,double,scalar_t__,double,int ) ;
 int FUNC_4 (int *) ;
 double FUNC_5 (int *,size_t,int) ;
 int FUNC_6 (int *,double*,double*) ;
 int FUNC_7 (int *,int,size_t*,size_t*) ;
 int FUNC_8 (int *,int,TYPE_1__*) ;
 int FUNC_9 (int *) ;

void FUNC_10(uiDrawContext *VAR_1, double VAR_2, double VAR_3, uiDrawTextLayout *VAR_4, size_t VAR_5, size_t VAR_6, uiDrawBrush *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 size_t VAR_11, VAR_12;
 double VAR_13, VAR_14;

 FUNC_6(VAR_4, &VAR_13, &VAR_14);
 VAR_10 = FUNC_9(VAR_4);
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  FUNC_7(VAR_4, VAR_9, &VAR_11, &VAR_12);
  if (VAR_5 >= VAR_11 && VAR_5 < VAR_12)
   break;
 }
 while (VAR_6 - VAR_5 > 0) {
  uiDrawTextLayoutLineMetrics VAR_15;
  double VAR_16, VAR_17;
  uiDrawPath *VAR_18;

  FUNC_7(VAR_4, VAR_9, &VAR_11, &VAR_12);
  if (VAR_12 > VAR_6)
   VAR_12 = VAR_6;
  VAR_16 = FUNC_5(VAR_4, VAR_5, VAR_9);

  VAR_17 = VAR_13;
  if (!VAR_8 || VAR_6 <= VAR_12)
   VAR_17 = FUNC_5(VAR_4, VAR_12, VAR_9);
  FUNC_8(VAR_4, VAR_9, &VAR_15);
  VAR_18 = FUNC_2(VAR_0);
  FUNC_3(VAR_18,
   VAR_2 + VAR_16, VAR_3 + VAR_15.Y,
   VAR_17 - VAR_16, VAR_15.Height);
  FUNC_4(VAR_18);
  FUNC_0(VAR_1, VAR_18, VAR_7);
  FUNC_1(VAR_18);
  VAR_9++;
  VAR_5 = VAR_12;
 }
}
