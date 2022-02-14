
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ include_depth; } ;
typedef TYPE_1__ git_config_entry ;
typedef int git_config_entries ;
struct TYPE_6__ {TYPE_1__* entry; int * next; } ;
typedef TYPE_2__ config_entry_list ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__**,int *,char const*) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(git_config_entry **VAR_1, git_config_entries *VAR_2, const char *VAR_3)
{
 config_entry_list *VAR_4;
 int VAR_5;

 if ((VAR_5 = FUNC_0(&VAR_4, VAR_2, VAR_3)) < 0)
  return VAR_5;

 if (VAR_4->next != ((void*)0)) {
  FUNC_1(VAR_0, "entry is not unique due to being a multivar");
  return -1;
 }

 if (VAR_4->entry->include_depth) {
  FUNC_1(VAR_0, "entry is not unique due to being included");
  return -1;
 }

 *VAR_1 = VAR_4->entry;

 return 0;
}
