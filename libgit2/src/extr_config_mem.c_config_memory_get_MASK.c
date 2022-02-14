
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_config_entry ;
typedef int git_config_backend ;
struct TYPE_2__ {int entries; } ;
typedef TYPE_1__ config_memory_backend ;


 int FUNC_0 (int **,int ,char const*) ;

__attribute__((used)) static int FUNC_1(git_config_backend *VAR_0, const char *VAR_1, git_config_entry **VAR_2)
{
 config_memory_backend *VAR_3 = (config_memory_backend *) VAR_0;
 return FUNC_0(VAR_2, VAR_3->entries, VAR_1);
}
