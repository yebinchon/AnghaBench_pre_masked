
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* theirs; struct TYPE_4__* ours; struct TYPE_4__* ancestor; } ;
typedef TYPE_1__ git_index_name_entry ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(git_index_name_entry *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_0(VAR_0->ancestor);
 FUNC_0(VAR_0->ours);
 FUNC_0(VAR_0->theirs);
 FUNC_0(VAR_0);
}
