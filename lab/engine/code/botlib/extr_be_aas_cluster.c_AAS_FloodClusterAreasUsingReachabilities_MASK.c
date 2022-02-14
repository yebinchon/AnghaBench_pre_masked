
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int numareas; TYPE_2__* areasettings; TYPE_1__* reachability; } ;
struct TYPE_5__ {int contents; int numreachableareas; int firstreachablearea; scalar_t__ cluster; } ;
struct TYPE_4__ {int areanum; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_1(int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 for (VAR_5 = 1; VAR_5 < VAR_1.numareas; VAR_5++)
 {

  if (VAR_1.areasettings[VAR_5].cluster)
   continue;

  if (VAR_1.areasettings[VAR_5].contents & VAR_0)
   continue;

  for (VAR_6 = 0; VAR_6 < VAR_1.areasettings[VAR_5].numreachableareas; VAR_6++)
  {

   VAR_7 = VAR_1.reachability[VAR_1.areasettings[VAR_5].firstreachablearea + VAR_6].areanum;

   if (VAR_1.areasettings[VAR_7].contents & VAR_0)
    continue;

   if (VAR_1.areasettings[VAR_7].cluster)
   {
    if (!FUNC_0(VAR_5, VAR_4))
     return VAR_2;
    VAR_5 = 0;
    break;
   }
  }
 }
 return VAR_3;
}
