
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_vector ;
struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ git_config_entry ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,size_t) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char const*,char*) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(const git_config_entry *VAR_0, void *VAR_1)
{
 git_vector *VAR_2 = VAR_1;
 const char *VAR_3 = VAR_0->name + FUNC_4("remote.");
 size_t VAR_4 = FUNC_4(VAR_3);
 char *VAR_5;



 if (!FUNC_3(&VAR_3[VAR_4 - 4], ".url"))
  VAR_5 = FUNC_1(VAR_3, VAR_4 - 4);
 else
  VAR_5 = FUNC_1(VAR_3, VAR_4 - 8);
 FUNC_0(VAR_5);

 return FUNC_2(VAR_2, VAR_5);
}
