
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int u_int ;
typedef int op ;
struct TYPE_7__ {int oflags; int ref_count; int * object; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static bool
FUNC_7(vm_page_t VAR_3, void (*VAR_4)(vm_page_t))
{
 u_int VAR_5;

 FUNC_0(VAR_3->object != ((void*)0) && (VAR_3->oflags & VAR_0) == 0,
     ("vm_page_try_blocked_op: page %p has no object", VAR_3));
 FUNC_0(FUNC_5(VAR_3),
     ("vm_page_try_blocked_op: page %p is not busy", VAR_3));
 FUNC_1(VAR_3->object);

 VAR_5 = VAR_3->ref_count;
 do {
  FUNC_0(VAR_5 != 0,
      ("vm_page_try_blocked_op: page %p has no references", VAR_3));
  if (FUNC_3(VAR_5) != 0)
   return (0);
 } while (!FUNC_4(&VAR_3->ref_count, &VAR_5, VAR_5 | VAR_1));

 (VAR_4)(VAR_3);





 VAR_5 = FUNC_6(VAR_3, VAR_1);
 FUNC_0(!FUNC_2(VAR_3->object) ||
     VAR_5 == (VAR_1 | VAR_2),
     ("vm_page_try_blocked_op: unexpected refcount value %u for %p",
     VAR_5, VAR_3));
 return (1);
}
