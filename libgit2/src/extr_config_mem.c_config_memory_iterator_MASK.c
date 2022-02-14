
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_config_iterator ;
typedef int git_config_entries ;
typedef int git_config_backend ;
struct TYPE_2__ {int entries; } ;
typedef TYPE_1__ config_memory_backend ;


 int FUNC_0 (int **,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *) ;

__attribute__((used)) static int FUNC_3(
 git_config_iterator **VAR_0,
 git_config_backend *VAR_1)
{
 config_memory_backend *VAR_2 = (config_memory_backend *) VAR_1;
 git_config_entries *VAR_3;
 int VAR_4;

 if ((VAR_4 = FUNC_0(&VAR_3, VAR_2->entries)) < 0)
  goto out;

 if ((VAR_4 = FUNC_2(VAR_0, VAR_3)) < 0)
  goto out;

out:

 FUNC_1(VAR_3);
 return VAR_4;
}
