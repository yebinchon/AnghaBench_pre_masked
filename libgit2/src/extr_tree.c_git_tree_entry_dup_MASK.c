
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int attr; int oid; int filename_len; int filename; } ;
typedef TYPE_1__ git_tree_entry ;


 TYPE_1__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__ const*) ;

int FUNC_2(git_tree_entry **VAR_0, const git_tree_entry *VAR_1)
{
 git_tree_entry *VAR_2;

 FUNC_1(VAR_1);

 VAR_2 = FUNC_0(VAR_1->filename, VAR_1->filename_len, VAR_1->oid);
 if (VAR_2 == ((void*)0))
  return -1;

 VAR_2->attr = VAR_1->attr;

 *VAR_0 = VAR_2;
 return 0;
}
