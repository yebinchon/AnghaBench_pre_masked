
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd_name; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

int
FUNC_3(void)
{
 int VAR_2, VAR_3;

 VAR_3 = FUNC_1();
 if (VAR_3) {
  FUNC_0("restoreprivilege");
  return (VAR_3);
 }

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_3 = FUNC_2(VAR_0[VAR_2].fd_name);
  if (VAR_3)
   return (VAR_3);
 }

 return (0);
}
