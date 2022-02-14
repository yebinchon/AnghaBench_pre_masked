
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double* time; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static float
FUNC_0(int VAR_2)
{
 double VAR_3;
 int VAR_4;

 VAR_3 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3 += VAR_1.time[VAR_4];
 if (VAR_3 == 0.0)
  VAR_3 = 1.0;
 return (VAR_1.time[VAR_2] * 100.0 / VAR_3);
}
