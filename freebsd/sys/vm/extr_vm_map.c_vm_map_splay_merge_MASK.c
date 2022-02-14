
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef void* vm_size_t ;
typedef TYPE_1__* vm_map_t ;
typedef TYPE_2__* vm_map_entry_t ;
struct TYPE_14__ {void* max_free; struct TYPE_14__* right; struct TYPE_14__* left; } ;
struct TYPE_13__ {int nupdates; TYPE_2__* root; TYPE_2__ header; } ;


 void* FUNC_0 (void*,void*) ;
 void* FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 void* FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__**,TYPE_2__**) ;

__attribute__((used)) static void
FUNC_4(vm_map_t VAR_0, vm_map_entry_t VAR_1,
    vm_map_entry_t VAR_2, vm_map_entry_t VAR_3)
{
 vm_map_entry_t VAR_4;
 vm_size_t VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_1, VAR_2);
 if (VAR_2 != &VAR_0->header) {
  VAR_4 = VAR_1->left;
  do {





   VAR_2->max_free = VAR_5 =
       FUNC_0(VAR_2->max_free, VAR_5);
   FUNC_3(&VAR_2->right, &VAR_4);
   FUNC_3(&VAR_4, &VAR_2);
  } while (VAR_2 != &VAR_0->header);
  VAR_1->left = VAR_4;
 }
 VAR_6 = FUNC_2(VAR_1, VAR_3);
 if (VAR_3 != &VAR_0->header) {
  VAR_4 = VAR_1->right;
  do {





   VAR_3->max_free = VAR_6 =
       FUNC_0(VAR_3->max_free, VAR_6);
   FUNC_3(&VAR_3->left, &VAR_4);
   FUNC_3(&VAR_4, &VAR_3);
  } while (VAR_3 != &VAR_0->header);
  VAR_1->right = VAR_4;
 }
 VAR_1->max_free = FUNC_0(VAR_5, VAR_6);
 VAR_0->root = VAR_1;



}
