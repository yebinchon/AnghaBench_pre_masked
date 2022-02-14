
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int numareas; TYPE_1__* areasettings; } ;
struct TYPE_5__ {int (* Print ) (int ,char*,int) ;} ;
struct TYPE_4__ {int contents; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (int ,char*,int) ;

void FUNC_2(void)
{
 int VAR_4, VAR_5;

 VAR_4 = 0;
 for (VAR_5 = 1; VAR_5 < VAR_2.numareas; VAR_5++)
 {
  if (VAR_2.areasettings[VAR_5].contents & VAR_0)
  {
   FUNC_0("area %d is a forced portal area\r\n", VAR_5);
   VAR_4++;
  }
 }
 VAR_3.Print(VAR_1, "%6d forced portal areas\n", VAR_4);
}
