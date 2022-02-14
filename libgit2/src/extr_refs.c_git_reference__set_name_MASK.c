
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int name; } ;
typedef TYPE_1__ git_reference ;


 int FUNC_0 (size_t*,size_t,int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (int ,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;

git_reference *FUNC_4(
 git_reference *VAR_0, const char *VAR_1)
{
 size_t VAR_2 = FUNC_3(VAR_1);
 size_t VAR_3;
 git_reference *VAR_4 = ((void*)0);

 if (!FUNC_0(&VAR_3, sizeof(git_reference), VAR_2) &&
  !FUNC_0(&VAR_3, VAR_3, 1) &&
  (VAR_4 = FUNC_1(VAR_0, VAR_3)) != ((void*)0))
  FUNC_2(VAR_4->name, VAR_1, VAR_2 + 1);

 return VAR_4;
}
