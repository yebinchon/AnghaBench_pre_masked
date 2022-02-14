
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct merge_reuc_entry {scalar_t__ ancestor_mode; scalar_t__ our_mode; scalar_t__ their_mode; int their_oid_str; int our_oid_str; int ancestor_oid_str; int path; } ;
typedef int git_oid ;
struct TYPE_3__ {scalar_t__* mode; int * oid; int path; } ;
typedef TYPE_1__ git_index_reuc_entry ;
typedef int git_index ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,size_t) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;

int FUNC_6(git_index *VAR_0, const struct merge_reuc_entry VAR_1[], size_t VAR_2)
{
 size_t VAR_3;
 const git_index_reuc_entry *VAR_4;
 git_oid VAR_5;





 if (FUNC_1(VAR_0) != VAR_2)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if ((VAR_4 = FUNC_2(VAR_0, VAR_3)) == ((void*)0))
   return 0;

  if (FUNC_5(VAR_4->path, VAR_1[VAR_3].path) != 0 ||
   VAR_4->mode[0] != VAR_1[VAR_3].ancestor_mode ||
   VAR_4->mode[1] != VAR_1[VAR_3].our_mode ||
   VAR_4->mode[2] != VAR_1[VAR_3].their_mode)
   return 0;

  if (VAR_1[VAR_3].ancestor_mode > 0) {
   FUNC_0(FUNC_4(&VAR_5, VAR_1[VAR_3].ancestor_oid_str));

   if (FUNC_3(&VAR_4->oid[0], &VAR_5) != 0)
    return 0;
  }

  if (VAR_1[VAR_3].our_mode > 0) {
   FUNC_0(FUNC_4(&VAR_5, VAR_1[VAR_3].our_oid_str));

   if (FUNC_3(&VAR_4->oid[1], &VAR_5) != 0)
    return 0;
  }

  if (VAR_1[VAR_3].their_mode > 0) {
   FUNC_0(FUNC_4(&VAR_5, VAR_1[VAR_3].their_oid_str));

   if (FUNC_3(&VAR_4->oid[2], &VAR_5) != 0)
    return 0;
  }
 }

 return 1;
}
