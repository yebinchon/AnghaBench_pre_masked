
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int reachabilitysize; TYPE_1__* reachability; } ;
struct TYPE_3__ {int traveltype; int facenum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

int FUNC_0(int VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_4 <= 0) VAR_4 = 1;
 else if (VAR_4 >= VAR_3.reachabilitysize) return 0;
 else VAR_4++;

 for (VAR_6 = VAR_4; VAR_6 < VAR_3.reachabilitysize; VAR_6++)
 {
  if ((VAR_3.reachability[VAR_6].traveltype & VAR_0) == VAR_1)
  {
   if (VAR_3.reachability[VAR_6].facenum == VAR_5) return VAR_6;
  }
  else if ((VAR_3.reachability[VAR_6].traveltype & VAR_0) == VAR_2)
  {
   if ((VAR_3.reachability[VAR_6].facenum & 0x0000FFFF) == VAR_5) return VAR_6;
  }
 }
 return 0;
}
