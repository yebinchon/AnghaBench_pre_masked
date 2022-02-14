
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct merge_index_conflict_data {int dummy; } ;
struct TYPE_3__ {size_t length; int ** contents; } ;
typedef TYPE_1__ git_vector ;
typedef int git_merge_diff ;


 int FUNC_0 (struct merge_index_conflict_data const*,int *) ;

int FUNC_1(git_vector *VAR_0, const struct merge_index_conflict_data VAR_1[], size_t VAR_2)
{
 git_merge_diff *VAR_3;
 size_t VAR_4;

 if (VAR_0->length != VAR_2)
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = VAR_0->contents[VAR_4];

  if (!FUNC_0(&VAR_1[VAR_4], VAR_3))
   return 0;
 }

 return 1;
}
