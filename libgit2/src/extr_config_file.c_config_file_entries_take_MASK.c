
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_config_entries ;
struct TYPE_3__ {int values_mutex; int * entries; } ;
typedef TYPE_1__ config_file_backend ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(git_config_entries **VAR_1, config_file_backend *VAR_2)
{
 int VAR_3;

 if ((VAR_3 = FUNC_2(&VAR_2->values_mutex)) < 0) {
  FUNC_1(VAR_0, "failed to lock config backend");
  return VAR_3;
 }

 FUNC_0(VAR_2->entries);
 *VAR_1 = VAR_2->entries;

 FUNC_3(&VAR_2->values_mutex);

 return 0;
}
