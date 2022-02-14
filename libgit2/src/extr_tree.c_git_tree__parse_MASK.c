
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int odb_obj; } ;
typedef TYPE_1__ git_tree ;
typedef int git_odb_object ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int ) ;

int FUNC_4(void *VAR_0, git_odb_object *VAR_1)
{
 git_tree *VAR_2 = VAR_0;

 if ((FUNC_3(VAR_2,
     FUNC_0(VAR_1),
     FUNC_2(VAR_1))) < 0)
  return -1;

 if (FUNC_1(&VAR_2->odb_obj, VAR_1) < 0)
  return -1;

 return 0;
}
