
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_dir {int * dir; } ;
typedef int mrb_state ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct mrb_dir*) ;

void
FUNC_2(mrb_state *VAR_0, void *VAR_1)
{
  struct mrb_dir *VAR_2 = (struct mrb_dir *)VAR_1;

  if (VAR_2->dir) {
    FUNC_0(VAR_2->dir);
    VAR_2->dir = ((void*)0);
  }
  FUNC_1(VAR_0, VAR_2);
}
