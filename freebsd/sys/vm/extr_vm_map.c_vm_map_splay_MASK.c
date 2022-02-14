
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef TYPE_1__* vm_map_t ;
typedef TYPE_2__* vm_map_entry_t ;
struct TYPE_15__ {struct TYPE_15__* left; struct TYPE_15__* right; } ;
struct TYPE_14__ {TYPE_2__ header; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int ,int ,TYPE_2__**,TYPE_2__**) ;

__attribute__((used)) static vm_map_entry_t
FUNC_3(vm_map_t VAR_0, vm_offset_t VAR_1)
{
 vm_map_entry_t VAR_2, VAR_3, VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1, 0, &VAR_2, &VAR_3);
 if (VAR_4 != ((void*)0)) {

 } else if (VAR_2 != &VAR_0->header) {




  VAR_4 = VAR_2;
  VAR_2 = VAR_4->right;
  VAR_4->right = ((void*)0);
 } else if (VAR_3 != &VAR_0->header) {




  VAR_4 = VAR_3;
  VAR_3 = VAR_4->left;
  VAR_4->left = ((void*)0);
 } else {

  return (((void*)0));
 }
 FUNC_1(VAR_0, VAR_4, VAR_2, VAR_3);
 FUNC_0(VAR_0);
 return (VAR_4);
}
