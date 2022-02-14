
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ksw_used; int ksw_devname; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_4, VAR_5;
 int VAR_6;

 VAR_0 = sizeof("Disk");
 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
  VAR_6 = FUNC_1(VAR_1[VAR_4].ksw_devname);
  if (VAR_0 < VAR_6)
   VAR_0 = VAR_6;
 }

 VAR_3 = sizeof("Used");
 for (VAR_5 = FUNC_0(VAR_1[VAR_2].ksw_used), VAR_6 = 2; VAR_5 /= 10; ++VAR_6);
 if (VAR_3 < VAR_6)
  VAR_3 = VAR_6;
}
