
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* tree_entry; int parent_path; } ;
typedef TYPE_1__ tree_iterator_entry ;
typedef int git_buf ;
struct TYPE_5__ {int filename; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,char) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(
 git_buf *VAR_0,
 tree_iterator_entry *VAR_1)
{
 FUNC_0(VAR_0);

 if (VAR_1->parent_path)
  FUNC_1(VAR_0, VAR_1->parent_path, VAR_1->tree_entry->filename);
 else
  FUNC_4(VAR_0, VAR_1->tree_entry->filename);

 if (FUNC_5(VAR_1->tree_entry))
  FUNC_3(VAR_0, '/');

 if (FUNC_2(VAR_0))
  return -1;

 return 0;
}
