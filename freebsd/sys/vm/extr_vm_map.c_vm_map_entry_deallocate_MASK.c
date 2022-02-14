
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vm_map_entry_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_5__ {int vm_object; } ;
struct TYPE_6__ {int eflags; TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(vm_map_entry_t VAR_3, boolean_t VAR_4)
{

 if ((VAR_3->eflags & VAR_0) == 0)
  FUNC_1(VAR_3->object.vm_object);
 FUNC_0(VAR_4 ? VAR_1 : VAR_2, VAR_3);
}
