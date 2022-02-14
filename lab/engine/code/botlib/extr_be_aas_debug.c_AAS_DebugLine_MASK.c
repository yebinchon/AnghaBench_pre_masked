
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_2__ {int (* DebugLineShow ) (scalar_t__,int ,int ,int) ;scalar_t__ (* DebugLineCreate ) () ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__,int ,int ,int) ;

void FUNC_2(vec3_t VAR_7, vec3_t VAR_8, int VAR_9)
{
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
 {
  if (!VAR_2[VAR_10])
  {
   VAR_2[VAR_10] = VAR_1.DebugLineCreate();
   VAR_3[VAR_10] = VAR_5;
   VAR_4++;
  }
  if (!VAR_3[VAR_10])
  {
   VAR_1.DebugLineShow(VAR_2[VAR_10], VAR_7, VAR_8, VAR_9);
   VAR_3[VAR_10] = VAR_6;
   return;
  }
 }
}
