
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_5__ {scalar_t__ type; int name; } ;
typedef TYPE_1__ git_reference ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__**,int *,int ,int) ;

int FUNC_4(bool *VAR_3, const git_reference *VAR_4, git_repository *VAR_5)
{
 int VAR_6;
 git_reference *VAR_7;
 FUNC_0(VAR_3 && VAR_4 && VAR_5);

 if (VAR_4->type == VAR_2) {
  *VAR_3 = 0;
  return 0;
 }

 VAR_6 = FUNC_3(&VAR_7, VAR_5, VAR_4->name, -1);
 FUNC_2(VAR_7);

 if (VAR_6 != 0 && VAR_6 != VAR_0)
  return VAR_6;
 else if (VAR_6 == VAR_0 && FUNC_1(VAR_4->name, VAR_1) == 0)
  *VAR_3 = 1;
 else
  *VAR_3 = 0;

 return 0;
}
