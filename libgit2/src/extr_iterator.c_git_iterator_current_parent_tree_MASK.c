
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * tree; } ;
typedef TYPE_2__ tree_iterator_frame ;
struct TYPE_6__ {size_t size; TYPE_2__* ptr; } ;
struct TYPE_8__ {TYPE_1__ frames; } ;
typedef TYPE_3__ tree_iterator ;
typedef int git_tree ;
struct TYPE_9__ {scalar_t__ type; } ;
typedef TYPE_4__ git_iterator ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

int FUNC_1(
 const git_tree **VAR_1, git_iterator *VAR_2, size_t VAR_3)
{
 tree_iterator *VAR_4;
 tree_iterator_frame *VAR_5;

 FUNC_0(VAR_2->type == VAR_0);

 VAR_4 = (tree_iterator *)VAR_2;

 FUNC_0(VAR_3 < VAR_4->frames.size);
 VAR_5 = &VAR_4->frames.ptr[VAR_4->frames.size-VAR_3-1];

 *VAR_1 = VAR_5->tree;
 return 0;
}
