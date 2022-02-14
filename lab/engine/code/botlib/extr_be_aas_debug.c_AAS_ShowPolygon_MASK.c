
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_2__ {scalar_t__ (* DebugPolygonCreate ) (int,int,int *) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__ FUNC_0 (int,int,int *) ;

void FUNC_1(int VAR_3, int VAR_4, vec3_t *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
 {
  if (!VAR_2[VAR_6])
  {
   VAR_2[VAR_6] = VAR_1.DebugPolygonCreate(VAR_3, VAR_4, VAR_5);
   break;
  }
 }
}
