
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef int * vm_map_entry_t ;
struct TYPE_3__ {scalar_t__ system_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int ) ;

__attribute__((used)) static vm_map_entry_t
FUNC_2(vm_map_t VAR_4)
{
 vm_map_entry_t VAR_5;

 if (VAR_4->system_map)
  VAR_5 = FUNC_1(VAR_2, VAR_0);
 else
  VAR_5 = FUNC_1(VAR_3, VAR_1);
 if (VAR_5 == ((void*)0))
  FUNC_0("vm_map_entry_create: kernel resources exhausted");
 return (VAR_5);
}
