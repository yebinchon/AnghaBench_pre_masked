
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_name_entry {int dummy; } ;
typedef int git_index_name_entry ;
typedef int git_index ;


 size_t FUNC_0 (int *) ;
 int * FUNC_1 (int *,size_t) ;
 int FUNC_2 (struct merge_name_entry const*,int const*) ;

int FUNC_3(git_index *VAR_0, const struct merge_name_entry VAR_1[], size_t VAR_2)
{
 size_t VAR_3;
 const git_index_name_entry *VAR_4;





 if (FUNC_0(VAR_0) != VAR_2)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if ((VAR_4 = FUNC_1(VAR_0, VAR_3)) == ((void*)0))
   return 0;

  if (! FUNC_2(&VAR_1[VAR_3], VAR_4))
   return 0;
 }

 return 1;
}
