
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int size; int ptr; } ;
struct TYPE_13__ {scalar_t__ (* strncomp ) (int ,int ,int ) ;} ;
struct TYPE_8__ {scalar_t__ length; TYPE_5__** contents; } ;
struct TYPE_11__ {scalar_t__ next_idx; int skip_tree; TYPE_2__ tree_buf; TYPE_6__ base; TYPE_1__ entries; TYPE_3__* entry; } ;
typedef TYPE_4__ index_iterator ;
struct TYPE_12__ {int path; } ;
typedef TYPE_5__ git_index_entry ;
struct TYPE_10__ {int mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(index_iterator *VAR_1)
{
 FUNC_1(FUNC_2(&VAR_1->base));
 FUNC_1(FUNC_0(VAR_1->entry->mode));

 while (1) {
  const git_index_entry *VAR_2 = ((void*)0);

  if (++VAR_1->next_idx >= VAR_1->entries.length)
   return VAR_0;

  VAR_2 = VAR_1->entries.contents[VAR_1->next_idx];

  if (VAR_1->base.strncomp(VAR_1->tree_buf.ptr, VAR_2->path,
   VAR_1->tree_buf.size) != 0)
   break;
 }

 VAR_1->skip_tree = 0;
 return 0;
}
