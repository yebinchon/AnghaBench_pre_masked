
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* theirs; void* ours; void* ancestor; } ;
typedef TYPE_1__ git_index_name_entry ;
struct TYPE_9__ {int dirty; int names; } ;
typedef TYPE_2__ git_index ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int,int) ;
 void* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(git_index *VAR_0,
 const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
 git_index_name_entry *VAR_4;

 FUNC_1((VAR_1 && VAR_2) || (VAR_1 && VAR_3) || (VAR_2 && VAR_3));

 VAR_4 = FUNC_2(1, sizeof(git_index_name_entry));
 FUNC_0(VAR_4);

 if ((VAR_1 && !(VAR_4->ancestor = FUNC_3(VAR_1))) ||
  (VAR_2 && !(VAR_4->ours = FUNC_3(VAR_2))) ||
  (VAR_3 && !(VAR_4->theirs = FUNC_3(VAR_3))) ||
  FUNC_4(&VAR_0->names, VAR_4) < 0)
 {
  FUNC_5(VAR_4);
  return -1;
 }

 VAR_0->dirty = 1;
 return 0;
}
