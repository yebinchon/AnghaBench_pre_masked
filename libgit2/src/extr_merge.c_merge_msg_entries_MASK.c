
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_msg_entry {int dummy; } ;
typedef int git_vector ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct merge_msg_entry*) ;

__attribute__((used)) static int FUNC_2(
 git_vector *VAR_0,
 const struct merge_msg_entry *VAR_1,
 size_t VAR_2,
 int (*VAR_3)(const struct merge_msg_entry *VAR_4, git_vector *VAR_5))
{
 size_t VAR_6;
 int VAR_7, VAR_8 = 0;

 FUNC_0(VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if ((VAR_7 = VAR_3(&VAR_1[VAR_6], VAR_0)) < 0)
   return VAR_7;
  else if (!VAR_7)
   continue;

  FUNC_1(VAR_0, (struct merge_msg_entry *)&VAR_1[VAR_6]);
  VAR_8++;
 }

 return VAR_8;
}
