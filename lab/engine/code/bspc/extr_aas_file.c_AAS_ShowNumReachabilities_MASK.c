
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int reachabilitysize; TYPE_1__* reachability; } ;
struct TYPE_3__ {int traveltype; } ;


 int FUNC_0 (char*,int,char*) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

void FUNC_1(int VAR_2, char *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_1.reachabilitysize; VAR_4++)
 {
  if ((VAR_1.reachability[VAR_4].traveltype & VAR_0) == VAR_2)
   VAR_5++;
 }
 FUNC_0("%6d %s\n", VAR_5, VAR_3);
}
