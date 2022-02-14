
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum notes_merge_strategy { ____Placeholder_notes_merge_strategy } notes_merge_strategy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,char*) ;

int FUNC_1(const char *VAR_5, enum notes_merge_strategy *VAR_6)
{
 if (!FUNC_0(VAR_5, "manual"))
  *VAR_6 = VAR_1;
 else if (!FUNC_0(VAR_5, "ours"))
  *VAR_6 = VAR_2;
 else if (!FUNC_0(VAR_5, "theirs"))
  *VAR_6 = VAR_3;
 else if (!FUNC_0(VAR_5, "union"))
  *VAR_6 = VAR_4;
 else if (!FUNC_0(VAR_5, "cat_sort_uniq"))
  *VAR_6 = VAR_0;
 else
  return -1;

 return 0;
}
