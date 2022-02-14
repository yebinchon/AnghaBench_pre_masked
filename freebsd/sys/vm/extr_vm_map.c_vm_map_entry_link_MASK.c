
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef TYPE_2__* vm_map_entry_t ;
struct TYPE_18__ {int * right; int left; struct TYPE_18__* prev; struct TYPE_18__* next; int start; } ;
struct TYPE_17__ {int nentries; } ;


 int FUNC_0 (int ,char*,TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_1__*,int ,int ,TYPE_2__**,TYPE_2__**) ;

__attribute__((used)) static void
FUNC_6(vm_map_t VAR_1, vm_map_entry_t VAR_2)
{
 vm_map_entry_t VAR_3, VAR_4, VAR_5;

 FUNC_0(VAR_0,
     "vm_map_entry_link: map %p, nentries %d, entry %p", VAR_1,
     VAR_1->nentries, VAR_2);
 FUNC_3(VAR_1);
 VAR_1->nentries++;
 VAR_5 = FUNC_5(VAR_1, VAR_2->start, 0, &VAR_3, &VAR_4);
 FUNC_1(VAR_5 == ((void*)0),
     ("vm_map_entry_link: link object already mapped"));
 VAR_2->prev = VAR_3;
 VAR_2->next = VAR_4;
 VAR_3->next = VAR_4->prev = VAR_2;
 VAR_2->left = *(VAR_2->right = ((void*)0));
 FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_2(VAR_1);
}
