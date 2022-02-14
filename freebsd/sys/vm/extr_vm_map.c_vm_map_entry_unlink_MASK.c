
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef TYPE_2__* vm_map_t ;
typedef TYPE_3__* vm_map_entry_t ;
typedef enum unlink_merge_type { ____Placeholder_unlink_merge_type } unlink_merge_type ;
struct TYPE_24__ {TYPE_1__* prev; struct TYPE_24__* next; struct TYPE_24__* left; struct TYPE_24__* right; int offset; int start; } ;
struct TYPE_23__ {int nentries; int * root; TYPE_3__ header; } ;
struct TYPE_22__ {TYPE_3__* next; } ;


 int FUNC_0 (int ,char*,TYPE_2__*,int ,TYPE_3__*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;


 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__**) ;
 int FUNC_5 (TYPE_3__*,TYPE_3__**) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,TYPE_3__*,TYPE_3__*) ;
 TYPE_3__* FUNC_7 (TYPE_2__*,int ,int ,TYPE_3__**,TYPE_3__**) ;

__attribute__((used)) static void
FUNC_8(vm_map_t VAR_1, vm_map_entry_t VAR_2,
    enum unlink_merge_type VAR_3)
{
 vm_map_entry_t VAR_4, VAR_5, VAR_6, VAR_7;

 FUNC_3(VAR_1);
 VAR_6 = FUNC_7(VAR_1, VAR_2->start, 0, &VAR_4, &VAR_5);
 FUNC_1(VAR_6 != ((void*)0),
     ("vm_map_entry_unlink: unlink object not mapped"));

 FUNC_4(VAR_6, &VAR_5);
 switch (VAR_3) {
 case 129:
  VAR_5->start = VAR_6->start;
  VAR_5->offset = VAR_6->offset;
  VAR_7 = VAR_6->left;
  VAR_6 = VAR_5;
  VAR_5 = VAR_6->left;
  VAR_6->left = VAR_7;
  break;
 case 128:
  FUNC_5(VAR_6, &VAR_4);
  if (VAR_4 != &VAR_1->header) {
   VAR_6 = VAR_4;
   VAR_4 = VAR_6->right;
   VAR_6->right = ((void*)0);
  } else if (VAR_5 != &VAR_1->header) {
   VAR_6 = VAR_5;
   VAR_5 = VAR_6->left;
   VAR_6->left = ((void*)0);
  } else
   VAR_6 = ((void*)0);
  break;
 }
 VAR_7 = VAR_2->next;
 VAR_7->prev = VAR_2->prev;
 VAR_7->prev->next = VAR_7;
 if (VAR_6 != ((void*)0))
  FUNC_6(VAR_1, VAR_6, VAR_4, VAR_5);
 else
  VAR_1->root = ((void*)0);
 FUNC_2(VAR_1);
 VAR_1->nentries--;
 FUNC_0(VAR_0, "vm_map_entry_unlink: map %p, nentries %d, entry %p", VAR_1,
     VAR_1->nentries, VAR_2);
}
