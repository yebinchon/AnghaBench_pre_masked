
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int numareas; TYPE_1__* areasettings; } ;
struct TYPE_3__ {int numreachableareas; } ;


 int FUNC_0 (char*,int) ;
 TYPE_2__ VAR_0 ;

int FUNC_1(int VAR_1)
{
 if (VAR_1 < 0 || VAR_1 >= VAR_0.numareas)
 {
  FUNC_0("AAS_AreaReachability: areanum %d out of range\n", VAR_1);
  return 0;
 }
 return VAR_0.areasettings[VAR_1].numreachableareas;
}
