
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_index_name_entry ;
typedef int git_index ;
struct TYPE_8__ {int update_conflicts; int target; } ;
typedef TYPE_1__ checkout_data ;
struct TYPE_9__ {int name_collision; int one_to_two; int * ours; int * theirs; } ;
typedef TYPE_2__ checkout_conflictdata ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__**,TYPE_2__**,TYPE_2__**,TYPE_1__*,int const*) ;
 size_t FUNC_1 (int *) ;
 int * FUNC_2 (int *,size_t) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_5(
 checkout_data *VAR_1)
{
 git_index *VAR_2;
 const git_index_name_entry *VAR_3;
 checkout_conflictdata *VAR_4, *VAR_5, *VAR_6;
 size_t VAR_7, VAR_8;
 int VAR_9 = 0;

 if ((VAR_2 = FUNC_3(VAR_1->target)) == ((void*)0))
  return 0;


 VAR_8 = FUNC_1(VAR_2);

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_3 = FUNC_2(VAR_2, VAR_7);

  if ((VAR_9 = FUNC_0(
   &VAR_4, &VAR_5, &VAR_6,
   VAR_1, VAR_3)) < 0)
   goto done;

  if (VAR_5 && VAR_5 != VAR_4) {
   VAR_4->ours = VAR_5->ours;
   VAR_5->ours = ((void*)0);

   if (VAR_5->theirs)
    VAR_5->name_collision = 1;

   if (VAR_5->name_collision)
    VAR_4->name_collision = 1;
  }

  if (VAR_6 && VAR_6 != VAR_4) {
   VAR_4->theirs = VAR_6->theirs;
   VAR_6->theirs = ((void*)0);

   if (VAR_6->ours)
    VAR_6->name_collision = 1;

   if (VAR_6->name_collision)
    VAR_4->name_collision = 1;
  }

  if (VAR_5 && VAR_5 != VAR_4 &&
   VAR_6 && VAR_6 != VAR_4)
   VAR_4->one_to_two = 1;
 }

 FUNC_4(
  &VAR_1->update_conflicts, VAR_0, ((void*)0));

done:
 return VAR_9;
}
