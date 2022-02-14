
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int u_int ;
struct TYPE_3__ {int ref_count; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int) ;

bool
FUNC_4(vm_page_t VAR_1)
{
 u_int VAR_2;

 VAR_2 = VAR_1->ref_count;
 do {
  FUNC_0(VAR_2 > 0,
      ("vm_page_wire_mapped: wiring unreferenced page %p", VAR_1));
  if ((VAR_2 & VAR_0) != 0)
   return (0);
 } while (!FUNC_2(&VAR_1->ref_count, &VAR_2, VAR_2 + 1));

 if (FUNC_1(VAR_2) == 0)
  FUNC_3(1);
 return (1);
}
