
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vm_map_entry_t ;
struct TYPE_7__ {struct TYPE_7__* right; } ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_1(vm_map_entry_t VAR_0, vm_map_entry_t *VAR_1)
{
 vm_map_entry_t VAR_2, VAR_3;

 VAR_0 = VAR_0->right;
 VAR_2 = *VAR_1;
 while (VAR_0 != ((void*)0))
  FUNC_0(VAR_0, VAR_3, VAR_2, 1);
 *VAR_1 = VAR_2;
}
