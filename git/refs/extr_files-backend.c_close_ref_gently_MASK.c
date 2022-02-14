
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_lock {int lk; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct ref_lock *VAR_0)
{
 if (FUNC_0(&VAR_0->lk))
  return -1;
 return 0;
}
