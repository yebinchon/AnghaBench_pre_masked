
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* current; } ;
typedef TYPE_2__ tree_iterator_frame ;
struct TYPE_12__ {TYPE_5__* tree_entry; } ;
typedef TYPE_3__ tree_iterator_entry ;
struct TYPE_15__ {int id; int path; int mode; } ;
struct TYPE_10__ {int ptr; } ;
struct TYPE_13__ {TYPE_9__ entry; TYPE_1__ entry_path; } ;
typedef TYPE_4__ tree_iterator ;
struct TYPE_14__ {int oid; int attr; } ;
typedef TYPE_5__ git_tree_entry ;
typedef int git_index_entry ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_9__*,int,int) ;

__attribute__((used)) static void FUNC_2(
 tree_iterator *VAR_0,
 tree_iterator_frame *VAR_1,
 tree_iterator_entry *VAR_2)
{
 git_tree_entry *VAR_3 = VAR_2->tree_entry;

 VAR_1->current = VAR_2;

 FUNC_1(&VAR_0->entry, 0x0, sizeof(git_index_entry));

 VAR_0->entry.mode = VAR_3->attr;
 VAR_0->entry.path = VAR_0->entry_path.ptr;
 FUNC_0(&VAR_0->entry.id, VAR_3->oid);
}
