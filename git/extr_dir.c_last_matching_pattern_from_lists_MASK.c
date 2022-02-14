
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_pattern {int dummy; } ;
struct index_state {int dummy; } ;
struct exclude_list_group {int nr; int * pl; } ;
struct dir_struct {struct exclude_list_group* exclude_list_group; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct path_pattern* FUNC_0 (char const*,int,char const*,int*,int *,struct index_state*) ;

__attribute__((used)) static struct path_pattern *FUNC_1(
  struct dir_struct *VAR_2, struct index_state *VAR_3,
  const char *VAR_4, int VAR_5,
  const char *VAR_6, int *VAR_7)
{
 int VAR_8, VAR_9;
 struct exclude_list_group *VAR_10;
 struct path_pattern *VAR_11;
 for (VAR_8 = VAR_0; VAR_8 <= VAR_1; VAR_8++) {
  VAR_10 = &VAR_2->exclude_list_group[VAR_8];
  for (VAR_9 = VAR_10->nr - 1; VAR_9 >= 0; VAR_9--) {
   VAR_11 = FUNC_0(
    VAR_4, VAR_5, VAR_6, VAR_7,
    &VAR_10->pl[VAR_9], VAR_3);
   if (VAR_11)
    return VAR_11;
  }
 }
 return ((void*)0);
}
