
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * combine_notes_fn ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static combine_notes_fn FUNC_1(const char *VAR_4)
{
 if (!FUNC_0(VAR_4, "overwrite"))
  return VAR_3;
 else if (!FUNC_0(VAR_4, "ignore"))
  return VAR_2;
 else if (!FUNC_0(VAR_4, "concatenate"))
  return VAR_1;
 else if (!FUNC_0(VAR_4, "cat_sort_uniq"))
  return VAR_0;
 else
  return ((void*)0);
}
