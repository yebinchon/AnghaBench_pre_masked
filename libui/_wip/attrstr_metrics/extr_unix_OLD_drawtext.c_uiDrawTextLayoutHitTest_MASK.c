
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nLines; int layout; TYPE_1__* lineMetrics; } ;
typedef TYPE_2__ uiDrawTextLayout ;
struct TYPE_4__ {double Y; double Height; } ;


 int FUNC_0 (double) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int*,int*) ;

void FUNC_3(uiDrawTextLayout *VAR_0, double VAR_1, double VAR_2, size_t *VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7;


 FUNC_2(VAR_0->layout,
  FUNC_0(VAR_1), FUNC_0(VAR_2),
  &VAR_5, &VAR_6);


 if (VAR_6 != 0)
  VAR_5 += VAR_6;
 *VAR_3 = VAR_5;

 for (VAR_7 = 0; VAR_7 < VAR_0->nLines; VAR_7++) {
  double VAR_8, VAR_9;

  VAR_8 = VAR_0->lineMetrics[VAR_7].Y;
  VAR_9 = VAR_8 + VAR_0->lineMetrics[VAR_7].Height;

  if (VAR_2 < VAR_9)
   break;
 }
 if (VAR_7 == FUNC_1(VAR_0->layout))
  VAR_7--;
 *VAR_4 = VAR_7;
}
