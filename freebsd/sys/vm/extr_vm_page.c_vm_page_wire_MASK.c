
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int u_int ;
struct TYPE_4__ {int flags; int ref_count; int * object; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int) ;

void
FUNC_6(vm_page_t VAR_2)
{
 u_int VAR_3;

 FUNC_0(VAR_2->object != ((void*)0),
     ("vm_page_wire: page %p does not belong to an object", VAR_2));
 if (!FUNC_4(VAR_2))
  FUNC_1(VAR_2->object);
 FUNC_0((VAR_2->flags & VAR_0) == 0 ||
     FUNC_2(VAR_2->ref_count) >= 1,
     ("vm_page_wire: fictitious page %p has zero wirings", VAR_2));

 VAR_3 = FUNC_3(&VAR_2->ref_count, 1);
 FUNC_0(FUNC_2(VAR_3) != VAR_1,
     ("vm_page_wire: counter overflow for page %p", VAR_2));
 if (FUNC_2(VAR_3) == 0)
  FUNC_5(1);
}
