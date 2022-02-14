
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct untracked_cache_dir {int check_only; } ;
struct read_data {struct untracked_cache_dir** ucd; } ;



__attribute__((used)) static void FUNC_0(size_t VAR_0, void *VAR_1)
{
 struct read_data *VAR_2 = VAR_1;
 struct untracked_cache_dir *VAR_3 = VAR_2->ucd[VAR_0];
 VAR_3->check_only = 1;
}
