
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int u_int ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int) ;

bool
FUNC_4(vm_page_t VAR_1)
{
 u_int VAR_2;

 VAR_2 = FUNC_2(VAR_1, 1);
 FUNC_0(FUNC_1(VAR_2) != 0,
     ("vm_page_unref: counter underflow for page %p", VAR_1));
 FUNC_0((VAR_1->flags & VAR_0) == 0 || FUNC_1(VAR_2) > 1,
     ("vm_page_unref: missing ref on fictitious page %p", VAR_1));

 if (FUNC_1(VAR_2) > 1)
  return (0);
 FUNC_3(1);
 return (1);
}
