
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int * mnt_op; } ;


 int VAR_0 ;

int
FUNC_0(const struct mount *VAR_1)
{

 if (VAR_1->mnt_op == &VAR_0)
  return (1);
 return (0);
}
