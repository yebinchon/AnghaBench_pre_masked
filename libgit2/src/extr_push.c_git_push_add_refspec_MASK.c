
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int push_spec ;
struct TYPE_4__ {int specs; } ;
typedef TYPE_1__ git_push ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int **,char const*) ;

int FUNC_2(git_push *VAR_0, const char *VAR_1)
{
 push_spec *VAR_2;

 if (FUNC_1(VAR_0, &VAR_2, VAR_1) < 0 ||
     FUNC_0(&VAR_0->specs, VAR_2) < 0)
  return -1;

 return 0;
}
