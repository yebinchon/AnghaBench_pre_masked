
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* value; } ;
typedef TYPE_1__ git_config_entry ;
typedef int git_config ;
typedef int git_buf ;


 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__**,int *,char const*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,char const*) ;

__attribute__((used)) static int FUNC_7(
 char **VAR_1, git_config *VAR_2, const char *VAR_3, const char *VAR_4)
{
 git_buf VAR_5 = VAR_0;
 int VAR_6;
 git_config_entry *VAR_7 = ((void*)0);

 *VAR_1 = ((void*)0);

 if ((VAR_6 = FUNC_3(&VAR_7, VAR_2, VAR_3, 0)) < 0)
  return VAR_6;

 if (VAR_7) {
  const char *VAR_8 = VAR_7->value;


  if (VAR_8 && VAR_8[0] == '~' && VAR_8[1] == '/') {
   if (! (VAR_6 = FUNC_5(&VAR_5, &VAR_8[2])))
    *VAR_1 = FUNC_1(&VAR_5);
  } else if (VAR_8) {
   *VAR_1 = FUNC_0(VAR_8);
  }
 }
 else if (!FUNC_6(&VAR_5, VAR_4)) {
  *VAR_1 = FUNC_1(&VAR_5);
 }

 FUNC_4(VAR_7);
 FUNC_2(&VAR_5);

 return VAR_6;
}
