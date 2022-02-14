
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* areacontentstravelflags; int numareas; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_1__ VAR_0 ;

void FUNC_3(void)
{
 int VAR_1;

 if (VAR_0.areacontentstravelflags) FUNC_1(VAR_0.areacontentstravelflags);
 VAR_0.areacontentstravelflags = (int *) FUNC_2(VAR_0.numareas * sizeof(int));

 for (VAR_1 = 0; VAR_1 < VAR_0.numareas; VAR_1++) {
  VAR_0.areacontentstravelflags[VAR_1] = FUNC_0(VAR_1);
 }
}
