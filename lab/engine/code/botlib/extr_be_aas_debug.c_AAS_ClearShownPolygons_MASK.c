
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* DebugPolygonDelete ) (scalar_t__) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 (scalar_t__) ;

void FUNC_1(void)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
 {
  if (VAR_2[VAR_3]) VAR_1.DebugPolygonDelete(VAR_2[VAR_3]);
  VAR_2[VAR_3] = 0;
 }
}
