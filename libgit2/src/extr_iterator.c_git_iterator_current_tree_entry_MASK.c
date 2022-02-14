
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree_iterator_frame ;
struct TYPE_5__ {int * tree_entry; } ;
typedef TYPE_1__ tree_iterator_entry ;
typedef int tree_iterator ;
typedef int git_tree_entry ;
struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_2__ git_iterator ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

int FUNC_3(
 const git_tree_entry **VAR_1, git_iterator *VAR_2)
{
 tree_iterator *VAR_3;
 tree_iterator_frame *VAR_4;
 tree_iterator_entry *VAR_5;

 FUNC_0(VAR_2->type == VAR_0);

 VAR_3 = (tree_iterator *)VAR_2;

 VAR_4 = FUNC_2(VAR_3);
 VAR_5 = FUNC_1(VAR_4);

 *VAR_1 = VAR_5->tree_entry;
 return 0;
}
