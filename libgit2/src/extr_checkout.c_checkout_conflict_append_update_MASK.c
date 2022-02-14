
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_index_entry ;
struct TYPE_9__ {int update_conflicts; int repo; } ;
typedef TYPE_1__ checkout_data ;
struct TYPE_10__ {int const* theirs; int const* ours; int const* ancestor; } ;
typedef TYPE_2__ checkout_conflictdata ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(
 const git_index_entry *VAR_0,
 const git_index_entry *VAR_1,
 const git_index_entry *VAR_2,
 void *VAR_3)
{
 checkout_data *VAR_4 = VAR_3;
 checkout_conflictdata *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(1, sizeof(checkout_conflictdata));
 FUNC_0(VAR_5);

 VAR_5->ancestor = VAR_0;
 VAR_5->ours = VAR_1;
 VAR_5->theirs = VAR_2;

 if ((VAR_6 = FUNC_2(VAR_5)) < 0 ||
  (VAR_6 = FUNC_1(VAR_4->repo, VAR_5)) < 0)
 {
  FUNC_4(VAR_5);
  return VAR_6;
 }

 if (FUNC_5(&VAR_4->update_conflicts, VAR_5))
  return -1;

 return 0;
}
