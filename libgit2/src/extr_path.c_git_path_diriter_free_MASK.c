
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int path; int ic; int * dir; } ;
typedef TYPE_1__ git_path_diriter ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(git_path_diriter *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->dir) {
  FUNC_0(VAR_0->dir);
  VAR_0->dir = ((void*)0);
 }





 FUNC_1(&VAR_0->path);
}
