
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_map_entry_t ;
struct TYPE_13__ {int eflags; } ;
struct TYPE_12__ {int oflags; scalar_t__ dirty; int object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_9(vm_map_entry_t VAR_6, vm_page_t VAR_7, vm_prot_t VAR_8,
    vm_prot_t VAR_9, int VAR_10, bool VAR_11)
{
 bool VAR_12;

 if (((VAR_8 & VAR_4) == 0 &&
     (VAR_10 & VAR_2) == 0) ||
     (VAR_7->oflags & VAR_5) != 0)
  return;

 FUNC_0(VAR_7->object);
 FUNC_1(VAR_7);

 VAR_12 = ((VAR_9 & VAR_4) != 0 &&
     (VAR_10 & VAR_3) == 0) ||
     (VAR_10 & VAR_2) != 0;

 FUNC_2(VAR_7->object);

 if (!VAR_11)
  FUNC_6(VAR_7);
 if ((VAR_6->eflags & VAR_0) != 0) {
  if (VAR_7->dirty == 0) {
   FUNC_4(VAR_7, VAR_1);
  }
 } else {
  FUNC_3(VAR_7, VAR_1);
 }
 if (VAR_12)
  FUNC_5(VAR_7);
 if (!VAR_11)
  FUNC_7(VAR_7);
 else if (VAR_12)
  FUNC_8(VAR_7);
}
