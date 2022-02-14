
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int repo; } ;
typedef TYPE_1__ git_push ;
typedef int git_object ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,char*) ;

__attribute__((used)) static int FUNC_3(git_push *VAR_3, char *VAR_4)
{

 git_object *VAR_5;
 int VAR_6 = FUNC_2(&VAR_5, VAR_3->repo, VAR_4);
 FUNC_1(VAR_5);

 if (!VAR_6)
  return 0;

 if (VAR_6 == VAR_0)
  FUNC_0(VAR_2,
   "src refspec '%s' does not match any existing object", VAR_4);
 else
  FUNC_0(VAR_1, "not a valid reference '%s'", VAR_4);
 return -1;
}
