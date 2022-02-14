
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* DebugLineDelete ) (scalar_t__) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__* VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;

void FUNC_1(void)
{
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
 {
  if (VAR_2[VAR_5])
  {

   VAR_1.DebugLineDelete(VAR_2[VAR_5]);
   VAR_2[VAR_5] = 0;
   VAR_3[VAR_5] = VAR_4;
  }
 }
}
