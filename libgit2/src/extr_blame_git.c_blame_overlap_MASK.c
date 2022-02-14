
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_blame__origin ;
struct TYPE_8__ {scalar_t__ suspect; int member_0; } ;
typedef TYPE_1__ git_blame__entry ;
typedef int git_blame ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,size_t,size_t,size_t,int *) ;

__attribute__((used)) static int FUNC_3(
  git_blame *VAR_0,
  git_blame__entry *VAR_1,
  size_t VAR_2,
  size_t VAR_3,
  size_t VAR_4,
  git_blame__origin *VAR_5)
{
 git_blame__entry VAR_6[3] = {{0}};

 FUNC_2(VAR_6, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6[1].suspect)
  if (FUNC_1(VAR_0, VAR_6, VAR_1) < 0)
   return -1;
 FUNC_0(VAR_6);

 return 0;
}
