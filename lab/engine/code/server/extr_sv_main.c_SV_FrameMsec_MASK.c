
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int timeResidual; } ;
struct TYPE_3__ {float value; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;

int FUNC_0()
{
 if(VAR_1)
 {
  int VAR_2;

  VAR_2 = 1000.0f / VAR_1->value;

  if(VAR_2 < VAR_0.timeResidual)
   return 0;
  else
   return VAR_2 - VAR_0.timeResidual;
 }
 else
  return 1;
}
