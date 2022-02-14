
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_configmap_t ;
struct TYPE_3__ {int map_value; char* str_match; int type; } ;
typedef TYPE_1__ git_configmap ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

int FUNC_1(git_configmap_t *VAR_2, const char **VAR_3,
          const git_configmap *VAR_4, size_t VAR_5, int VAR_6)
{
 size_t VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  const git_configmap *VAR_8 = &VAR_4[VAR_7];

  if (VAR_8->map_value != VAR_6)
   continue;

  *VAR_2 = VAR_8->type;
  *VAR_3 = VAR_8->str_match;
  return 0;
 }

 FUNC_0(VAR_1, "invalid enum value");
 return VAR_0;
}
